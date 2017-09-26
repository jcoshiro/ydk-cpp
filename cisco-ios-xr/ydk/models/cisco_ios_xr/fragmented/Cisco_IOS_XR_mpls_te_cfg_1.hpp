#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_1_
#define _CISCO_IOS_XR_MPLS_TE_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {


class MplsTe::GlobalAttributes::BandwidthAccounting : public ydk::Entity
{
    public:
        BandwidthAccounting();
        ~BandwidthAccounting();

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

        ydk::YLeaf sampling_interval; //type: uint32
        ydk::YLeaf adjustment_factor; //type: uint32
        ydk::YLeaf collection_type_rsvp_te; //type: boolean
        ydk::YLeaf enable; //type: empty
        class Application; //type: MplsTe::GlobalAttributes::BandwidthAccounting::Application
        class AccountFloodingThreshold; //type: MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold> account_flooding_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BandwidthAccounting::Application> application;
        
}; // MplsTe::GlobalAttributes::BandwidthAccounting


class MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold : public ydk::Entity
{
    public:
        AccountFloodingThreshold();
        ~AccountFloodingThreshold();

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

        ydk::YLeaf up_threshold; //type: uint32
        ydk::YLeaf down_threshold; //type: uint32

}; // MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold


class MplsTe::GlobalAttributes::BandwidthAccounting::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

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

        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf application_interval; //type: uint32

}; // MplsTe::GlobalAttributes::BandwidthAccounting::Application


class MplsTe::GlobalAttributes::BfdOverLsp : public ydk::Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

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

        class Tail; //type: MplsTe::GlobalAttributes::BfdOverLsp::Tail
        class Head; //type: MplsTe::GlobalAttributes::BfdOverLsp::Head

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Tail> tail;
        
}; // MplsTe::GlobalAttributes::BfdOverLsp


class MplsTe::GlobalAttributes::BfdOverLsp::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

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

        ydk::YLeaf reopt_timeout; //type: uint32
        ydk::YLeaf down_action; //type: MplsTeBfdSessionDownAction

}; // MplsTe::GlobalAttributes::BfdOverLsp::Head


class MplsTe::GlobalAttributes::BfdOverLsp::Tail : public ydk::Entity
{
    public:
        Tail();
        ~Tail();

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

        ydk::YLeaf multiplier; //type: uint32
        ydk::YLeaf minimum_interval; //type: uint32

}; // MplsTe::GlobalAttributes::BfdOverLsp::Tail


class MplsTe::GlobalAttributes::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

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

        class Timers; //type: MplsTe::GlobalAttributes::FastReroute::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute::Timers> timers;
        
}; // MplsTe::GlobalAttributes::FastReroute


class MplsTe::GlobalAttributes::FastReroute::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf hold_backup; //type: uint32
        ydk::YLeaf promotion; //type: uint32

}; // MplsTe::GlobalAttributes::FastReroute::Timers


class MplsTe::GlobalAttributes::HardwareOutOfResource : public ydk::Entity
{
    public:
        HardwareOutOfResource();
        ~HardwareOutOfResource();

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

