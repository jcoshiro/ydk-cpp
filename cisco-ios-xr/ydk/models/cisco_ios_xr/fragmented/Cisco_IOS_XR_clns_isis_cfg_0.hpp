#ifndef _CISCO_IOS_XR_CLNS_ISIS_CFG_0_
#define _CISCO_IOS_XR_CLNS_ISIS_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_cfg {

class Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Instances; //type: Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances> instances;
        
}; // Isis


class Isis::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Instance; //type: Isis::Instances::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance> > instance;
        
}; // Isis::Instances


class Isis::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf running; //type: empty
        ydk::YLeaf log_adjacency_changes; //type: empty
        ydk::YLeaf ignore_lsp_errors; //type: boolean
        ydk::YLeaf is_type; //type: IsisConfigurableLevels
        ydk::YLeaf tracing_mode; //type: IsisTracingMode
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf dynamic_host_name; //type: boolean
        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf log_pdu_drops; //type: empty
        class Srgb; //type: Isis::Instances::Instance::Srgb
        class LspGenerationIntervals; //type: Isis::Instances::Instance::LspGenerationIntervals
        class LspArrivalTimes; //type: Isis::Instances::Instance::LspArrivalTimes
        class TraceBufferSize; //type: Isis::Instances::Instance::TraceBufferSize
        class MaxLinkMetrics; //type: Isis::Instances::Instance::MaxLinkMetrics
        class AdjacencyStagger; //type: Isis::Instances::Instance::AdjacencyStagger
        class Afs; //type: Isis::Instances::Instance::Afs
        class LspRefreshIntervals; //type: Isis::Instances::Instance::LspRefreshIntervals
        class Distribute; //type: Isis::Instances::Instance::Distribute
        class LspAcceptPasswords; //type: Isis::Instances::Instance::LspAcceptPasswords
        class LspMtus; //type: Isis::Instances::Instance::LspMtus
        class Nsf; //type: Isis::Instances::Instance::Nsf
        class LinkGroups; //type: Isis::Instances::Instance::LinkGroups
        class LspCheckIntervals; //type: Isis::Instances::Instance::LspCheckIntervals
        class LspPasswords; //type: Isis::Instances::Instance::LspPasswords
        class Nets; //type: Isis::Instances::Instance::Nets
        class LspLifetimes; //type: Isis::Instances::Instance::LspLifetimes
        class OverloadBits; //type: Isis::Instances::Instance::OverloadBits
        class Interfaces; //type: Isis::Instances::Instance::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::AdjacencyStagger> adjacency_stagger; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Distribute> distribute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups> link_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords> lsp_accept_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes> lsp_arrival_times;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals> lsp_check_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals> lsp_generation_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes> lsp_lifetimes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus> lsp_mtus;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords> lsp_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals> lsp_refresh_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics> max_link_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets> nets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits> overload_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Srgb> srgb; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::TraceBufferSize> trace_buffer_size;
        
}; // Isis::Instances::Instance


class Isis::Instances::Instance::AdjacencyStagger : public ydk::Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_nbr; //type: uint32
        ydk::YLeaf max_nbr; //type: uint32

}; // Isis::Instances::Instance::AdjacencyStagger


class Isis::Instances::Instance::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: Isis::Instances::Instance::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af> > af;
        
}; // Isis::Instances::Instance::Afs


class Isis::Instances::Instance::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAddressFamily
        ydk::YLeaf saf_name; //type: IsisSubAddressFamily
        class AfData; //type: Isis::Instances::Instance::Afs::Af::AfData
        class TopologyName; //type: Isis::Instances::Instance::Afs::Af::TopologyName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData> af_data; // presence node
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName> > topology_name;
        
}; // Isis::Instances::Instance::Afs::Af


