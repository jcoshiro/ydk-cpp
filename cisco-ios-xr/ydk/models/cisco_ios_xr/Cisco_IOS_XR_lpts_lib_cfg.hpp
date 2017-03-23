#ifndef _CISCO_IOS_XR_LPTS_LIB_CFG_
#define _CISCO_IOS_XR_LPTS_LIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_lpts_lib_cfg {

class Lpts : public Entity
{
    public:
        Lpts();
        ~Lpts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Ipolicer; //type: Lpts::Ipolicer
        class Punt; //type: Lpts::Punt

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer> ipolicer; // presence node
        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt> punt;


}; // Lpts


class Lpts::Ipolicer : public Entity
{
    public:
        Ipolicer();
        ~Ipolicer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Ipv4Acls; //type: Lpts::Ipolicer::Ipv4Acls
        class Flows; //type: Lpts::Ipolicer::Flows

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows> flows;
        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls> ipv4acls;


}; // Lpts::Ipolicer


class Lpts::Ipolicer::Ipv4Acls : public Entity
{
    public:
        Ipv4Acls();
        ~Ipv4Acls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4Acl; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl> > ipv4acl;


}; // Lpts::Ipolicer::Ipv4Acls


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl : public Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf acl_name; //type: string

        class Ipv4VrfNames; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames> ipv4vrf_names;


}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames : public Entity
{
    public:
        Ipv4VrfNames();
        ~Ipv4VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4VrfName; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName> > ipv4vrf_name;


}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName : public Entity
{
    public:
        Ipv4VrfName();
        ~Ipv4VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf acl_rate; //type: uint32



}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName


class Lpts::Ipolicer::Flows : public Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Flow; //type: Lpts::Ipolicer::Flows::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows::Flow> > flow;


}; // Lpts::Ipolicer::Flows


class Lpts::Ipolicer::Flows::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_type; //type: LptsFlowEnum
        YLeaf rate; //type: int32

        class Precedences; //type: Lpts::Ipolicer::Flows::Flow::Precedences

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows::Flow::Precedences> precedences;


}; // Lpts::Ipolicer::Flows::Flow


class Lpts::Ipolicer::Flows::Flow::Precedences : public Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList precedence; //type: list of  one of uint32, enumeration



}; // Lpts::Ipolicer::Flows::Flow::Precedences


class Lpts::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Flowtrap; //type: Lpts::Punt::Flowtrap

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap> flowtrap;


}; // Lpts::Punt


class Lpts::Punt::Flowtrap : public Entity
{
    public:
        Flowtrap();
        ~Flowtrap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_flow_gap; //type: uint32
        YLeaf et_size; //type: uint32
        YLeaf eviction_threshold; //type: uint32
        YLeaf report_threshold; //type: uint16
        YLeaf non_subscriber_interfaces; //type: int32
        YLeaf sample_prob; //type: string
        YLeaf eviction_search_limit; //type: uint32
        YLeaf routing_protocols_enable; //type: boolean
        YLeaf subscriber_interfaces; //type: boolean
        YLeaf interface_based_flow; //type: boolean
        YLeaf dampening; //type: uint32

        class PenaltyRates; //type: Lpts::Punt::Flowtrap::PenaltyRates
        class PenaltyTimeouts; //type: Lpts::Punt::Flowtrap::PenaltyTimeouts
        class Exclude; //type: Lpts::Punt::Flowtrap::Exclude

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude> exclude;
        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyRates> penalty_rates;
        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyTimeouts> penalty_timeouts;


}; // Lpts::Punt::Flowtrap


class Lpts::Punt::Flowtrap::PenaltyRates : public Entity
{
    public:
        PenaltyRates();
        ~PenaltyRates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PenaltyRate; //type: Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate> > penalty_rate;


}; // Lpts::Punt::Flowtrap::PenaltyRates


class Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate : public Entity
{
    public:
        PenaltyRate();
        ~PenaltyRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: LptsPuntFlowtrapProtoIdEnum
        YLeaf rate; //type: uint32



}; // Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate


class Lpts::Punt::Flowtrap::PenaltyTimeouts : public Entity
{
    public:
        PenaltyTimeouts();
        ~PenaltyTimeouts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PenaltyTimeout; //type: Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout> > penalty_timeout;


}; // Lpts::Punt::Flowtrap::PenaltyTimeouts


class Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout : public Entity
{
    public:
        PenaltyTimeout();
        ~PenaltyTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: LptsPuntFlowtrapProtoIdEnum
        YLeaf timeout; //type: uint32



}; // Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout


class Lpts::Punt::Flowtrap::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNames; //type: Lpts::Punt::Flowtrap::Exclude::InterfaceNames

        std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude::InterfaceNames> interface_names;


}; // Lpts::Punt::Flowtrap::Exclude


class Lpts::Punt::Flowtrap::Exclude::InterfaceNames : public Entity
{
    public:
        InterfaceNames();
        ~InterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceName; //type: Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName> > interface_name;


}; // Lpts::Punt::Flowtrap::Exclude::InterfaceNames


class Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName : public Entity
{
    public:
        InterfaceName();
        ~InterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ifname; //type: string
        YLeaf id1; //type: boolean



}; // Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName


}
}

#endif /* _CISCO_IOS_XR_LPTS_LIB_CFG_ */