        class OorRedState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState
        class OorYellowState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState
        class OorGreenState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState> oor_green_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState> oor_red_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState> oor_yellow_state;
        
}; // MplsTe::GlobalAttributes::HardwareOutOfResource


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState : public ydk::Entity
{
    public:
        OorGreenState();
        ~OorGreenState();

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

        ydk::YLeaf oor_recovery_duration; //type: uint32
        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: int32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState : public ydk::Entity
{
    public:
        OorRedState();
        ~OorRedState();

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

        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: int32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState : public ydk::Entity
{
    public:
        OorYellowState();
        ~OorYellowState();

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

        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: int32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState


class MplsTe::GlobalAttributes::LspOutOfResource : public ydk::Entity
{
    public:
        LspOutOfResource();
        ~LspOutOfResource();

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

        class LspOorRedState; //type: MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState
        class LspOorYellowState; //type: MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState> lsp_oor_red_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState> lsp_oor_yellow_state;
        
}; // MplsTe::GlobalAttributes::LspOutOfResource


class MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState : public ydk::Entity
{
    public:
        LspOorRedState();
        ~LspOorRedState();

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

        ydk::YLeaf all_transit_lsp_threshold; //type: int32
        ydk::YLeaf unprotected_transit_lsp_threshold; //type: int32

}; // MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState


class MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState : public ydk::Entity
{
    public:
        LspOorYellowState();
        ~LspOorYellowState();

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

        ydk::YLeaf all_transit_lsp_threshold; //type: int32
        ydk::YLeaf unprotected_transit_lsp_threshold; //type: int32

}; // MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState


class MplsTe::GlobalAttributes::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        ydk::YLeaf midpoint_lsp_stats_collection_disable; //type: empty

}; // MplsTe::GlobalAttributes::Mib


class MplsTe::GlobalAttributes::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

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

        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf tiebreaker; //type: MplsTePathSelectionTiebreaker
        ydk::YLeaf metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf loose_domain_match; //type: boolean
        class LooseMetrics; //type: MplsTe::GlobalAttributes::PathSelection::LooseMetrics
        class Invalidation; //type: MplsTe::GlobalAttributes::PathSelection::Invalidation
        class IgnoreOverloadRole; //type: MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole
        class LooseAffinities; //type: MplsTe::GlobalAttributes::PathSelection::LooseAffinities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole> ignore_overload_role;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::Invalidation> invalidation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities> loose_affinities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics> loose_metrics;
        
}; // MplsTe::GlobalAttributes::PathSelection


class MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole : public ydk::Entity
{
    public:
        IgnoreOverloadRole();
        ~IgnoreOverloadRole();

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

        ydk::YLeaf head; //type: boolean
        ydk::YLeaf mid; //type: boolean
        ydk::YLeaf tail; //type: boolean

}; // MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole


class MplsTe::GlobalAttributes::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

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

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // MplsTe::GlobalAttributes::PathSelection::Invalidation


class MplsTe::GlobalAttributes::PathSelection::LooseAffinities : public ydk::Entity
{
    public:
        LooseAffinities();
        ~LooseAffinities();

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

        class LooseAffinity; //type: MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity> > loose_affinity;
        
}; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities


class MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity : public ydk::Entity
{
    public:
        LooseAffinity();
        ~LooseAffinity();

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

        ydk::YLeaf class_type; //type: uint32
        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity


class MplsTe::GlobalAttributes::PathSelection::LooseMetrics : public ydk::Entity
{
    public:
        LooseMetrics();
        ~LooseMetrics();

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

        class LooseMetric; //type: MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric> > loose_metric;
        
}; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics


class MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric : public ydk::Entity
{
    public:
        LooseMetric();
        ~LooseMetric();

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

        ydk::YLeaf class_type; //type: uint32
        ydk::YLeaf metric_type; //type: MplsTePathSelectionMetric

}; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric


class MplsTe::GlobalAttributes::PceAttributes : public ydk::Entity
{
    public:
        PceAttributes();
        ~PceAttributes();

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

        ydk::YLeaf request_timeout; //type: uint32
        ydk::YLeaf reoptimize_period; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf deadtimer; //type: uint32
        ydk::YLeaf keepalive; //type: uint32
        ydk::YLeaf keepalive_tolerance; //type: uint32
        ydk::YLeaf peer_source_addr; //type: string
        ydk::YLeaf speaker_entity_id; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf password; //type: string
        ydk::YLeaf keychain; //type: string
        ydk::YLeaf precedence; //type: uint32
        class PceStateful; //type: MplsTe::GlobalAttributes::PceAttributes::PceStateful
        class Timer; //type: MplsTe::GlobalAttributes::PceAttributes::Timer
        class Peers; //type: MplsTe::GlobalAttributes::PceAttributes::Peers
        class Logging; //type: MplsTe::GlobalAttributes::PceAttributes::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful> pce_stateful;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Timer> timer;
        
}; // MplsTe::GlobalAttributes::PceAttributes


class MplsTe::GlobalAttributes::PceAttributes::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        class Events; //type: MplsTe::GlobalAttributes::PceAttributes::Logging::Events

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging::Events> events;
        
}; // MplsTe::GlobalAttributes::PceAttributes::Logging


class MplsTe::GlobalAttributes::PceAttributes::Logging::Events : public ydk::Entity
{
    public:
        Events();
        ~Events();

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

        ydk::YLeaf peer_status; //type: empty

}; // MplsTe::GlobalAttributes::PceAttributes::Logging::Events


class MplsTe::GlobalAttributes::PceAttributes::PceStateful : public ydk::Entity
{
    public:
        PceStateful();
        ~PceStateful();

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

        ydk::YLeaf fast_repair; //type: empty
        ydk::YLeaf instantiation; //type: empty
        ydk::YLeaf cisco_extension; //type: empty
        ydk::YLeaf delegation; //type: empty
        ydk::YLeaf report; //type: empty
        ydk::YLeaf enable; //type: empty
        class StatefulTimers; //type: MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers> stateful_timers;
        
}; // MplsTe::GlobalAttributes::PceAttributes::PceStateful


class MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers : public ydk::Entity
{
    public:
        StatefulTimers();
        ~StatefulTimers();

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

        ydk::YLeaf redelegation_timeout; //type: uint32
        ydk::YLeaf state_timeout; //type: uint32

}; // MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers


class MplsTe::GlobalAttributes::PceAttributes::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: MplsTe::GlobalAttributes::PceAttributes::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers::Peer> > peer;
        
}; // MplsTe::GlobalAttributes::PceAttributes::Peers


