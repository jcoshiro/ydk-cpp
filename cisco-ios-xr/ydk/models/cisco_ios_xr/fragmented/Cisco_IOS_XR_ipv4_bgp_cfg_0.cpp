
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Bgp()
{
    yang_name = "bgp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg";
}

Bgp::~Bgp()
{
}

bool Bgp::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";

    return path_buffer.str();

}

EntityPath Bgp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Bgp::clone_ptr() const
{
    return std::make_shared<Bgp>();
}

std::string Bgp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bgp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bgp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Bgp::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "instance"; yang_parent_name = "bgp";
}

Bgp::Instance::~Instance()
{
}

bool Bgp::Instance::has_data() const
{
    for (std::size_t index=0; index<instance_as.size(); index++)
    {
        if(instance_as[index]->has_data())
            return true;
    }
    return instance_name.is_set;
}

bool Bgp::Instance::has_operation() const
{
    for (std::size_t index=0; index<instance_as.size(); index++)
    {
        if(instance_as[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string Bgp::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance-as")
    {
        for(auto const & c : instance_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs>();
        c->parent = this;
        instance_as.push_back(std::move(c));
        children[segment_path] = instance_as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::get_children()
{
    for (auto const & c : instance_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

Bgp::Instance::InstanceAs::InstanceAs()
    :
    as{YType::uint32, "as"}
{
    yang_name = "instance-as"; yang_parent_name = "instance";
}

Bgp::Instance::InstanceAs::~InstanceAs()
{
}

bool Bgp::Instance::InstanceAs::has_data() const
{
    for (std::size_t index=0; index<four_byte_as.size(); index++)
    {
        if(four_byte_as[index]->has_data())
            return true;
    }
    return as.is_set;
}

bool Bgp::Instance::InstanceAs::has_operation() const
{
    for (std::size_t index=0; index<four_byte_as.size(); index++)
    {
        if(four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(as.operation);
}

std::string Bgp::Instance::InstanceAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InstanceAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "four-byte-as")
    {
        for(auto const & c : four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs>();
        c->parent = this;
        four_byte_as.push_back(std::move(c));
        children[segment_path] = four_byte_as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::get_children()
{
    for (auto const & c : four_byte_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::FourByteAs()
    :
    as{YType::uint32, "as"},
    bgp_running{YType::empty, "bgp-running"}
    	,
    default_vrf(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>())
	,vrfs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "four-byte-as"; yang_parent_name = "instance-as";
}

Bgp::Instance::InstanceAs::FourByteAs::~FourByteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_data() const
{
    return as.is_set
	|| bgp_running.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(bgp_running.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (bgp_running.is_set || is_set(bgp_running.operation)) leaf_name_data.push_back(bgp_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "bgp-running")
    {
        bgp_running = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "four-byte-as";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::~Vrfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_children()
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

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>())
	,vrf_neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>())
{
    vrf_global->parent = this;
    children["vrf-global"] = vrf_global;

    vrf_neighbors->parent = this;
    children["vrf-neighbors"] = vrf_neighbors;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::~Vrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (vrf_global !=  nullptr && vrf_global->has_data())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_global !=  nullptr && vrf_global->has_operation())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-global")
    {
        if(vrf_global != nullptr)
        {
            children["vrf-global"] = vrf_global;
        }
        else
        {
            vrf_global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>();
            vrf_global->parent = this;
            children["vrf-global"] = vrf_global;
        }
        return children.at("vrf-global");
    }

    if(child_yang_name == "vrf-neighbors")
    {
        if(vrf_neighbors != nullptr)
        {
            children["vrf-neighbors"] = vrf_neighbors;
        }
        else
        {
            vrf_neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>();
            vrf_neighbors->parent = this;
            children["vrf-neighbors"] = vrf_neighbors;
        }
        return children.at("vrf-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_children()
{
    if(children.find("vrf-global") == children.end())
    {
        if(vrf_global != nullptr)
        {
            children["vrf-global"] = vrf_global;
        }
    }

    if(children.find("vrf-neighbors") == children.end())
    {
        if(vrf_neighbors != nullptr)
        {
            children["vrf-neighbors"] = vrf_neighbors;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobal()
    :
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    default_info_originate{YType::empty, "default-info-originate"},
    default_metric{YType::uint32, "default-metric"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    exists{YType::empty, "exists"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    local_preference{YType::uint32, "local-preference"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    router_id{YType::str, "router-id"}
    	,
    bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>())
	,global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>())
	,mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>())
	,receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>())
	,route_distinguisher(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>())
	,send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>())
	,vrf_global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    global_timers->parent = this;
    children["global-timers"] = global_timers;

    mpls_activated_interfaces->parent = this;
    children["mpls-activated-interfaces"] = mpls_activated_interfaces;

    receive_socket_buffer_sizes->parent = this;
    children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;

    route_distinguisher->parent = this;
    children["route-distinguisher"] = route_distinguisher;

    send_socket_buffer_sizes->parent = this;
    children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;

    vrf_global_afs->parent = this;
    children["vrf-global-afs"] = vrf_global_afs;

    yang_name = "vrf-global"; yang_parent_name = "vrf";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::~VrfGlobal()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_data() const
{
    return best_path_aigp_ignore.is_set
	|| best_path_as_multipath_relax.is_set
	|| best_path_as_path_length.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_cost_community.is_set
	|| best_path_med_always.is_set
	|| best_path_med_missing.is_set
	|| best_path_router_id.is_set
	|| default_info_originate.is_set
	|| default_metric.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_enforce_first_as.is_set
	|| disable_fast_external_fallover.is_set
	|| disable_msg_log.is_set
	|| disable_neighbor_logging.is_set
	|| exists.is_set
	|| igp_redist_internal.is_set
	|| local_preference.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| router_id.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_operation() const
{
    return is_set(operation)
	|| is_set(best_path_aigp_ignore.operation)
	|| is_set(best_path_as_multipath_relax.operation)
	|| is_set(best_path_as_path_length.operation)
	|| is_set(best_path_confederation_paths.operation)
	|| is_set(best_path_cost_community.operation)
	|| is_set(best_path_med_always.operation)
	|| is_set(best_path_med_missing.operation)
	|| is_set(best_path_router_id.operation)
	|| is_set(default_info_originate.operation)
	|| is_set(default_metric.operation)
	|| is_set(disable_auto_soft_reset.operation)
	|| is_set(disable_enforce_first_as.operation)
	|| is_set(disable_fast_external_fallover.operation)
	|| is_set(disable_msg_log.operation)
	|| is_set(disable_neighbor_logging.operation)
	|| is_set(exists.operation)
	|| is_set(igp_redist_internal.operation)
	|| is_set(local_preference.operation)
	|| is_set(multi_path_as_path_ignore_onwards.operation)
	|| is_set(router_id.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfGlobal' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.operation)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.operation)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.operation)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.operation)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.operation)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.operation)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.operation)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.operation)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.operation)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.operation)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.operation)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.operation)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.operation)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (exists.is_set || is_set(exists.operation)) leaf_name_data.push_back(exists.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.operation)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.operation)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers != nullptr)
        {
            children["global-timers"] = global_timers;
        }
        else
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>();
            global_timers->parent = this;
            children["global-timers"] = global_timers;
        }
        return children.at("global-timers");
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces != nullptr)
        {
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
        else
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>();
            mpls_activated_interfaces->parent = this;
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
        return children.at("mpls-activated-interfaces");
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes != nullptr)
        {
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
        else
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>();
            receive_socket_buffer_sizes->parent = this;
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
        return children.at("receive-socket-buffer-sizes");
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
        else
        {
            route_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>();
            route_distinguisher->parent = this;
            children["route-distinguisher"] = route_distinguisher;
        }
        return children.at("route-distinguisher");
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes != nullptr)
        {
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
        else
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>();
            send_socket_buffer_sizes->parent = this;
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
        return children.at("send-socket-buffer-sizes");
    }

    if(child_yang_name == "vrf-global-afs")
    {
        if(vrf_global_afs != nullptr)
        {
            children["vrf-global-afs"] = vrf_global_afs;
        }
        else
        {
            vrf_global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>();
            vrf_global_afs->parent = this;
            children["vrf-global-afs"] = vrf_global_afs;
        }
        return children.at("vrf-global-afs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("global-timers") == children.end())
    {
        if(global_timers != nullptr)
        {
            children["global-timers"] = global_timers;
        }
    }

    if(children.find("mpls-activated-interfaces") == children.end())
    {
        if(mpls_activated_interfaces != nullptr)
        {
            children["mpls-activated-interfaces"] = mpls_activated_interfaces;
        }
    }

    if(children.find("receive-socket-buffer-sizes") == children.end())
    {
        if(receive_socket_buffer_sizes != nullptr)
        {
            children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
        }
    }

    if(children.find("route-distinguisher") == children.end())
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
    }

    if(children.find("send-socket-buffer-sizes") == children.end())
    {
        if(send_socket_buffer_sizes != nullptr)
        {
            children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
        }
    }

    if(children.find("vrf-global-afs") == children.end())
    {
        if(vrf_global_afs != nullptr)
        {
            children["vrf-global-afs"] = vrf_global_afs;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
    }
    if(value_path == "exists")
    {
        exists = value;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::RouteDistinguisher()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{
    yang_name = "route-distinguisher"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::~RouteDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteDistinguisher' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAfs()
{
    yang_name = "vrf-global-afs"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::~VrfGlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_global_af.size(); index++)
    {
        if(vrf_global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_global_af.size(); index++)
    {
        if(vrf_global_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfGlobalAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-global-af")
    {
        for(auto const & c : vrf_global_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf>();
        c->parent = this;
        vrf_global_af.push_back(std::move(c));
        children[segment_path] = vrf_global_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_children()
{
    for (auto const & c : vrf_global_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::VrfGlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    allow_vpn_default_originate{YType::boolean, "allow-vpn-default-originate"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    permanent_network{YType::str, "permanent-network"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    rt_download{YType::empty, "rt-download"},
    table_policy{YType::str, "table-policy"}
    	,
    additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>())
	,aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>())
	,allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>())
	,connected_routes(nullptr) // presence node
	,dampening(nullptr) // presence node
	,distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>())
	,ebgp(nullptr) // presence node
	,eibgp(nullptr) // presence node
	,eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>())
	,ibgp(nullptr) // presence node
	,label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>())
	,lisp_routes(nullptr) // presence node
	,mobile_routes(nullptr) // presence node
	,mvpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>())
	,ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>())
	,rip_routes(nullptr) // presence node
	,sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>())
	,static_routes(nullptr) // presence node
	,subscriber_routes(nullptr) // presence node
{
    additional_paths_selection->parent = this;
    children["additional-paths-selection"] = additional_paths_selection;

    aggregate_addresses->parent = this;
    children["aggregate-addresses"] = aggregate_addresses;

    allocate_label->parent = this;
    children["allocate-label"] = allocate_label;

    distance->parent = this;
    children["distance"] = distance;

    eigrp_routes->parent = this;
    children["eigrp-routes"] = eigrp_routes;

    label_mode->parent = this;
    children["label-mode"] = label_mode;

    mvpn->parent = this;
    children["mvpn"] = mvpn;

    ospf_routes->parent = this;
    children["ospf-routes"] = ospf_routes;

    sourced_networks->parent = this;
    children["sourced-networks"] = sourced_networks;

    yang_name = "vrf-global-af"; yang_parent_name = "vrf-global-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::~VrfGlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_data() const
{
    return af_name.is_set
	|| additional_paths_receive.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| allow_vpn_default_originate.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| disable_as_path_loop_check.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| permanent_network.is_set
	|| reset_weight_on_import.is_set
	|| rt_download.is_set
	|| table_policy.is_set
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (mvpn !=  nullptr && mvpn->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(additional_paths_receive.operation)
	|| is_set(additional_paths_send.operation)
	|| is_set(advertise_local_labeled_route_safi_unicast.operation)
	|| is_set(allow_vpn_default_originate.operation)
	|| is_set(attribute_download.operation)
	|| is_set(best_external.operation)
	|| is_set(disable_as_path_loop_check.operation)
	|| is_set(dynamic_med_interval.operation)
	|| is_set(enable.operation)
	|| is_set(next_hop_resolution_prefix_length_minimum.operation)
	|| is_set(permanent_network.operation)
	|| is_set(reset_weight_on_import.operation)
	|| is_set(rt_download.operation)
	|| is_set(table_policy.operation)
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (mvpn !=  nullptr && mvpn->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfGlobalAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.operation)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.operation)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.operation)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (allow_vpn_default_originate.is_set || is_set(allow_vpn_default_originate.operation)) leaf_name_data.push_back(allow_vpn_default_originate.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.operation)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.operation)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.operation)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.operation)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.operation)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.operation)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (rt_download.is_set || is_set(rt_download.operation)) leaf_name_data.push_back(rt_download.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.operation)) leaf_name_data.push_back(table_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection != nullptr)
        {
            children["additional-paths-selection"] = additional_paths_selection;
        }
        else
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>();
            additional_paths_selection->parent = this;
            children["additional-paths-selection"] = additional_paths_selection;
        }
        return children.at("additional-paths-selection");
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses != nullptr)
        {
            children["aggregate-addresses"] = aggregate_addresses;
        }
        else
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>();
            aggregate_addresses->parent = this;
            children["aggregate-addresses"] = aggregate_addresses;
        }
        return children.at("aggregate-addresses");
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label != nullptr)
        {
            children["allocate-label"] = allocate_label;
        }
        else
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>();
            allocate_label->parent = this;
            children["allocate-label"] = allocate_label;
        }
        return children.at("allocate-label");
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
        else
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes>();
            connected_routes->parent = this;
            children["connected-routes"] = connected_routes;
        }
        return children.at("connected-routes");
    }

    if(child_yang_name == "dampening")
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
        else
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening>();
            dampening->parent = this;
            children["dampening"] = dampening;
        }
        return children.at("dampening");
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
        else
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp>();
            ebgp->parent = this;
            children["ebgp"] = ebgp;
        }
        return children.at("ebgp");
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp != nullptr)
        {
            children["eibgp"] = eibgp;
        }
        else
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp>();
            eibgp->parent = this;
            children["eibgp"] = eibgp;
        }
        return children.at("eibgp");
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes != nullptr)
        {
            children["eigrp-routes"] = eigrp_routes;
        }
        else
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>();
            eigrp_routes->parent = this;
            children["eigrp-routes"] = eigrp_routes;
        }
        return children.at("eigrp-routes");
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
        else
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp>();
            ibgp->parent = this;
            children["ibgp"] = ibgp;
        }
        return children.at("ibgp");
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
        else
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>();
            label_mode->parent = this;
            children["label-mode"] = label_mode;
        }
        return children.at("label-mode");
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes != nullptr)
        {
            children["lisp-routes"] = lisp_routes;
        }
        else
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes>();
            lisp_routes->parent = this;
            children["lisp-routes"] = lisp_routes;
        }
        return children.at("lisp-routes");
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes != nullptr)
        {
            children["mobile-routes"] = mobile_routes;
        }
        else
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes>();
            mobile_routes->parent = this;
            children["mobile-routes"] = mobile_routes;
        }
        return children.at("mobile-routes");
    }

    if(child_yang_name == "mvpn")
    {
        if(mvpn != nullptr)
        {
            children["mvpn"] = mvpn;
        }
        else
        {
            mvpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>();
            mvpn->parent = this;
            children["mvpn"] = mvpn;
        }
        return children.at("mvpn");
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes != nullptr)
        {
            children["ospf-routes"] = ospf_routes;
        }
        else
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>();
            ospf_routes->parent = this;
            children["ospf-routes"] = ospf_routes;
        }
        return children.at("ospf-routes");
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes != nullptr)
        {
            children["rip-routes"] = rip_routes;
        }
        else
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes>();
            rip_routes->parent = this;
            children["rip-routes"] = rip_routes;
        }
        return children.at("rip-routes");
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
        else
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>();
            sourced_networks->parent = this;
            children["sourced-networks"] = sourced_networks;
        }
        return children.at("sourced-networks");
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes != nullptr)
        {
            children["static-routes"] = static_routes;
        }
        else
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes>();
            static_routes->parent = this;
            children["static-routes"] = static_routes;
        }
        return children.at("static-routes");
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes != nullptr)
        {
            children["subscriber-routes"] = subscriber_routes;
        }
        else
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes>();
            subscriber_routes->parent = this;
            children["subscriber-routes"] = subscriber_routes;
        }
        return children.at("subscriber-routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_children()
{
    if(children.find("additional-paths-selection") == children.end())
    {
        if(additional_paths_selection != nullptr)
        {
            children["additional-paths-selection"] = additional_paths_selection;
        }
    }

    if(children.find("aggregate-addresses") == children.end())
    {
        if(aggregate_addresses != nullptr)
        {
            children["aggregate-addresses"] = aggregate_addresses;
        }
    }

    if(children.find("allocate-label") == children.end())
    {
        if(allocate_label != nullptr)
        {
            children["allocate-label"] = allocate_label;
        }
    }

    if(children.find("connected-routes") == children.end())
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
    }

    if(children.find("dampening") == children.end())
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
    }

    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("ebgp") == children.end())
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
    }

    if(children.find("eibgp") == children.end())
    {
        if(eibgp != nullptr)
        {
            children["eibgp"] = eibgp;
        }
    }

    if(children.find("eigrp-routes") == children.end())
    {
        if(eigrp_routes != nullptr)
        {
            children["eigrp-routes"] = eigrp_routes;
        }
    }

    if(children.find("ibgp") == children.end())
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
    }

    if(children.find("label-mode") == children.end())
    {
        if(label_mode != nullptr)
        {
            children["label-mode"] = label_mode;
        }
    }

    if(children.find("lisp-routes") == children.end())
    {
        if(lisp_routes != nullptr)
        {
            children["lisp-routes"] = lisp_routes;
        }
    }

    if(children.find("mobile-routes") == children.end())
    {
        if(mobile_routes != nullptr)
        {
            children["mobile-routes"] = mobile_routes;
        }
    }

    if(children.find("mvpn") == children.end())
    {
        if(mvpn != nullptr)
        {
            children["mvpn"] = mvpn;
        }
    }

    if(children.find("ospf-routes") == children.end())
    {
        if(ospf_routes != nullptr)
        {
            children["ospf-routes"] = ospf_routes;
        }
    }

    if(children.find("rip-routes") == children.end())
    {
        if(rip_routes != nullptr)
        {
            children["rip-routes"] = rip_routes;
        }
    }

    if(children.find("sourced-networks") == children.end())
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
    }

    if(children.find("static-routes") == children.end())
    {
        if(static_routes != nullptr)
        {
            children["static-routes"] = static_routes;
        }
    }

    if(children.find("subscriber-routes") == children.end())
    {
        if(subscriber_routes != nullptr)
        {
            children["subscriber-routes"] = subscriber_routes;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
    }
    if(value_path == "allow-vpn-default-originate")
    {
        allow_vpn_default_originate = value;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
    }
    if(value_path == "best-external")
    {
        best_external = value;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
    }
    if(value_path == "rt-download")
    {
        rt_download = value;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::Mvpn()
    :
    single_forwarder_selection{YType::enumeration, "single-forwarder-selection"}
{
    yang_name = "mvpn"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::~Mvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_data() const
{
    return single_forwarder_selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_operation() const
{
    return is_set(operation)
	|| is_set(single_forwarder_selection.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mvpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (single_forwarder_selection.is_set || is_set(single_forwarder_selection.operation)) leaf_name_data.push_back(single_forwarder_selection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "single-forwarder-selection")
    {
        single_forwarder_selection = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::Ebgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "ebgp"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ebgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::Eibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "eibgp"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eibgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::Ibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{
    yang_name = "ibgp"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_operation() const
{
    return is_set(operation)
	|| is_set(order_by_igp_metric.operation)
	|| is_set(paths_value.operation)
	|| is_set(selective.operation)
	|| is_set(unequal_cost.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.operation)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.operation)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.operation)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.operation)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
    }
    if(value_path == "selective")
    {
        selective = value;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddresses()
{
    yang_name = "aggregate-addresses"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_data() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAddresses' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggregate-address")
    {
        for(auto const & c : aggregate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress>();
        c->parent = this;
        aggregate_address.push_back(std::move(c));
        children[segment_path] = aggregate_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_children()
{
    for (auto const & c : aggregate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    generate_set_info{YType::boolean, "generate-set-info"},
    route_policy_name{YType::str, "route-policy-name"},
    summary_only{YType::boolean, "summary-only"}
{
    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_confederation_set_info.is_set
	|| generate_set_info.is_set
	|| route_policy_name.is_set
	|| summary_only.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregate_addr.operation)
	|| is_set(aggregate_prefix.operation)
	|| is_set(generate_confederation_set_info.operation)
	|| is_set(generate_set_info.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(summary_only.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address" <<"[aggregate-addr='" <<aggregate_addr <<"']" <<"[aggregate-prefix='" <<aggregate_prefix <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.operation)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.operation)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.operation)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.operation)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.operation)) leaf_name_data.push_back(summary_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    route_policy_name{YType::str, "route-policy-name"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{
    yang_name = "dampening"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_data() const
{
    return half_life.is_set
	|| reuse_threshold.is_set
	|| route_policy_name.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(suppress_threshold.operation)
	|| is_set(suppress_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "rip-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "lisp-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_data() const
{
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "static-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{
    yang_name = "distance"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_data() const
{
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(internal_routes.operation)
	|| is_set(local_routes.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.operation)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.operation)) leaf_name_data.push_back(local_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "label-mode"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_operation() const
{
    return is_set(operation)
	|| is_set(label_allocation_mode.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelMode' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.operation)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoutes()
{
    yang_name = "eigrp-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_data() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eigrp-route")
    {
        for(auto const & c : eigrp_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute>();
        c->parent = this;
        eigrp_route.push_back(std::move(c));
        children[segment_path] = eigrp_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_children()
{
    for (auto const & c : eigrp_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(redist_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetworks()
{
    yang_name = "sourced-networks"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_data() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcedNetworks' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sourced-network")
    {
        for(auto const & c : sourced_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork>();
        c->parent = this;
        sourced_network.push_back(std::move(c));
        children[segment_path] = sourced_network.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_children()
{
    for (auto const & c : sourced_network)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "sourced-network"; yang_parent_name = "sourced-networks";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(network_addr.operation)
	|| is_set(network_prefix.operation)
	|| is_set(backdoor.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network" <<"[network-addr='" <<network_addr <<"']" <<"[network-prefix='" <<network_prefix <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcedNetwork' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.operation)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.operation)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "connected-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "allocate-label"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocateLabel' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    route_policy_name{YType::str, "route-policy-name"},
    selection{YType::enumeration, "selection"}
{
    yang_name = "additional-paths-selection"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_data() const
{
    return route_policy_name.is_set
	|| selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(selection.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPathsSelection' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (selection.is_set || is_set(selection.operation)) leaf_name_data.push_back(selection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "selection")
    {
        selection = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoutes()
{
    yang_name = "ospf-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_data() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-route")
    {
        for(auto const & c : ospf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute>();
        c->parent = this;
        ospf_route.push_back(std::move(c));
        children[segment_path] = ospf_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_children()
{
    for (auto const & c : ospf_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf-route"; yang_parent_name = "ospf-routes";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(redist_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfRoute' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "mobile-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "subscriber-routes"; yang_parent_name = "vrf-global-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(not_used.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberRoutes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.operation)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "not-used")
    {
        not_used = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterfaces()
{
    yang_name = "mpls-activated-interfaces"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_data() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsActivatedInterfaces' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-activated-interface")
    {
        for(auto const & c : mpls_activated_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface>();
        c->parent = this;
        mpls_activated_interface.push_back(std::move(c));
        children[segment_path] = mpls_activated_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_children()
{
    for (auto const & c : mpls_activated_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsActivatedInterface' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::GlobalTimers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive{YType::uint32, "keepalive"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "global-timers"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalTimers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendSocketBufferSizes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "vrf-global";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveSocketBufferSizes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbors()
{
    yang_name = "vrf-neighbors"; yang_parent_name = "vrf";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::~VrfNeighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor.size(); index++)
    {
        if(vrf_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.size(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor.size(); index++)
    {
        if(vrf_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.size(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighbors' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-neighbor")
    {
        for(auto const & c : vrf_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor>();
        c->parent = this;
        vrf_neighbor.push_back(std::move(c));
        children[segment_path] = vrf_neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-neighbor-prefix-length")
    {
        for(auto const & c : vrf_neighbor_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength>();
        c->parent = this;
        vrf_neighbor_prefix_length.push_back(std::move(c));
        children[segment_path] = vrf_neighbor_prefix_length.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_children()
{
    for (auto const & c : vrf_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_neighbor_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>())
	,vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    vrf_neighbor_afs->parent = this;
    children["vrf-neighbor-afs"] = vrf_neighbor_afs;

    yang_name = "vrf-neighbor"; yang_parent_name = "vrf-neighbors";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::~VrfNeighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_data() const
{
    return neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(neighbor_group_add_member.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighbor' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.operation)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs != nullptr)
        {
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
        else
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>();
            vrf_neighbor_afs->parent = this;
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
        return children.at("vrf-neighbor-afs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    if(children.find("vrf-neighbor-afs") == children.end())
    {
        if(vrf_neighbor_afs != nullptr)
        {
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAfs()
{
    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighborAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-neighbor-af")
    {
        for(auto const & c : vrf_neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf>();
        c->parent = this;
        vrf_neighbor_af.push_back(std::move(c));
        children[segment_path] = vrf_neighbor_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_children()
{
    for (auto const & c : vrf_neighbor_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(activate.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighborAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborPrefixLength()
    :
    neighbor_address{YType::str, "neighbor-address"},
    prefix_length{YType::uint32, "prefix-length"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>())
	,vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    vrf_neighbor_afs->parent = this;
    children["vrf-neighbor-afs"] = vrf_neighbor_afs;

    yang_name = "vrf-neighbor-prefix-length"; yang_parent_name = "vrf-neighbors";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::~VrfNeighborPrefixLength()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_data() const
{
    return neighbor_address.is_set
	|| prefix_length.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(neighbor_group_add_member.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-prefix-length" <<"[neighbor-address='" <<neighbor_address <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighborPrefixLength' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.operation)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs != nullptr)
        {
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
        else
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>();
            vrf_neighbor_afs->parent = this;
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
        return children.at("vrf-neighbor-afs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    if(children.find("vrf-neighbor-afs") == children.end())
    {
        if(vrf_neighbor_afs != nullptr)
        {
            children["vrf-neighbor-afs"] = vrf_neighbor_afs;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAfs()
{
    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighborAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-neighbor-af")
    {
        for(auto const & c : vrf_neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf>();
        c->parent = this;
        vrf_neighbor_af.push_back(std::move(c));
        children[segment_path] = vrf_neighbor_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_children()
{
    for (auto const & c : vrf_neighbor_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(activate.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNeighborAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::DefaultVrf()
    :
    bgp_entity(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>())
	,global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>())
{
    bgp_entity->parent = this;
    children["bgp-entity"] = bgp_entity;

    global->parent = this;
    children["global"] = global;

    yang_name = "default-vrf"; yang_parent_name = "four-byte-as";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::~DefaultVrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_data() const
{
    return (bgp_entity !=  nullptr && bgp_entity->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (bgp_entity !=  nullptr && bgp_entity->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultVrf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-entity")
    {
        if(bgp_entity != nullptr)
        {
            children["bgp-entity"] = bgp_entity;
        }
        else
        {
            bgp_entity = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>();
            bgp_entity->parent = this;
            children["bgp-entity"] = bgp_entity;
        }
        return children.at("bgp-entity");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_children()
{
    if(children.find("bgp-entity") == children.end())
    {
        if(bgp_entity != nullptr)
        {
            children["bgp-entity"] = bgp_entity;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::BgpEntity()
    :
    af_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>())
	,neighbor_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>())
	,neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>())
	,session_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>())
{
    af_groups->parent = this;
    children["af-groups"] = af_groups;

    neighbor_groups->parent = this;
    children["neighbor-groups"] = neighbor_groups;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    session_groups->parent = this;
    children["session-groups"] = session_groups;

    yang_name = "bgp-entity"; yang_parent_name = "default-vrf";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::~BgpEntity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_data() const
{
    return (af_groups !=  nullptr && af_groups->has_data())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (session_groups !=  nullptr && session_groups->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_operation() const
{
    return is_set(operation)
	|| (af_groups !=  nullptr && af_groups->has_operation())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (session_groups !=  nullptr && session_groups->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-entity";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpEntity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-groups")
    {
        if(af_groups != nullptr)
        {
            children["af-groups"] = af_groups;
        }
        else
        {
            af_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>();
            af_groups->parent = this;
            children["af-groups"] = af_groups;
        }
        return children.at("af-groups");
    }

    if(child_yang_name == "neighbor-groups")
    {
        if(neighbor_groups != nullptr)
        {
            children["neighbor-groups"] = neighbor_groups;
        }
        else
        {
            neighbor_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>();
            neighbor_groups->parent = this;
            children["neighbor-groups"] = neighbor_groups;
        }
        return children.at("neighbor-groups");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "session-groups")
    {
        if(session_groups != nullptr)
        {
            children["session-groups"] = session_groups;
        }
        else
        {
            session_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>();
            session_groups->parent = this;
            children["session-groups"] = session_groups;
        }
        return children.at("session-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_children()
{
    if(children.find("af-groups") == children.end())
    {
        if(af_groups != nullptr)
        {
            children["af-groups"] = af_groups;
        }
    }

    if(children.find("neighbor-groups") == children.end())
    {
        if(neighbor_groups != nullptr)
        {
            children["neighbor-groups"] = neighbor_groups;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("session-groups") == children.end())
    {
        if(session_groups != nullptr)
        {
            children["session-groups"] = session_groups;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "bgp-entity";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::~Neighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.size(); index++)
    {
        if(neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.size(); index++)
    {
        if(neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-prefix-length")
    {
        for(auto const & c : neighbor_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength>();
        c->parent = this;
        neighbor_prefix_length.push_back(std::move(c));
        children[segment_path] = neighbor_prefix_length.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : neighbor_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>())
	,neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_afs->parent = this;
    children["neighbor-afs"] = neighbor_afs;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(neighbor_group_add_member.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.operation)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-afs")
    {
        if(neighbor_afs != nullptr)
        {
            children["neighbor-afs"] = neighbor_afs;
        }
        else
        {
            neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>();
            neighbor_afs->parent = this;
            children["neighbor-afs"] = neighbor_afs;
        }
        return children.at("neighbor-afs");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-afs") == children.end())
    {
        if(neighbor_afs != nullptr)
        {
            children["neighbor-afs"] = neighbor_afs;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAfs()
{
    yang_name = "neighbor-afs"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::~NeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(std::move(c));
        children[segment_path] = neighbor_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_children()
{
    for (auto const & c : neighbor_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "neighbor-af"; yang_parent_name = "neighbor-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(activate.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(l2vpn_signalling.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| is_set(send_multicast_attr.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.operation)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.operation)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

const Enum::YLeaf BgpSiteOfOriginEnum::as {0, "as"};
const Enum::YLeaf BgpSiteOfOriginEnum::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpSiteOfOriginEnum::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpAdvRtEnum::bgp_regular_rt {0, "bgp-regular-rt"};
const Enum::YLeaf BgpAdvRtEnum::bgp_stitching_rt {1, "bgp-stitching-rt"};

const Enum::YLeaf BgpAfEncapsulationEnum::vx_lan {1, "vx-lan"};

const Enum::YLeaf BgpMvpnSfsSelectEnum::all_paths {1, "all-paths"};
const Enum::YLeaf BgpMvpnSfsSelectEnum::highest_ip_address {2, "highest-ip-address"};

const Enum::YLeaf BgpAigpCfgPoiEnum::pre_best_path {1, "pre-best-path"};
const Enum::YLeaf BgpAigpCfgPoiEnum::igp_cost {2, "igp-cost"};

const Enum::YLeaf BgpBfdEnableModeEnum::disable {0, "disable"};
const Enum::YLeaf BgpBfdEnableModeEnum::default_ {1, "default"};
const Enum::YLeaf BgpBfdEnableModeEnum::strict {2, "strict"};

const Enum::YLeaf BgpRpkiTransportEnum::tcp {0, "tcp"};
const Enum::YLeaf BgpRpkiTransportEnum::ssh {1, "ssh"};

const Enum::YLeaf BmpRouteDirectionEnum::inbound {1, "inbound"};
const Enum::YLeaf BmpRouteDirectionEnum::outbound {2, "outbound"};

const Enum::YLeaf BgpSendMcastAttrCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpSendMcastAttrCfgEnum::disable {2, "disable"};

const Enum::YLeaf BgpRouteDistinguisherEnum::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisherEnum::as {2, "as"};
const Enum::YLeaf BgpRouteDistinguisherEnum::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisherEnum::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf BgpOrfEnum::none {0, "none"};
const Enum::YLeaf BgpOrfEnum::receive {1, "receive"};
const Enum::YLeaf BgpOrfEnum::send {2, "send"};
const Enum::YLeaf BgpOrfEnum::both {3, "both"};

const Enum::YLeaf BgpVrfRouteTargetEnum::as {0, "as"};
const Enum::YLeaf BgpVrfRouteTargetEnum::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpVrfRouteTargetEnum::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpEbgpSendDmzEnableModeEnum::disable {0, "disable"};
const Enum::YLeaf BgpEbgpSendDmzEnableModeEnum::default_ {1, "default"};
const Enum::YLeaf BgpEbgpSendDmzEnableModeEnum::cumulative {2, "cumulative"};

const Enum::YLeaf BgpClusterIdEnum::number {1, "number"};
const Enum::YLeaf BgpClusterIdEnum::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf BgpTcpModeEnum::either {0, "either"};
const Enum::YLeaf BgpTcpModeEnum::active_only {1, "active-only"};
const Enum::YLeaf BgpTcpModeEnum::passive_only {2, "passive-only"};

const Enum::YLeaf BgpAigpCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpAigpCfgEnum::disable {2, "disable"};

const Enum::YLeaf BmpPolicySelectEnum::pre_policy {1, "pre-policy"};
const Enum::YLeaf BmpPolicySelectEnum::post_policy {2, "post-policy"};

const Enum::YLeaf BgpFlowspecValidationCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpFlowspecValidationCfgEnum::disable {2, "disable"};
const Enum::YLeaf BgpFlowspecValidationCfgEnum::redirect_nexhop_disable {3, "redirect-nexhop-disable"};

const Enum::YLeaf BgpSignalEnum::bgp_disable {1, "bgp-disable"};
const Enum::YLeaf BgpSignalEnum::ldp_disable {2, "ldp-disable"};

const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv {1, "bgp-cfg-adv"};
const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv_reorg {2, "bgp-cfg-adv-reorg"};
const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv_disable {3, "bgp-cfg-adv-disable"};
const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv_local {4, "bgp-cfg-adv-local"};
const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv_def_vrf_imp_disable {5, "bgp-cfg-adv-def-vrf-imp-disable"};
const Enum::YLeaf BgpReorgOptEnum::bgp_cfg_adv_vrf_re_imp_disable {6, "bgp-cfg-adv-vrf-re-imp-disable"};


}
}
