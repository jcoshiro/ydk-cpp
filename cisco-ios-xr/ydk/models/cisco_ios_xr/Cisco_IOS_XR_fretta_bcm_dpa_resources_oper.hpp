#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_oper {

class Dpa : public Entity
{
    public:
        Dpa();
        ~Dpa();

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



        class Resources; //type: Dpa::Resources
        class Stats; //type: Dpa::Stats

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources> resources;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats> stats;


}; // Dpa


class Dpa::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: Dpa::Resources::Nodes

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes> nodes;


}; // Dpa::Resources


class Dpa::Resources::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Dpa::Resources::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node> > node;


}; // Dpa::Resources::Nodes


class Dpa::Resources::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class TableDatas; //type: Dpa::Resources::Nodes::Node::TableDatas

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas> table_datas;


}; // Dpa::Resources::Nodes::Node


class Dpa::Resources::Nodes::Node::TableDatas : public Entity
{
    public:
        TableDatas();
        ~TableDatas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TableData; //type: Dpa::Resources::Nodes::Node::TableDatas::TableData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas::TableData> > table_data;


}; // Dpa::Resources::Nodes::Node::TableDatas


class Dpa::Resources::Nodes::Node::TableDatas::TableData : public Entity
{
    public:
        TableData();
        ~TableData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf resource; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf name; //type: string
        YLeaf is_global; //type: boolean
        YLeaf num_npus; //type: uint32
        YLeaf table_specific_list; //type: string

        class NpuTblr; //type: Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr> > npu_tblr;


}; // Dpa::Resources::Nodes::Node::TableDatas::TableData


class Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr : public Entity
{
    public:
        NpuTblr();
        ~NpuTblr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: uint32
        YLeaf num_objs; //type: uint32
        YLeaf create_req; //type: uint32
        YLeaf create_ok; //type: uint32
        YLeaf delete_req; //type: uint32
        YLeaf delete_ok; //type: uint32
        YLeaf update_req; //type: uint32
        YLeaf update_ok; //type: uint32
        YLeaf eod_req; //type: uint32
        YLeaf eod_ok; //type: uint32
        YLeaf err_hw_fail; //type: uint32
        YLeaf err_ref_resolve; //type: uint32
        YLeaf err_db_notfound; //type: uint32
        YLeaf err_db_exists; //type: uint32
        YLeaf err_db_nomem; //type: uint32



}; // Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr


class Dpa::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: Dpa::Stats::Nodes

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes> nodes;


}; // Dpa::Stats


class Dpa::Stats::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Dpa::Stats::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node> > node;


}; // Dpa::Stats::Nodes


class Dpa::Stats::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class VoqBaseNumberStatsClears; //type: Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears
        class NpuNumberForTrapDatas; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas
        class VoqBaseNumbers; //type: Dpa::Stats::Nodes::Node::VoqBaseNumbers
        class NpuNumberForVoqDatas; //type: Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas
        class ClearVoqDataForNpuNumbers; //type: Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers
        class NpuNumberForTrapDataClears; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers> clear_voq_data_for_npu_numbers;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears> npu_number_for_trap_data_clears;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas> npu_number_for_trap_datas;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas> npu_number_for_voq_datas;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears> voq_base_number_stats_clears;
        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers> voq_base_numbers;


}; // Dpa::Stats::Nodes::Node


class Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears : public Entity
{
    public:
        VoqBaseNumberStatsClears();
        ~VoqBaseNumberStatsClears();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoqBaseNumberStatsClear; //type: Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear> > voq_base_number_stats_clear;


}; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears


class Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear : public Entity
{
    public:
        VoqBaseNumberStatsClear();
        ~VoqBaseNumberStatsClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_number; //type: int32

        class VoqBaseStatsClearData; //type: Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData> > voq_base_stats_clear_data;


}; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear


class Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData : public Entity
{
    public:
        VoqBaseStatsClearData();
        ~VoqBaseStatsClearData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf base_number; //type: uint32
        YLeaf clear_status; //type: uint8



}; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas : public Entity
{
    public:
        NpuNumberForTrapDatas();
        ~NpuNumberForTrapDatas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NpuNumberForTrapData; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData> > npu_number_for_trap_data;


}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData : public Entity
{
    public:
        NpuNumberForTrapData();
        ~NpuNumberForTrapData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: int32

        class TrapSpecificStatsData; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData> > trap_specific_stats_data;


}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData : public Entity
{
    public:
        TrapSpecificStatsData();
        ~TrapSpecificStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_data; //type: uint32
        YLeaf trap_strength; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf trap_id; //type: uint32
        YLeaf gport; //type: uint32
        YLeaf fec_id; //type: uint32
        YLeaf policer_id; //type: uint32
        YLeaf stats_id; //type: uint32
        YLeaf encap_id; //type: uint32
        YLeaf mc_group; //type: uint32
        YLeaf trap_string; //type: string
        YLeaf id; //type: uint32
        YLeaf offset; //type: uint64
        YLeaf npu_id; //type: uint64
        YLeaf packet_dropped; //type: uint64
        YLeaf packet_accepted; //type: uint64



}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData


class Dpa::Stats::Nodes::Node::VoqBaseNumbers : public Entity
{
    public:
        VoqBaseNumbers();
        ~VoqBaseNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VoqBaseNumber; //type: Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber> > voq_base_number;


}; // Dpa::Stats::Nodes::Node::VoqBaseNumbers


class Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber : public Entity
{
    public:
        VoqBaseNumber();
        ~VoqBaseNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_number; //type: int32

        class VoqBaseStatsData; //type: Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData> > voq_base_stats_data;


}; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber


class Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData : public Entity
{
    public:
        VoqBaseStatsData();
        ~VoqBaseStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf base_number; //type: uint32
        YLeaf is_inuse; //type: boolean
        YLeaf rack_num; //type: uint8
        YLeaf slot_num; //type: uint8
        YLeaf npu_num; //type: uint8
        YLeaf npu_core; //type: uint8
        YLeaf port_num; //type: uint8
        YLeaf ifhandle; //type: uint32
        YLeaf sysport; //type: uint32
        YLeaf pp_port; //type: uint32
        YLeaf port_speed; //type: uint32
        YLeaf voq_base; //type: uint32
        YLeaf connector_id; //type: uint32
        YLeaf is_local_port; //type: boolean

        class VoqStat; //type: Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat> > voq_stat;


}; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData


class Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat : public Entity
{
    public:
        VoqStat();
        ~VoqStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gport_received_bytes; //type: uint64
        YLeaf gport_received_pkts; //type: uint64
        YLeaf gport_dropped_bytes; //type: uint64
        YLeaf gport_dropped_pkts; //type: uint64



}; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat


class Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas : public Entity
{
    public:
        NpuNumberForVoqDatas();
        ~NpuNumberForVoqDatas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NpuNumberForVoqData; //type: Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData> > npu_number_for_voq_data;


}; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas


class Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData : public Entity
{
    public:
        NpuNumberForVoqData();
        ~NpuNumberForVoqData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: int32

        class VoqSpecificStatsData; //type: Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData> > voq_specific_stats_data;


}; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData


class Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData : public Entity
{
    public:
        VoqSpecificStatsData();
        ~VoqSpecificStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf voq_data; //type: int32
        YLeaf is_inuse; //type: boolean
        YLeaf rack_num; //type: uint8
        YLeaf slot_num; //type: uint8
        YLeaf npu_num; //type: uint8
        YLeaf npu_core; //type: uint8
        YLeaf port_num; //type: uint8
        YLeaf ifhandle; //type: uint32
        YLeaf sysport; //type: uint32
        YLeaf pp_port; //type: uint32
        YLeaf port_speed; //type: uint32
        YLeaf voq_base; //type: uint32
        YLeaf connector_id; //type: uint32
        YLeaf is_local_port; //type: boolean

        class VoqStat; //type: Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat> > voq_stat;


}; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData


class Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat : public Entity
{
    public:
        VoqStat();
        ~VoqStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gport_received_bytes; //type: uint64
        YLeaf gport_received_pkts; //type: uint64
        YLeaf gport_dropped_bytes; //type: uint64
        YLeaf gport_dropped_pkts; //type: uint64



}; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat


class Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers : public Entity
{
    public:
        ClearVoqDataForNpuNumbers();
        ~ClearVoqDataForNpuNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClearVoqDataForNpuNumber; //type: Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber> > clear_voq_data_for_npu_number;


}; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers


class Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber : public Entity
{
    public:
        ClearVoqDataForNpuNumber();
        ~ClearVoqDataForNpuNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: int32

        class VoqSpecificStatsDataClear; //type: Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear> > voq_specific_stats_data_clear;


}; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber


class Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear : public Entity
{
    public:
        VoqSpecificStatsDataClear();
        ~VoqSpecificStatsDataClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf voq_data; //type: int32
        YLeaf clear_status; //type: uint8



}; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears : public Entity
{
    public:
        NpuNumberForTrapDataClears();
        ~NpuNumberForTrapDataClears();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NpuNumberForTrapDataClear; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear> > npu_number_for_trap_data_clear;


}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear : public Entity
{
    public:
        NpuNumberForTrapDataClear();
        ~NpuNumberForTrapDataClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: int32

        class TrapSpecificStatsData; //type: Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData> > trap_specific_stats_data;


}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear


class Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData : public Entity
{
    public:
        TrapSpecificStatsData();
        ~TrapSpecificStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_data; //type: uint32
        YLeaf clear_status; //type: uint8



}; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_ */