class MplsTe::GlobalAttributes::PceAttributes::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf pce_peer_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf password; //type: string
        ydk::YLeaf keychain; //type: string
        ydk::YLeaf precedence; //type: uint32

}; // MplsTe::GlobalAttributes::PceAttributes::Peers::Peer


class MplsTe::GlobalAttributes::PceAttributes::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

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


}; // MplsTe::GlobalAttributes::PceAttributes::Timer


class MplsTe::GlobalAttributes::Queues : public ydk::Entity
{
    public:
        Queues();
        ~Queues();

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

        class Queue; //type: MplsTe::GlobalAttributes::Queues::Queue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues::Queue> > queue;
        
}; // MplsTe::GlobalAttributes::Queues


class MplsTe::GlobalAttributes::Queues::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

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

        ydk::YLeaf role; //type: RoutePriorityRole
        ydk::YLeaf value_; //type: uint32

}; // MplsTe::GlobalAttributes::Queues::Queue


class MplsTe::GlobalAttributes::SecondaryRouterIds : public ydk::Entity
{
    public:
        SecondaryRouterIds();
        ~SecondaryRouterIds();

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

        class SecondaryRouterId; //type: MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId> > secondary_router_id;
        
}; // MplsTe::GlobalAttributes::SecondaryRouterIds


class MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId : public ydk::Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

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

        ydk::YLeaf secondary_router_id_value; //type: string

}; // MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId


class MplsTe::GlobalAttributes::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

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

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf frr_rewrite; //type: empty
        ydk::YLeaf enable; //type: boolean

}; // MplsTe::GlobalAttributes::SoftPreemption


class MplsTe::GlobalAttributes::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

        ydk::YLeaf default_admin_weight; //type: int32
        ydk::YLeaf enable; //type: empty
        class Names; //type: MplsTe::GlobalAttributes::Srlg::Names

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names> names;
        
}; // MplsTe::GlobalAttributes::Srlg


class MplsTe::GlobalAttributes::Srlg::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

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

        class Name; //type: MplsTe::GlobalAttributes::Srlg::Names::Name

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name> > name;
        
}; // MplsTe::GlobalAttributes::Srlg::Names


