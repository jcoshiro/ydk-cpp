#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_11_
#define _CISCO_IOS_XR_MPLS_TE_OPER_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_10.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

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
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public ydk::Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::PathCalculationError


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::RemergeError : public ydk::Entity
{
    public:
        RemergeError();
        ~RemergeError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::RemergeError


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::SignallingError : public ydk::Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_node; //type: uint32
        ydk::YLeaf error; //type: uint8
        ydk::YLeaf sub_code; //type: uint16
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32
        ydk::YLeaf signalling_lsp_id; //type: uint16
        ydk::YLeaf error_message; //type: string
        ydk::YLeaf reverse_lsp; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::SignallingError


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet : public ydk::Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

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
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public ydk::Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId> > tunnel_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        class Affinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

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
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Association::S2LExtendedId


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::DiversityInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::FlexInfo::FlexFec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Fspec : public ydk::Entity
{
    public:
        Fspec();
        ~Fspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::Fspec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec : public ydk::Entity
{
    public:
        GenericFspec();
        ~GenericFspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fspec_type; //type: TeMgmtGenericFspec
        class Otnfspec; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec::Otnfspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec::Otnfspec> otnfspec;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec::Otnfspec : public ydk::Entity
{
    public:
        Otnfspec();
        ~Otnfspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericFspec::Otnfspec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec : public ydk::Entity
{
    public:
        GenericTspec();
        ~GenericTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tspec_type; //type: TeMgmtGenericTspec
        class Otntspec; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec::Otntspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec::Otntspec> otntspec;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec::Otntspec : public ydk::Entity
{
    public:
        Otntspec();
        ~Otntspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GenericTspec::Otntspec


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels : public ydk::Entity
{
    public:
        GmplsLabels();
        ~GmplsLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel> resv_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel> resv_ingress_label;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm> wdm;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm> wdm;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm> wdm;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo : public ydk::Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        ydk::YLeaf is_redundant; //type: boolean
        ydk::YLeaf bfd_reverse_path_stale; //type: boolean
        class SessionInfo; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel> > bfd_reverse_path_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory> deletion_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
{
    public:
        BfdReversePathLabel();
        ~BfdReversePathLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf deletion_time; //type: uint32
        ydk::YLeaf deletion_reason; //type: string
        ydk::YLeaf deletion_diagnostic_code; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro


class MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp::S2L::InEro::Ipv4EroSubObject


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_11_ */