class Isis::Instances::Instance::Afs::Af::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf single_topology; //type: empty
        ydk::YLeaf adjacency_check; //type: IsisAdjCheck
        ydk::YLeaf advertise_link_attributes; //type: boolean
        ydk::YLeaf apply_weight; //type: IsisApplyWeight
        ydk::YLeaf default_admin_distance; //type: uint32
        ydk::YLeaf advertise_passive_only; //type: empty
        ydk::YLeaf ignore_attached_bit; //type: boolean
        ydk::YLeaf attached_bit; //type: IsisAttachedBit
        ydk::YLeaf route_source_first_hop; //type: boolean
        class SegmentRouting; //type: Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting
        class MetricStyles; //type: Isis::Instances::Instance::Afs::Af::AfData::MetricStyles
        class FrrTable; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::AfData::RouterId
        class SpfPrefixPriorities; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities
        class SummaryPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes
        class MicroLoopAvoidance; //type: Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance
        class Ucmp; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp
        class MaxRedistPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes
        class Propagations; //type: Isis::Instances::Instance::Afs::Af::AfData::Propagations
        class Redistributions; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls
        class ManualAdjSids; //type: Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances> admin_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable> frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf> ispf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles> metric_styles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations> propagations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals> spf_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights> weights;
        
}; // Isis::Instances::Instance::Afs::Af::AfData


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances : public ydk::Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance> > admin_distance;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance : public ydk::Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_policy; //type: boolean
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf external; //type: empty

}; // Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable : public ydk::Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits> priority_limits;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings : public ydk::Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing : public ydk::Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf load_sharing; //type: IsisfrrLoadSharing

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers : public ydk::Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker : public ydk::Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisfrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies : public ydk::Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public ydk::Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits : public ydk::Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit : public ydk::Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf priority; //type: IsisPrefixPriority

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::AfData::Ispf : public ydk::Entity
{
    public:
        Ispf();
        ~Ispf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class States; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States> states;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States : public ydk::Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State> > state;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf state; //type: IsisispfState

}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid> > manual_adj_sid;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids


class Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes : public ydk::Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix : public ydk::Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_limit; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles : public ydk::Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle> > metric_style;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle : public ydk::Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf style; //type: IsisMetricStyle
        ydk::YLeaf transition_state; //type: IsisMetricStyleTransition

}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::AfData::Metrics : public ydk::Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric> > metric;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics


class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of enumeration, uint32
        class Metric_;

}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance : public ydk::Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: IsisMicroLoopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::AfData::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId
        class Level; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level> level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId> router_id;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls


class Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level1; //type: boolean
        ydk::YLeaf level2; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level


class Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal : public ydk::Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_config; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::AfData::Propagations : public ydk::Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Propagation; //type: Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation> > propagation;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations


class Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation : public ydk::Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_level; //type: IsisInternalLevel
        ydk::YLeaf destination_level; //type: IsisInternalLevel
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution> > redistribution;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: IsisRedistProto
        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public ydk::Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_zz; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public ydk::Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::AfData::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_member_adj_sid; //type: empty
        ydk::YLeaf mpls; //type: IsisLabelPreference
        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap : public ydk::Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_local; //type: empty
        ydk::YLeaf receive; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals : public ydk::Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval> > spf_interval;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval : public ydk::Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals : public ydk::Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval : public ydk::Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf periodic_interval; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities : public ydk::Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority : public ydk::Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_priority_type; //type: IsisPrefixPriority
        ydk::YLeaf admin_tag; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::AfData::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight> > weight;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Weights


class Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight


class Isis::Instances::Instance::Afs::Af::TopologyName : public ydk::Entity
{
    public:
        TopologyName();
        ~TopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf single_topology; //type: empty
        ydk::YLeaf adjacency_check; //type: IsisAdjCheck
        ydk::YLeaf advertise_link_attributes; //type: boolean
        ydk::YLeaf apply_weight; //type: IsisApplyWeight
        ydk::YLeaf default_admin_distance; //type: uint32
        ydk::YLeaf advertise_passive_only; //type: empty
        ydk::YLeaf ignore_attached_bit; //type: boolean
        ydk::YLeaf attached_bit; //type: IsisAttachedBit
        ydk::YLeaf route_source_first_hop; //type: boolean
        class SegmentRouting; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting
        class MetricStyles; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles
        class FrrTable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::TopologyName::RouterId
        class SpfPrefixPriorities; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities
        class SummaryPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes
        class MicroLoopAvoidance; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance
        class Ucmp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp
        class MaxRedistPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes
        class Propagations; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Propagations
        class Redistributions; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls
        class ManualAdjSids; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances> admin_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable> frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf> ispf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles> metric_styles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations> propagations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals> spf_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights> weights;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances : public ydk::Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance> > admin_distance;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance : public ydk::Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_policy; //type: boolean
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf external; //type: empty

}; // Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable : public ydk::Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits> priority_limits;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings : public ydk::Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing : public ydk::Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf load_sharing; //type: IsisfrrLoadSharing

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers : public ydk::Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker : public ydk::Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisfrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies : public ydk::Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public ydk::Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits : public ydk::Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit : public ydk::Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf priority; //type: IsisPrefixPriority

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf : public ydk::Entity
{
    public:
        Ispf();
        ~Ispf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class States; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States> states;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States : public ydk::Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State> > state;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf state; //type: IsisispfState

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid> > manual_adj_sid;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids


class Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes : public ydk::Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix : public ydk::Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_limit; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles : public ydk::Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle> > metric_style;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle : public ydk::Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf style; //type: IsisMetricStyle
        ydk::YLeaf transition_state; //type: IsisMetricStyleTransition

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics : public ydk::Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric> > metric;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of enumeration, uint32
        class Metric_;

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance : public ydk::Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: IsisMicroLoopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId
        class Level; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level> level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId> router_id;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level1; //type: boolean
        ydk::YLeaf level2; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal : public ydk::Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_config; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations : public ydk::Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Propagation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation> > propagation;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation : public ydk::Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_level; //type: IsisInternalLevel
        ydk::YLeaf destination_level; //type: IsisInternalLevel
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution> > redistribution;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: IsisRedistProto
        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public ydk::Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_zz; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public ydk::Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: int32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::TopologyName::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_member_adj_sid; //type: empty
        ydk::YLeaf mpls; //type: IsisLabelPreference
        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap : public ydk::Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_local; //type: empty
        ydk::YLeaf receive; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals : public ydk::Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval> > spf_interval;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval : public ydk::Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals : public ydk::Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval : public ydk::Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf periodic_interval; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities : public ydk::Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority : public ydk::Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_priority_type; //type: IsisPrefixPriority
        ydk::YLeaf admin_tag; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight> > weight;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight


class Isis::Instances::Instance::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dist_inst_id; //type: uint32
        ydk::YLeaf level; //type: IsisConfigurableLevels
        ydk::YLeaf dist_throttle; //type: uint32

}; // Isis::Instances::Instance::Distribute