class MplsTe::GlobalAttributes::Srlg::Names::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: int32
        class StaticSrlgMembers; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers> static_srlg_members;
        
}; // MplsTe::GlobalAttributes::Srlg::Names::Name


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers : public ydk::Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticSrlgMember; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember> > static_srlg_member;
        
}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember : public ydk::Entity
{
    public:
        StaticSrlgMember();
        ~StaticSrlgMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember


class MplsTe::GmplsNni : public ydk::Entity
{
    public:
        GmplsNni();
        ~GmplsNni();

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

        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf enable_gmpls_nni; //type: empty
        class TopologyInstances; //type: MplsTe::GmplsNni::TopologyInstances
        class TunnelHeads; //type: MplsTe::GmplsNni::TunnelHeads

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances> topology_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads> tunnel_heads;
        
}; // MplsTe::GmplsNni


class MplsTe::GmplsNni::TopologyInstances : public ydk::Entity
{
    public:
        TopologyInstances();
        ~TopologyInstances();

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

        class TopologyInstance; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance> > topology_instance;
        
}; // MplsTe::GmplsNni::TopologyInstances


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance : public ydk::Entity
{
    public:
        TopologyInstance();
        ~TopologyInstance();

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

        ydk::YLeaf ospf_area_type; //type: OspfAreaMode
        ydk::YLeaf igp_instance_name; //type: string
        ydk::YLeaf igp_type; //type: MplsTeIgpProtocol
        class OspfInt; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt
        class OspfipAddr; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt> > ospf_int;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr> > ospfip_addr;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt : public ydk::Entity
{
    public:
        OspfInt();
        ~OspfInt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_area; //type: int32
        class Controllers; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers> controllers;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller> > controller;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf delay; //type: uint32
        class TtiMode; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode> tti_mode;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode : public ydk::Entity
{
    public:
        TtiMode();
        ~TtiMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tti_mode_type; //type: GmplsttiMode
        ydk::YLeaf tcmid; //type: uint32

}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr : public ydk::Entity
{
    public:
        OspfipAddr();
        ~OspfipAddr();

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
        class Controllers; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers> controllers;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller> > controller;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf delay; //type: uint32
        class TtiMode; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode> tti_mode;
        
}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode : public ydk::Entity
{
    public:
        TtiMode();
        ~TtiMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tti_mode_type; //type: GmplsttiMode
        ydk::YLeaf tcmid; //type: uint32

}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode


class MplsTe::GmplsNni::TunnelHeads : public ydk::Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

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

        class TunnelHead; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead> > tunnel_head;
        
}; // MplsTe::GmplsNni::TunnelHeads


class MplsTe::GmplsNni::TunnelHeads::TunnelHead : public ydk::Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

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

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf restore_lsp_shutdown; //type: empty
        ydk::YLeaf current_lsp_shutdown; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf payload; //type: OtnPayload
        ydk::YLeaf standby_lsp_shutdown; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf path_protection_attribute_set_profile; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf signalled_name; //type: string
        class SignalledBandwidth; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth
        class Destination; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination
        class ProtectionSwitching; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching
        class Logging; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging
        class PathOptions; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions
        class StaticUni; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions> path_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching> protection_switching;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth> signalled_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni> static_uni;
        
}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf destination_type; //type: OtnDestination
        ydk::YLeaf interface_if_index; //type: int32

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_message; //type: empty
        ydk::YLeaf homepath_state_message; //type: empty
        ydk::YLeaf signalling_state_message; //type: empty
        ydk::YLeaf path_change_message; //type: empty
        ydk::YLeaf static_cross_connect_message; //type: empty
        ydk::YLeaf tunnel_state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption> > path_option;
        
}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf protected_by_preference_level; //type: uint32
        ydk::YLeaf restore_by_preference_level; //type: uint32
        ydk::YLeaf xro_type; //type: empty
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching : public ydk::Entity
{
    public:
        ProtectionSwitching();
        ~ProtectionSwitching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lockout; //type: OtnProtectionSwitchLockout

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth : public ydk::Entity
{
    public:
        SignalledBandwidth();
        ~SignalledBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signalled_bandwidth_type; //type: OtnSignaledBandwidth
        ydk::YLeaf bitrate; //type: int32
        ydk::YLeaf od_uflex_framing_type; //type: OtnSignaledBandwidthFlexFraming

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni : public ydk::Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress_controller_name; //type: string
        ydk::YLeaf egress_controller_if_index; //type: int32
        ydk::YLeaf ingress_type; //type: OtnStaticUni
        ydk::YLeaf egress_type; //type: OtnStaticUni

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni


class MplsTe::GmplsUni : public ydk::Entity
{
    public:
        GmplsUni();
        ~GmplsUni();

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

        class Timers; //type: MplsTe::GmplsUni::Timers
        class Controllers; //type: MplsTe::GmplsUni::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers> controllers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers> timers;
        
}; // MplsTe::GmplsUni


class MplsTe::GmplsUni::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

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

        class Controller; //type: MplsTe::GmplsUni::Controllers::Controller

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller> > controller;
        
}; // MplsTe::GmplsUni::Controllers


class MplsTe::GmplsUni::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Announce; //type: MplsTe::GmplsUni::Controllers::Controller::Announce
        class ControllerLogging; //type: MplsTe::GmplsUni::Controllers::Controller::ControllerLogging
        class GmplsUnitunnelHead; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::Announce> announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::ControllerLogging> controller_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead> gmpls_unitunnel_head;
        
}; // MplsTe::GmplsUni::Controllers::Controller


