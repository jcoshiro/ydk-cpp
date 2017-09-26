#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_2_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public ydk::Entity
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

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf forwarding_update_count; //type: uint32
        ydk::YLeaf forwarding_update_timestamp; //type: uint64
        ydk::YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf source; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_local_vrf_leaked; //type: boolean
        ydk::YLeaf routing_update_count; //type: uint32
        ydk::YLeaf routing_update_timestamp; //type: uint64
        ydk::YLeaf routing_update_age; //type: uint64
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Syncs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs> syncs;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart : public ydk::Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf delay_secs; //type: uint32
        ydk::YLeaf timer_running; //type: boolean
        ydk::YLeaf remaining_secs; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs : public ydk::Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync> > sync;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf igp_sync_state; //type: LdpIgpSyncState
        ydk::YLeaf igp_sync_delay; //type: uint32
        ydk::YLeaf is_delay_timer_running; //type: boolean
        ydk::YLeaf delay_timer_remaining; //type: uint32
        ydk::YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReason
        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_
        class Peers; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public ydk::Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf is_chkpt_created; //type: boolean

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers : public ydk::Entity
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

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf is_gr_enabled; //type: boolean

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf known_ip_interface_count; //type: uint32
        ydk::YLeaf known_ip_interface_ldp_enabled; //type: uint32
        ydk::YLeaf ldp_configured_attached_interface; //type: uint32
        ydk::YLeaf ldp_configured_te_interface; //type: uint32
        ydk::YLeaf forward_references; //type: uint32
        ydk::YLeaf auto_config_disabled; //type: uint32
        ydk::YLeaf auto_config; //type: uint32
        ydk::YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface> > interface;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf ldp_enabled; //type: boolean
        ydk::YLeaf is_im_stale; //type: boolean
        ydk::YLeaf ldp_config_mode; //type: boolean
        ydk::YLeaf ldp_autoconfig_disable; //type: boolean
        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_
        class TeMeshGrp; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig : public ydk::Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public ydk::Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        ydk::YLeaf ldp_mesh_group_enabled; //type: boolean
        ydk::YLeaf te_mesh_group_id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters : public ydk::Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_seconds; //type: uint32
        ydk::YLeaf maximum_seconds; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters


class MplsLdp::Global::Active::Vrfs::Vrf::Backoffs : public ydk::Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Backoff; //type: MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff> > backoff;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Backoffs


class MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf backoff_seconds; //type: uint32
        ydk::YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Capability; //type: MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability> > capability;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability_type; //type: int32
        ydk::YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_ : public ydk::Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        ydk::YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_
        class GracefulRestartableNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor : public ydk::Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf is_liveness_timer_running; //type: boolean
        ydk::YLeaf liveness_timer_remaining_seconds; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf recovery_timer_remaining_seconds; //type: uint32
        ydk::YLeaf down_nbr_flap_count; //type: uint8
        ydk::YLeaf down_nbr_flags; //type: uint32
        ydk::YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public ydk::Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public ydk::Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAfId
        ydk::YLeaf interface_handle; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public ydk::Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary> ha_summary;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics : public ydk::Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaGlobal; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal : public ydk::Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitSync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync : public ydk::Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_cfged; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_peers; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_pfx; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_lcl_addr_wd; //type: uint32
        ydk::YLeaf num_lbl_adv; //type: uint32
        ydk::YLeaf ipc_msg_tx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_tx_bytes; //type: uint32
        ydk::YLeaf ipc_msg_rx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_rx_bytes; //type: uint32
        ydk::YLeaf ipc_max_tx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_max_rx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf total_ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf ipc_restart_cnt; //type: uint32
        ydk::YLeaf ipc_default_mtu; //type: uint32
        ydk::YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary : public ydk::Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf nsr_eligible; //type: uint32
        ydk::YLeaf nsr_state_none; //type: uint32
        ydk::YLeaf nsr_state_wait; //type: uint32
        ydk::YLeaf nsr_state_ready; //type: uint32
        ydk::YLeaf nsr_state_prepare; //type: uint32
        ydk::YLeaf nsr_state_app_wait; //type: uint32
        ydk::YLeaf nsr_state_operational; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase1; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Sessions


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::LdpId : public ydk::Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::LdpId


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs : public ydk::Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborBrief; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief> > neighbor_brief;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief : public ydk::Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf nsr_state; //type: ShowNsrState
        ydk::YLeaf up_time_seconds; //type: uint32
        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_
        class NbrBrAfInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public ydk::Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf num_of_nbr_discovery; //type: uint32
        ydk::YLeaf num_of_nbr_addresses; //type: uint32
        ydk::YLeaf num_of_nbr_lbl; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities : public ydk::Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborCapability; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability : public ydk::Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation : public ydk::Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_holdtime; //type: uint32
        ydk::YLeaf keep_alive_interval; //type: uint32
        ydk::YLeaf peer_state; //type: string
        ydk::YLeaf has_ipv4_inbound; //type: boolean
        ydk::YLeaf inbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_inbound; //type: boolean
        ydk::YLeaf inbound_ipv6acl; //type: string
        ydk::YLeaf has_ipv4_outbound; //type: boolean
        ydk::YLeaf outbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_outbound; //type: boolean
        ydk::YLeaf outbound_ipv6acl; //type: string
        ydk::YLeaf has_sp; //type: boolean
        ydk::YLeaf sp_state; //type: string
        ydk::YLeaf sp_has_acl; //type: boolean
        ydk::YLeaf spacl; //type: string
        ydk::YLeaf sp_has_duration; //type: boolean
        ydk::YLeaf sp_duration; //type: uint32
        ydk::YLeaf spht_running; //type: boolean
        ydk::YLeaf spht_remaining; //type: uint32
        ydk::YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncState
        ydk::YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErr
        ydk::YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsn
        ydk::YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtState
        ydk::YLeaf advertise_bgp_prefixes; //type: boolean
        class Capabilities; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public ydk::Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public ydk::Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation : public ydk::Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ta_holdtime; //type: uint32
        ydk::YLeaf ta_state; //type: string
        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf ta_up_time_seconds; //type: uint32
        ydk::YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public ydk::Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation : public ydk::Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public ydk::Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost : public ydk::Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPending; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics : public ydk::Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaGlobal; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal : public ydk::Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitSync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync : public ydk::Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_cfged; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_peers; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_pfx; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_lcl_addr_wd; //type: uint32
        ydk::YLeaf num_lbl_adv; //type: uint32
        ydk::YLeaf ipc_msg_tx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_tx_bytes; //type: uint32
        ydk::YLeaf ipc_msg_rx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_rx_bytes; //type: uint32
        ydk::YLeaf ipc_max_tx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_max_rx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf total_ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf ipc_restart_cnt; //type: uint32
        ydk::YLeaf ipc_default_mtu; //type: uint32
        ydk::YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary : public ydk::Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf nsr_eligible; //type: uint32
        ydk::YLeaf nsr_state_none; //type: uint32
        ydk::YLeaf nsr_state_wait; //type: uint32
        ydk::YLeaf nsr_state_ready; //type: uint32
        ydk::YLeaf nsr_state_prepare; //type: uint32
        ydk::YLeaf nsr_state_app_wait; //type: uint32
        ydk::YLeaf nsr_state_operational; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase1; //type: uint32
        ydk::YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending : public ydk::Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_is_active; //type: boolean
        ydk::YLeaf global_md5_password_enabled; //type: boolean
        ydk::YLeaf protocol_version; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf hello_hold_time; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf targeted_hello_hold_time; //type: uint32
        ydk::YLeaf targeted_hello_interval; //type: uint32
        ydk::YLeaf session_hold_time; //type: uint32
        ydk::YLeaf housekeeping_timer_interval; //type: uint32
        ydk::YLeaf le_no_route_timeout; //type: uint32
        ydk::YLeaf ldp_recovery_timeout; //type: uint32
        ydk::YLeaf af_binding_withdraw_delay; //type: uint32
        ydk::YLeaf max_intf_attached; //type: uint32
        ydk::YLeaf max_intf_te; //type: uint32
        ydk::YLeaf max_peer; //type: uint32
        ydk::YLeaf ldp_out_of_mem_state; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf igp_sync_delay_time_for_interface; //type: uint32
        ydk::YLeaf igp_sync_delay_time_on_restart; //type: uint32
        ydk::YLeaf global_discovery_quick_start_disabled; //type: boolean
        ydk::YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        class GracefulRestartInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation> graceful_restart_information;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter : public ydk::Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf null_label; //type: string
        ydk::YLeaf label_imp_null_override_acl; //type: string
        ydk::YLeaf is_accepting_targeted_hellos; //type: boolean
        ydk::YLeaf targeted_hello_acl; //type: string
        class DiscoveryTransportAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public ydk::Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation : public ydk::Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restart_configured; //type: boolean
        ydk::YLeaf graceful_restart_reconnect_timeout; //type: uint32
        ydk::YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Parameters::GracefulRestartInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistic; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic> > statistic;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut> message_out;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn : public ydk::Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut : public ydk::Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Active::Vrfs::Vrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_
        class Common; //type: MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_> vrf;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary


class MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: LdpAf
        ydk::YLeaf number_of_ipv4af; //type: uint32
        ydk::YLeaf number_of_ipv6af; //type: uint32
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_nsr_synced_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf number_of_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv6_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv6_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ipv6_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common


class MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_


class MplsLdp::Global::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class DefaultVrf; //type: MplsLdp::Global::Standby::DefaultVrf
        class ForwardingSummaryAll; //type: MplsLdp::Global::Standby::ForwardingSummaryAll
        class BindingsSummaryAll; //type: MplsLdp::Global::Standby::BindingsSummaryAll
        class AtoMdbTableEntries; //type: MplsLdp::Global::Standby::AtoMdbTableEntries
        class NsrSummaryAll; //type: MplsLdp::Global::Standby::NsrSummaryAll
        class Summary; //type: MplsLdp::Global::Standby::Summary
        class Vrfs; //type: MplsLdp::Global::Standby::Vrfs
        class DiscoverySummaryAll; //type: MplsLdp::Global::Standby::DiscoverySummaryAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries> ato_mdb_table_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DiscoverySummaryAll> discovery_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll> forwarding_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs> vrfs;
        
}; // MplsLdp::Global::Standby


class MplsLdp::Global::Standby::AtoMdbTableEntries : public ydk::Entity
{
    public:
        AtoMdbTableEntries();
        ~AtoMdbTableEntries();

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

        class AtoMdbTableEntry; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry> > ato_mdb_table_entry;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry : public ydk::Entity
{
    public:
        AtoMdbTableEntry();
        ~AtoMdbTableEntry();

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

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf fe_ctype; //type: int32
        ydk::YLeaf pw_id; //type: int32
        ydk::YLeaf agi_type; //type: int32
        ydk::YLeaf agi; //type: int32
        ydk::YLeaf saii_type; //type: int32
        ydk::YLeaf saii_local_id; //type: string
        ydk::YLeaf saii_global_id; //type: int32
        ydk::YLeaf saii_prefix; //type: string
        ydk::YLeaf saii_ac_id; //type: int32
        ydk::YLeaf taii_type; //type: int32
        ydk::YLeaf taii_local_id; //type: string
        ydk::YLeaf taii_global_id; //type: int32
        ydk::YLeaf taii_prefix; //type: string
        ydk::YLeaf taii_ac_id; //type: int32
        ydk::YLeaf peer_id_xr; //type: string
        ydk::YLeaf mapping_tlv_count; //type: uint32
        ydk::YLeaf notification_tlv_count; //type: uint32
        class FecInfo; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo> fec_info;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo : public ydk::Entity
{
    public:
        FecInfo();
        ~FecInfo();

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