class Isis::Instances::Instance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface> > interface;
        
}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf running; //type: empty
        ydk::YLeaf circuit_type; //type: IsisConfigurableLevels
        ydk::YLeaf point_to_point; //type: empty
        ydk::YLeaf state; //type: IsisInterfaceState
        ydk::YLeaf mesh_group; //type: one of enumeration, uint32
        ydk::YLeaf link_down_fast_detect; //type: empty
        class LspRetransmitThrottleIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals
        class LspRetransmitIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals
        class Bfd; //type: Isis::Instances::Instance::Interfaces::Interface::Bfd
        class Priorities; //type: Isis::Instances::Instance::Interfaces::Interface::Priorities
        class HelloAcceptPasswords; //type: Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords
        class HelloPasswords; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPasswords
        class HelloPaddings; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPaddings
        class HelloMultipliers; //type: Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers
        class LspFastFloodThresholds; //type: Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds
        class PrefixAttributeNFlagClears; //type: Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears
        class HelloIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::HelloIntervals
        class InterfaceAfs; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs
        class CsnpIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals
        class LspIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspIntervals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals> csnp_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords> hello_accept_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals> hello_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers> hello_multipliers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings> hello_paddings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords> hello_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs> interface_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds> lsp_fast_flood_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals> lsp_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals> lsp_retransmit_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals> lsp_retransmit_throttle_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears> prefix_attribute_n_flag_clears;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities> priorities;
                class MeshGroup;

}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_ipv6; //type: boolean
        ydk::YLeaf enable_ipv4; //type: boolean
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::Bfd


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals : public ydk::Entity
{
    public:
        CsnpIntervals();
        ~CsnpIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CsnpInterval; //type: Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval> > csnp_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords : public ydk::Entity
{
    public:
        HelloAcceptPasswords();
        ~HelloAcceptPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloAcceptPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword> > hello_accept_password;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword : public ydk::Entity
{
    public:
        HelloAcceptPassword();
        ~HelloAcceptPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf password; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals : public ydk::Entity
{
    public:
        HelloIntervals();
        ~HelloIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval> > hello_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers : public ydk::Entity
{
    public:
        HelloMultipliers();
        ~HelloMultipliers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloMultiplier; //type: Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier> > hello_multiplier;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings : public ydk::Entity
{
    public:
        HelloPaddings();
        ~HelloPaddings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloPadding; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding> > hello_padding;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding : public ydk::Entity
{
    public:
        HelloPadding();
        ~HelloPadding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf padding_type; //type: IsisHelloPadding

}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords : public ydk::Entity
{
    public:
        HelloPasswords();
        ~HelloPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword> > hello_password;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword : public ydk::Entity
{
    public:
        HelloPassword();
        ~HelloPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf algorithm; //type: IsisAuthenticationAlgorithm
        ydk::YLeaf failure_mode; //type: IsisAuthenticationFailureMode
        ydk::YLeaf password; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs : public ydk::Entity
{
    public:
        InterfaceAfs();
        ~InterfaceAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAf; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf> > interface_af;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf : public ydk::Entity
{
    public:
        InterfaceAf();
        ~InterfaceAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAddressFamily
        ydk::YLeaf saf_name; //type: IsisSubAddressFamily
        class InterfaceAfData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData
        class TopologyName; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData> interface_af_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName> > topology_name;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData : public ydk::Entity
{
    public:
        InterfaceAfData();
        ~InterfaceAfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_af_state; //type: IsisInterfaceAfState
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid
        class InterfaceFrrTable; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable
        class MplsLdp; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp
        class PrefixSspfsid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid
        class AutoMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics
        class AdminTags; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags
        class InterfaceLinkGroup; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup
        class ManualAdjSids; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags> admin_tags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics> auto_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable> interface_frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup> interface_link_group; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp> mpls_ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid> prefix_sspfsid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights> weights;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags : public ydk::Entity
{
    public:
        AdminTags();
        ~AdminTags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminTag; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag> > admin_tag;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag : public ydk::Entity
{
    public:
        AdminTag();
        ~AdminTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf admin_tag; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics : public ydk::Entity
{
    public:
        AutoMetrics();
        ~AutoMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric> > auto_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric : public ydk::Entity
{
    public:
        AutoMetric();
        ~AutoMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf proactive_protect; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable : public ydk::Entity
{
    public:
        InterfaceFrrTable();
        ~InterfaceFrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrlfaCandidateInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces
        class FrrRemoteLfaMaxMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics
        class FrrTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes
        class FrrRemoteLfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes
        class InterfaceFrrTiebreakerDefaults; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults
        class FrrtilfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes
        class FrrExcludeInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces
        class InterfaceFrrTiebreakers; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes> frr_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces : public ydk::Entity
{
    public:
        FrrExcludeInterfaces();
        ~FrrExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrExcludeInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface> > frr_exclude_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface : public ydk::Entity
{
    public:
        FrrExcludeInterface();
        ~FrrExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetrics();
        ~FrrRemoteLfaMaxMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaMaxMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric> > frr_remote_lfa_max_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetric();
        ~FrrRemoteLfaMaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf max_metric; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes : public ydk::Entity
{
    public:
        FrrRemoteLfaTypes();
        ~FrrRemoteLfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType> > frr_remote_lfa_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType : public ydk::Entity
{
    public:
        FrrRemoteLfaType();
        ~FrrRemoteLfaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf type; //type: IsisRemoteLfa

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

class IsisLabelPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf segment_routing;

};

class IsisphpFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class NflagClear : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class IsisMetricStyleTransition : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class IsisAuthenticationAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cleartext;
        static const ydk::Enum::YLeaf hmac_md5;
        static const ydk::Enum::YLeaf keychain;

};

class IsisMibOwnLspPurgeBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisAuthenticationFailureMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf send_only;

};

class IsisMibAllBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisTracingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf enhanced;

};

class Isissid1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

};

class IsisMibSequenceNumberSkipBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibDatabaseOverFlowBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisNsfFlavor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_proprietary_nsf;
        static const ydk::Enum::YLeaf ietf_standard_nsf;

};

class IsisRemoteLfa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf remote_lfa_none;
        static const ydk::Enum::YLeaf remote_lfa_tunnel_ldp;

};

class IsisMibAttemptToExceedMaxSequenceBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisApplyWeight : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ecmp_only;
        static const ydk::Enum::YLeaf ucmp_only;

};

class IsisAdvTypeExternal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;

};

class IsisAdjCheck : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;

};

class IsisMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class IsisMibAdjacencyChangeBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisInterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf suppressed;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf enabled_active;

};

class IsisHelloPadding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf sometimes;

};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf old_metric_style;
        static const ydk::Enum::YLeaf new_metric_style;
        static const ydk::Enum::YLeaf both_metric_style;

};

class IsisMibCorruptedLspDetectedBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMicroLoopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf micro_loop_avoidance_all;
        static const ydk::Enum::YLeaf micro_loop_avoidance_protected;
        static const ydk::Enum::YLeaf micro_loop_avoidance_segement_routing;

};

class IsisAttachedBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class IsisMibLspTooLargeToPropagateBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibIdLengthMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibAuthenticationFailureBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibOriginatedLspBufferSizeMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisConfigurableLevels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1_and2;

};

class IsisMibProtocolsSupportedMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisfrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf lc_disjoint;
        static const ydk::Enum::YLeaf lowest_backup_metric;
        static const ydk::Enum::YLeaf node_protecting;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;

};

class IsisfrrLoadSharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class IsisMibAuthenticationTypeFailureBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibManualAddressDropsBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisSnpAuth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_only;
        static const ydk::Enum::YLeaf full;

};

class IsisAdvTypeInterLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inter_level;

};

class IsissidProtected : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class IsisOverloadBitMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permanently_set;
        static const ydk::Enum::YLeaf startup_period;
        static const ydk::Enum::YLeaf wait_for_bgp;

};

class IsisispfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

};

class IsisInterfaceAfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class IsisRedistProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

};

class IsisMibRejectedAdjacencyBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibAreaMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibVersionSkewBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisPrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical_priority;
        static const ydk::Enum::YLeaf high_priority;
        static const ydk::Enum::YLeaf medium_priority;

};

class IsisexplicitNullFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Isisfrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

};

class IsisInterfaceFrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node_protecting;
        static const ydk::Enum::YLeaf srlg_disjoint;

};

class IsisMibMaxAreaAddressMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisMibLspErrorDetectedBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Isis::Instances::Instance::Interfaces::Interface::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_CFG_0_ */