class MplsTe::GmplsUni::Controllers::Controller::Announce : public ydk::Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srl_gs; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::Announce


class MplsTe::GmplsUni::Controllers::Controller::ControllerLogging : public ydk::Entity
{
    public:
        ControllerLogging();
        ~ControllerLogging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discovered_srlg_change_logging; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::ControllerLogging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead : public ydk::Entity
{
    public:
        GmplsUnitunnelHead();
        ~GmplsUnitunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf signalled_name; //type: string
        class PathOptions; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions
        class Recording; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording
        class Logging; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging
        class Priority; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions> path_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording> recording;
        
}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_message; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption> > path_option;
        
}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf xro_type; //type: empty
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty
        ydk::YLeaf verbatim; //type: MplsTePathOptionProperty
        ydk::YLeaf signaled_label; //type: MplsTeSignaledLabel
        ydk::YLeaf dwdm_channel; //type: uint32

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording : public ydk::Entity
{
    public:
        Recording();
        ~Recording();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording


class MplsTe::GmplsUni::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        class PathOptionTimers; //type: MplsTe::GmplsUni::Timers::PathOptionTimers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers> path_option_timers;
        
}; // MplsTe::GmplsUni::Timers


class MplsTe::GmplsUni::Timers::PathOptionTimers : public ydk::Entity
{
    public:
        PathOptionTimers();
        ~PathOptionTimers();

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

        class Holddown; //type: MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown> holddown;
        
}; // MplsTe::GmplsUni::Timers::PathOptionTimers


class MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown : public ydk::Entity
{
    public:
        Holddown();
        ~Holddown();

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

        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32

}; // MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown


class MplsTe::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: MplsTe::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface> > interface;
        
}; // MplsTe::Interfaces


class MplsTe::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class TransportProfileLink; //type: MplsTe::Interfaces::Interface::TransportProfileLink
        class Lcac; //type: MplsTe::Interfaces::Interface::Lcac
        class GlobalAttributes; //type: MplsTe::Interfaces::Interface::GlobalAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes> global_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac> lcac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink> transport_profile_link;
        
}; // MplsTe::Interfaces::Interface


class MplsTe::Interfaces::Interface::GlobalAttributes : public ydk::Entity
{
    public:
        GlobalAttributes();
        ~GlobalAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupTunnels; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels
        class AutoTunnel; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel
        class BackupPaths; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths> backup_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels> backup_tunnels;
        
}; // MplsTe::Interfaces::Interface::GlobalAttributes


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel : public ydk::Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Backup; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup> backup;
        
}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

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
        ydk::YLeaf attribute_set; //type: string
        ydk::YLeaf next_hop_only; //type: empty
        class Exclude; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude> exclude;
        
}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_mode; //type: MplsTesrlgExclude

}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths : public ydk::Entity
{
    public:
        BackupPaths();
        ~BackupPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupPath; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath> > backup_path;
        
}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint32

}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels : public ydk::Entity
{
    public:
        BackupTunnels();
        ~BackupTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupTunnel; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel> > backup_tunnel;
        
}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel : public ydk::Entity
{
    public:
        BackupTunnel();
        ~BackupTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string

}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel


class MplsTe::Interfaces::Interface::Lcac : public ydk::Entity
{
    public:
        Lcac();
        ~Lcac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf fault_oam_lockout; //type: empty
        ydk::YLeaf attribute_flags; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf admin_weight; //type: int32
        class Switchings; //type: MplsTe::Interfaces::Interface::Lcac::Switchings
        class FloodArea; //type: MplsTe::Interfaces::Interface::Lcac::FloodArea
        class AttributeNameXr; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNameXr
        class AttributeNames; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNames
        class Srlgs; //type: MplsTe::Interfaces::Interface::Lcac::Srlgs
        class UpThresholds; //type: MplsTe::Interfaces::Interface::Lcac::UpThresholds
        class DownThresholds; //type: MplsTe::Interfaces::Interface::Lcac::DownThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNameXr> attribute_name_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames> attribute_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::DownThresholds> down_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::FloodArea> flood_area;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs> srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings> switchings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::UpThresholds> up_thresholds;
        
}; // MplsTe::Interfaces::Interface::Lcac


class MplsTe::Interfaces::Interface::Lcac::AttributeNameXr : public ydk::Entity
{
    public:
        AttributeNameXr();
        ~AttributeNameXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList attribute_name; //type: list of  string

}; // MplsTe::Interfaces::Interface::Lcac::AttributeNameXr


class MplsTe::Interfaces::Interface::Lcac::AttributeNames : public ydk::Entity
{
    public:
        AttributeNames();
        ~AttributeNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttributeName; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName> > attribute_name;
        
}; // MplsTe::Interfaces::Interface::Lcac::AttributeNames


class MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName : public ydk::Entity
{
    public:
        AttributeName();
        ~AttributeName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_index; //type: uint32
        ydk::YLeafList value_; //type: list of  string

}; // MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName


class MplsTe::Interfaces::Interface::Lcac::DownThresholds : public ydk::Entity
{
    public:
        DownThresholds();
        ~DownThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList down_threshold; //type: list of  uint32

}; // MplsTe::Interfaces::Interface::Lcac::DownThresholds


class MplsTe::Interfaces::Interface::Lcac::FloodArea : public ydk::Entity
{
    public:
        FloodArea();
        ~FloodArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_type; //type: MplsLcacFloodingIgp
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf area_id; //type: int32

}; // MplsTe::Interfaces::Interface::Lcac::FloodArea


class MplsTe::Interfaces::Interface::Lcac::Srlgs : public ydk::Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlg; //type: MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg> > srlg;
        
}; // MplsTe::Interfaces::Interface::Lcac::Srlgs


class MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_number; //type: uint32

}; // MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg


class MplsTe::Interfaces::Interface::Lcac::Switchings : public ydk::Entity
{
    public:
        Switchings();
        ~Switchings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Switching; //type: MplsTe::Interfaces::Interface::Lcac::Switchings::Switching

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings::Switching> > switching;
        
}; // MplsTe::Interfaces::Interface::Lcac::Switchings


class MplsTe::Interfaces::Interface::Lcac::Switchings::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_id; //type: one of enumeration, uint32
        ydk::YLeaf encoding; //type: MplsTeSwitchingEncoding
        ydk::YLeaf capability; //type: MplsTeSwitchingCap

}; // MplsTe::Interfaces::Interface::Lcac::Switchings::Switching


class MplsTe::Interfaces::Interface::Lcac::UpThresholds : public ydk::Entity
{
    public:
        UpThresholds();
        ~UpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList up_threshold; //type: list of  uint32

}; // MplsTe::Interfaces::Interface::Lcac::UpThresholds


class MplsTe::Interfaces::Interface::TransportProfileLink : public ydk::Entity
{
    public:
        TransportProfileLink();
        ~TransportProfileLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Links; //type: MplsTe::Interfaces::Interface::TransportProfileLink::Links

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links> links;
        
}; // MplsTe::Interfaces::Interface::TransportProfileLink


