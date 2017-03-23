#ifndef _CISCO_IOS_XR_ISIS_ACT_
#define _CISCO_IOS_XR_ISIS_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_isis_act {

class ClearIsisProcessRpc : public Entity
{
    public:
        ClearIsisProcessRpc();
        ~ClearIsisProcessRpc();

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


        YLeaf process; //type: empty

        class Instance; //type: ClearIsisProcessRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisProcessRpc::Instance> instance;


}; // ClearIsisProcessRpc


class ClearIsisProcessRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ClearIsisProcessRpc::Instance

class ClearIsisRouteRpc : public Entity
{
    public:
        ClearIsisRouteRpc();
        ~ClearIsisRouteRpc();

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


        YLeaf route; //type: empty

        class Instance; //type: ClearIsisRouteRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRouteRpc::Instance> instance;


}; // ClearIsisRouteRpc


class ClearIsisRouteRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ClearIsisRouteRpc::Instance

class ClearIsisStatRpc : public Entity
{
    public:
        ClearIsisStatRpc();
        ~ClearIsisStatRpc();

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



        class Instance; //type: ClearIsisStatRpc::Instance
        class Statistics; //type: ClearIsisStatRpc::Statistics

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisStatRpc::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisStatRpc::Statistics> statistics;


}; // ClearIsisStatRpc


class ClearIsisStatRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ClearIsisStatRpc::Instance


class ClearIsisStatRpc::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ClearIsisStatRpc::Statistics

class ClearIsisDistRpc : public Entity
{
    public:
        ClearIsisDistRpc();
        ~ClearIsisDistRpc();

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


        YLeaf distribution; //type: empty

        class Instance; //type: ClearIsisDistRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisDistRpc::Instance> instance;


}; // ClearIsisDistRpc


class ClearIsisDistRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ClearIsisDistRpc::Instance

class ClearIsisRpc : public Entity
{
    public:
        ClearIsisRpc();
        ~ClearIsisRpc();

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


        YLeaf rt_type; //type: RtTypeEnum
        YLeaf route; //type: empty
        YLeaf topology; //type: string

        class Instance; //type: ClearIsisRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRpc::Instance> instance;
        class RtTypeEnum;


}; // ClearIsisRpc


class ClearIsisRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ClearIsisRpc::Instance

class ClearIsisRpc::RtTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf AFI_ALL_MULTICAST;
        static const Enum::YLeaf AFI_ALL_SAFI_ALL;
        static const Enum::YLeaf AFI_ALL_UNICAST;
        static const Enum::YLeaf IPv4_MULTICAST;
        static const Enum::YLeaf IPv4_SAFI_ALL;
        static const Enum::YLeaf IPv4_UNICAST;
        static const Enum::YLeaf IPv6_MULTICAST;
        static const Enum::YLeaf IPv6_SAFI_ALL;
        static const Enum::YLeaf IPv6_UNICAST;

};


}
}

#endif /* _CISCO_IOS_XR_ISIS_ACT_ */