        ydk::YLeaf fe_ctype; //type: L2vpnLdpPwFec
        class Fec128; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128
        class Fec129; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129
        class Fec130; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128> fec128;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129> fec129;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130> fec130;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128 : public ydk::Entity
{
    public:
        Fec128();
        ~Fec128();

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

        ydk::YLeaf pseudowire_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129 : public ydk::Entity
{
    public:
        Fec129();
        ~Fec129();

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

        class Agi; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi
        class Saii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii
        class Taii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi> agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii> saii;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii> taii;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi : public ydk::Entity
{
    public:
        Agi();
        ~Agi();

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

        ydk::YLeaf agi_type; //type: L2vpnLdpPwAgi
        class Agi1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1> agi1;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1 : public ydk::Entity
{
    public:
        Agi1();
        ~Agi1();

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

        ydk::YLeaf rd; //type: uint64

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii : public ydk::Entity
{
    public:
        Saii();
        ~Saii();

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

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

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

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

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

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii : public ydk::Entity
{
    public:
        Taii();
        ~Taii();

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

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

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

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

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

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130 : public ydk::Entity
{
    public:
        Fec130();
        ~Fec130();

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

        class Agi; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi
        class Saii; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi> agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii> saii;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi : public ydk::Entity
{
    public:
        Agi();
        ~Agi();

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

        ydk::YLeaf agi_type; //type: L2vpnLdpPwAgi
        class Agi1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1> agi1;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1 : public ydk::Entity
{
    public:
        Agi1();
        ~Agi1();

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

        ydk::YLeaf rd; //type: uint64

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii : public ydk::Entity
{
    public:
        Saii();
        ~Saii();

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

        ydk::YLeaf aii_type; //type: L2vpnLdpPwAii
        class Aii1; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1> aii1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2> aii2;
        
}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1 : public ydk::Entity
{
    public:
        Aii1();
        ~Aii1();

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

        ydk::YLeaf local_id; //type: string

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1


class MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2 : public ydk::Entity
{
    public:
        Aii2();
        ~Aii2();

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

        ydk::YLeaf gobal_id; //type: uint32
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf ac_id; //type: uint32

}; // MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2


class MplsLdp::Global::Standby::BindingsSummaryAll : public ydk::Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

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

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::BindingsSummaryAll


class MplsLdp::Global::Standby::BindingsSummaryAll::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

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

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::BindingsSummaryAll::BindAf


class MplsLdp::Global::Standby::BindingsSummaryAll::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::BindingsSummaryAll::Vrf


class MplsLdp::Global::Standby::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

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

        class GracefulRestart; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities
        class Summary; //type: MplsLdp::Global::Standby::DefaultVrf::Summary
        class Afs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs
        class NeighborBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Global::Standby::DefaultVrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Global::Standby::DefaultVrf::Backoffs
        class Nsr; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr
        class Parameters; //type: MplsLdp::Global::Standby::DefaultVrf::Parameters
        class Issu; //type: MplsLdp::Global::Standby::DefaultVrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors
        class LdpId; //type: MplsLdp::Global::Standby::DefaultVrf::LdpId
        class Statistics; //type: MplsLdp::Global::Standby::DefaultVrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Backoffs> backoffs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::LdpId> ldp_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Parameters> parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Summary> summary;
        
}; // MplsLdp::Global::Standby::DefaultVrf


class MplsLdp::Global::Standby::DefaultVrf::Afs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Af; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af> > af;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: MplsLdpOperAfName
        class InterfaceSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces> interfaces;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding> > binding;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf le_local_binding_revision; //type: uint32
        ydk::YLeaf le_local_label_state; //type: LocalLabelState
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf advertise_prefix_acl; //type: string
        ydk::YLeaf advertise_tsr_acl; //type: string
        ydk::YLeaf config_enforced_local_label_value; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf
        class PrefixXr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked : public ydk::Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public ydk::Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr : public ydk::Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding : public ydk::Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public ydk::Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public ydk::Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationAcl; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public ydk::Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf peer_acl; //type: string

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public ydk::Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_acl; //type: boolean
        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary : public ydk::Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll : public ydk::Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_2_ */