class MplsTe::Interfaces::Interface::TransportProfileLink::Links : public ydk::Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Link; //type: MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link> > link;
        
}; // MplsTe::Interfaces::Interface::TransportProfileLink::Links


class MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf next_hop_type; //type: LinkNextHop
        ydk::YLeaf next_hop_address; //type: string

}; // MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link


class MplsTe::Lcac : public ydk::Entity
{
    public:
        Lcac();
        ~Lcac();

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

        ydk::YLeaf bandwidth_hold_timer; //type: uint32
        ydk::YLeaf delay_preempt_bundle_capacity_timer; //type: uint32
        ydk::YLeaf periodic_flooding_timer; //type: uint32
        class Bfd; //type: MplsTe::Lcac::Bfd
        class FloodingThreshold; //type: MplsTe::Lcac::FloodingThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::FloodingThreshold> flooding_threshold;
        
}; // MplsTe::Lcac


class MplsTe::Lcac::Bfd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // MplsTe::Lcac::Bfd


class MplsTe::Lcac::FloodingThreshold : public ydk::Entity
{
    public:
        FloodingThreshold();
        ~FloodingThreshold();

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

        ydk::YLeaf up_stream; //type: uint32
        ydk::YLeaf down_stream; //type: uint32

}; // MplsTe::Lcac::FloodingThreshold


class MplsTe::NamedTunnels : public ydk::Entity
{
    public:
        NamedTunnels();
        ~NamedTunnels();

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

        ydk::YLeaf enable; //type: empty
        class Tunnels; //type: MplsTe::NamedTunnels::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels> tunnels;
        
}; // MplsTe::NamedTunnels


class MplsTe::NamedTunnels::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: MplsTe::NamedTunnels::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel> > tunnel;
        
}; // MplsTe::NamedTunnels::Tunnels


class MplsTe::NamedTunnels::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_type; //type: MplsTeConfigTunnel
        ydk::YLeaf enable; //type: empty
        class TunnelAttributes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes
        class TunnelId; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes> tunnel_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId> tunnel_id; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes : public ydk::Entity
{
    public:
        TunnelAttributes();
        ~TunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf soft_preemption; //type: empty
        ydk::YLeaf load_share; //type: uint32
        class PathSetups; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups
        class TunnelPathSelection; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection
        class AutoBandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth
        class Priority; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority
        class Logging; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging
        class Bandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth
        class Autoroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute
        class NewStyleAffinityAffinityTypes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute> fast_reroute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups> path_setups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection> tunnel_path_selection;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_enable; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf overflow_enable; //type: boolean
        ydk::YLeaf collection_only; //type: empty
        class Underflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow
        class Overflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow> underflow; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold : public ydk::Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits : public ydk::Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_min_limit; //type: uint32
        ydk::YLeaf bandwidth_max_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutorouteAnnounce; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce
        class Destinations; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations> destinations;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce : public ydk::Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

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
        ydk::YLeaf include_ipv6; //type: empty
        class ExcludeTraffic; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric> metric;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public ydk::Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing; //type: empty

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric : public ydk::Entity
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

