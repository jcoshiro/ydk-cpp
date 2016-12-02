#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Resources : public Entity
    {
        public:
            Resources();
            ~Resources();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node_name; //type: string


                class TableDatas : public Entity
                {
                    public:
                        TableDatas();
                        ~TableDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class TableData : public Entity
                    {
                        public:
                            TableData();
                            ~TableData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value resource; //type: uint32
                            Value table_id; //type: uint32
                            Value name; //type: string
                            Value is_global; //type: boolean
                            Value num_npus; //type: uint32
                            Value table_specific_list; //type: string


                        class NpuTblr : public Entity
                        {
                            public:
                                NpuTblr();
                                ~NpuTblr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value npu_id; //type: uint32
                                Value num_objs; //type: uint32
                                Value create_req; //type: uint32
                                Value create_ok; //type: uint32
                                Value delete_req; //type: uint32
                                Value delete_ok; //type: uint32
                                Value update_req; //type: uint32
                                Value update_ok; //type: uint32
                                Value eod_req; //type: uint32
                                Value eod_ok; //type: uint32
                                Value err_hw_fail; //type: uint32
                                Value err_ref_resolve; //type: uint32
                                Value err_db_notfound; //type: uint32
                                Value err_db_exists; //type: uint32
                                Value err_db_nomem; //type: uint32




                        }; // Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr> > npu_tblr;


                    }; // Dpa::Resources::Nodes::Node::TableDatas::TableData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas::TableData> > table_data;


                }; // Dpa::Resources::Nodes::Node::TableDatas


                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas> table_datas;


            }; // Dpa::Resources::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node> > node;


        }; // Dpa::Resources::Nodes


            std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes> nodes;


    }; // Dpa::Resources


    class Stats : public Entity
    {
        public:
            Stats();
            ~Stats();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node_name; //type: string


                class VoqBaseNumberStatsClears : public Entity
                {
                    public:
                        VoqBaseNumberStatsClears();
                        ~VoqBaseNumberStatsClears();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class VoqBaseNumberStatsClear : public Entity
                    {
                        public:
                            VoqBaseNumberStatsClear();
                            ~VoqBaseNumberStatsClear();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_number; //type: int32


                        class VoqBaseStatsClearData : public Entity
                        {
                            public:
                                VoqBaseStatsClearData();
                                ~VoqBaseStatsClearData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value base_number; //type: uint32
                                Value clear_status; //type: uint8




                        }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData> > voq_base_stats_clear_data;


                    }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear> > voq_base_number_stats_clear;


                }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears


                class NpuNumberForTrapDatas : public Entity
                {
                    public:
                        NpuNumberForTrapDatas();
                        ~NpuNumberForTrapDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NpuNumberForTrapData : public Entity
                    {
                        public:
                            NpuNumberForTrapData();
                            ~NpuNumberForTrapData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_id; //type: int32


                        class TrapSpecificStatsData : public Entity
                        {
                            public:
                                TrapSpecificStatsData();
                                ~TrapSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value trap_data; //type: uint32
                                Value trap_strength; //type: uint32
                                Value priority; //type: uint32
                                Value trap_id; //type: uint32
                                Value gport; //type: uint32
                                Value fec_id; //type: uint32
                                Value policer_id; //type: uint32
                                Value stats_id; //type: uint32
                                Value encap_id; //type: uint32
                                Value mc_group; //type: uint32
                                Value trap_string; //type: string
                                Value id; //type: uint32
                                Value offset; //type: uint64
                                Value npu_id; //type: uint64
                                Value packet_dropped; //type: uint64
                                Value packet_accepted; //type: uint64




                        }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData> > trap_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData> > npu_number_for_trap_data;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas


                class VoqBaseNumbers : public Entity
                {
                    public:
                        VoqBaseNumbers();
                        ~VoqBaseNumbers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class VoqBaseNumber : public Entity
                    {
                        public:
                            VoqBaseNumber();
                            ~VoqBaseNumber();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_number; //type: int32


                        class VoqBaseStatsData : public Entity
                        {
                            public:
                                VoqBaseStatsData();
                                ~VoqBaseStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value base_number; //type: uint32
                                Value is_inuse; //type: boolean
                                Value rack_num; //type: uint8
                                Value slot_num; //type: uint8
                                Value npu_num; //type: uint8
                                Value npu_core; //type: uint8
                                Value port_num; //type: uint8
                                Value ifhandle; //type: uint32
                                Value sysport; //type: uint32
                                Value pp_port; //type: uint32
                                Value port_speed; //type: uint32
                                Value voq_base; //type: uint32
                                Value connector_id; //type: uint32
                                Value is_local_port; //type: boolean


                            class VoqStat : public Entity
                            {
                                public:
                                    VoqStat();
                                    ~VoqStat();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value gport_received_bytes; //type: uint64
                                    Value gport_received_pkts; //type: uint64
                                    Value gport_dropped_bytes; //type: uint64
                                    Value gport_dropped_pkts; //type: uint64




                            }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat> > voq_stat;


                        }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData> > voq_base_stats_data;


                    }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber> > voq_base_number;


                }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers


                class NpuNumberForVoqDatas : public Entity
                {
                    public:
                        NpuNumberForVoqDatas();
                        ~NpuNumberForVoqDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NpuNumberForVoqData : public Entity
                    {
                        public:
                            NpuNumberForVoqData();
                            ~NpuNumberForVoqData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_id; //type: int32


                        class VoqSpecificStatsData : public Entity
                        {
                            public:
                                VoqSpecificStatsData();
                                ~VoqSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value voq_data; //type: int32
                                Value is_inuse; //type: boolean
                                Value rack_num; //type: uint8
                                Value slot_num; //type: uint8
                                Value npu_num; //type: uint8
                                Value npu_core; //type: uint8
                                Value port_num; //type: uint8
                                Value ifhandle; //type: uint32
                                Value sysport; //type: uint32
                                Value pp_port; //type: uint32
                                Value port_speed; //type: uint32
                                Value voq_base; //type: uint32
                                Value connector_id; //type: uint32
                                Value is_local_port; //type: boolean


                            class VoqStat : public Entity
                            {
                                public:
                                    VoqStat();
                                    ~VoqStat();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value gport_received_bytes; //type: uint64
                                    Value gport_received_pkts; //type: uint64
                                    Value gport_dropped_bytes; //type: uint64
                                    Value gport_dropped_pkts; //type: uint64




                            }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat> > voq_stat;


                        }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData> > voq_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData> > npu_number_for_voq_data;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas


                class ClearVoqDataForNpuNumbers : public Entity
                {
                    public:
                        ClearVoqDataForNpuNumbers();
                        ~ClearVoqDataForNpuNumbers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ClearVoqDataForNpuNumber : public Entity
                    {
                        public:
                            ClearVoqDataForNpuNumber();
                            ~ClearVoqDataForNpuNumber();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_id; //type: int32


                        class VoqSpecificStatsDataClear : public Entity
                        {
                            public:
                                VoqSpecificStatsDataClear();
                                ~VoqSpecificStatsDataClear();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value voq_data; //type: int32
                                Value clear_status; //type: uint8




                        }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear> > voq_specific_stats_data_clear;


                    }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber> > clear_voq_data_for_npu_number;


                }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers


                class NpuNumberForTrapDataClears : public Entity
                {
                    public:
                        NpuNumberForTrapDataClears();
                        ~NpuNumberForTrapDataClears();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NpuNumberForTrapDataClear : public Entity
                    {
                        public:
                            NpuNumberForTrapDataClear();
                            ~NpuNumberForTrapDataClear();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_id; //type: int32


                        class TrapSpecificStatsData : public Entity
                        {
                            public:
                                TrapSpecificStatsData();
                                ~TrapSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value trap_data; //type: uint32
                                Value clear_status; //type: uint8




                        }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData> > trap_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear> > npu_number_for_trap_data_clear;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears


                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers> clear_voq_data_for_npu_numbers;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears> npu_number_for_trap_data_clears;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas> npu_number_for_trap_datas;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas> npu_number_for_voq_datas;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears> voq_base_number_stats_clears;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers> voq_base_numbers;


            }; // Dpa::Stats::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node> > node;


        }; // Dpa::Stats::Nodes


            std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes> nodes;


    }; // Dpa::Stats


        std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources> resources;
        std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats> stats;


}; // Dpa



}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_ */