        ydk::YLeaf metric_type; //type: MplsTeAutorouteMetric
        ydk::YLeaf absolute_metric; //type: uint32
        ydk::YLeaf relative_metric; //type: int32
        ydk::YLeaf constant_metric; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations : public ydk::Entity
{
    public:
        Destinations();
        ~Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination> > destination;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_protection; //type: uint32
        ydk::YLeaf node_protection; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_switch_over_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf record_route_messsage; //type: empty
        ydk::YLeaf bfd_state_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string
        ydk::YLeaf affinity10; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups : public ydk::Entity
{
    public:
        PathSetups();
        ~PathSetups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathSetup; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup> > path_setup;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup : public ydk::Entity
{
    public:
        PathSetup();
        ~PathSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_setup_name; //type: string
        ydk::YLeaf preference; //type: int32
        ydk::YLeaf enable; //type: empty
        class PathComputation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation> path_computation; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation : public ydk::Entity
{
    public:
        PathComputation();
        ~PathComputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_computation_method; //type: MplsTePathComputationMethod
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf path_computation_server; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection : public ydk::Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker; //type: MplsTePathSelectionTiebreaker
        ydk::YLeaf path_selection_hop_limit; //type: uint32
        ydk::YLeaf path_selection_cost_limit; //type: uint32
        class Invalidation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id_type; //type: MplsTeTunnelId
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId


class MplsTe::TransportProfile : public ydk::Entity
{
    public:
        TransportProfile();
        ~TransportProfile();

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

        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf node_id; //type: string
        class Fault; //type: MplsTe::TransportProfile::Fault
        class Alarm; //type: MplsTe::TransportProfile::Alarm
        class Bfd; //type: MplsTe::TransportProfile::Bfd
        class Midpoints; //type: MplsTe::TransportProfile::Midpoints

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm> alarm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault> fault;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints> midpoints;
        
}; // MplsTe::TransportProfile


class MplsTe::TransportProfile::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

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

        ydk::YLeaf soak_time; //type: uint32
        ydk::YLeaf enable_alarm; //type: empty
        class SuppressEvent; //type: MplsTe::TransportProfile::Alarm::SuppressEvent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm::SuppressEvent> suppress_event;
        
}; // MplsTe::TransportProfile::Alarm


class MplsTe::TransportProfile::Alarm::SuppressEvent : public ydk::Entity
{
    public:
        SuppressEvent();
        ~SuppressEvent();

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

        ydk::YLeaf disable; //type: empty

}; // MplsTe::TransportProfile::Alarm::SuppressEvent


class MplsTe::TransportProfile::Bfd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf detection_multiplier_standby; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        class MinIntervalStandby; //type: MplsTe::TransportProfile::Bfd::MinIntervalStandby
        class MinInterval; //type: MplsTe::TransportProfile::Bfd::MinInterval

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinInterval> min_interval;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinIntervalStandby> min_interval_standby;
        
}; // MplsTe::TransportProfile::Bfd


class MplsTe::TransportProfile::Bfd::MinInterval : public ydk::Entity
{
    public:
        MinInterval();
        ~MinInterval();

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

        ydk::YLeaf interval_ms; //type: uint32
        ydk::YLeaf interval_us; //type: uint32

}; // MplsTe::TransportProfile::Bfd::MinInterval


class MplsTe::TransportProfile::Bfd::MinIntervalStandby : public ydk::Entity
{
    public:
        MinIntervalStandby();
        ~MinIntervalStandby();

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

        ydk::YLeaf interval_standby_ms; //type: uint32
        ydk::YLeaf interval_standby_us; //type: uint32

}; // MplsTe::TransportProfile::Bfd::MinIntervalStandby


class MplsTe::TransportProfile::Fault : public ydk::Entity
{
    public:
        Fault();
        ~Fault();

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

        ydk::YLeaf wait_to_restore_interval; //type: uint32
        ydk::YLeaf refresh_interval; //type: uint32
        class ProtectionTrigger; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger> protection_trigger;
        
}; // MplsTe::TransportProfile::Fault


class MplsTe::TransportProfile::Fault::ProtectionTrigger : public ydk::Entity
{
    public:
        ProtectionTrigger();
        ~ProtectionTrigger();

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

        ydk::YLeaf ais; //type: empty
        class Ldi; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi
        class Lkr; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi> ldi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr> lkr;
        
}; // MplsTe::TransportProfile::Fault::ProtectionTrigger


class MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi : public ydk::Entity
{
    public:
        Ldi();
        ~Ldi();

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

        ydk::YLeaf disable; //type: empty

}; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi


class MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr : public ydk::Entity
{
    public:
        Lkr();
        ~Lkr();

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

        ydk::YLeaf disable; //type: empty

}; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr


class MplsTe::TransportProfile::Midpoints : public ydk::Entity
{
    public:
        Midpoints();
        ~Midpoints();

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

        class Midpoint; //type: MplsTe::TransportProfile::Midpoints::Midpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint> > midpoint;
        
}; // MplsTe::TransportProfile::Midpoints


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_1_ */

