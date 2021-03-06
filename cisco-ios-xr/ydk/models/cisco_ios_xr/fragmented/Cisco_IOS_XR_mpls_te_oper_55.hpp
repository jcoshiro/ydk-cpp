#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_55_
#define _CISCO_IOS_XR_MPLS_TE_OPER_55_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_53.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LConvergence : public ydk::Entity
{
    public:
        S2LConvergence();
        ~S2LConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LConvergence


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SoftPreemption : public ydk::Entity
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

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf soft_preemption_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_link; //type: string
        ydk::YLeaf preempting_link_address; //type: string
        ydk::YLeaf time_to_hard_preemption; //type: uint16
        ydk::YLeaf fr_rrewrite; //type: boolean
        ydk::YLeaf fr_rrewrite_tunnel_name; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels : public ydk::Entity
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

        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn : public ydk::Entity
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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn : public ydk::Entity
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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn : public ydk::Entity
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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L : public ydk::Entity
{
    public:
        OtnS2L();
        ~OtnS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn
        class Aps; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps> aps;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn : public ydk::Entity
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

        ydk::YLeaf incoming_controller; //type: string
        ydk::YLeaf incoming_controller_state; //type: TeControllerState
        ydk::YLeaf incoming_sub_controller; //type: string
        ydk::YLeaf incoming_sub_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_controller; //type: string
        ydk::YLeaf outgoing_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_sub_controller; //type: string
        ydk::YLeaf outgoing_sub_controller_state; //type: TeControllerState
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf outgoing_controller_ifhandle; //type: string
        ydk::YLeaf outgoing_sub_controller_ifhandle; //type: string
        ydk::YLeaf incoming_controller_ifhandle; //type: string
        ydk::YLeaf incoming_sub_controller_ifhandle; //type: string
        ydk::YLeaf gpid; //type: uint16
        class Bandwidth; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth
        class Labels; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels> labels;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth : public ydk::Entity
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

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel : public ydk::Entity
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
        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

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
        class BitMap; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap> > bit_map;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps::ProtectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps::ProtectionInfo> protection_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps::ProtectionInfo : public ydk::Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf pbit; //type: boolean
        ydk::YLeaf nbit; //type: boolean
        ydk::YLeaf obit; //type: boolean
        ydk::YLeaf protect_type; //type: TeProtect
        ydk::YLeaf is_wtr_present; //type: boolean
        ydk::YLeaf wtr_timeout; //type: uint32
        ydk::YLeaf is_hopresent; //type: boolean
        ydk::YLeaf ho_timeout; //type: uint32
        ydk::YLeaf is_snc_mode_present; //type: boolean
        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OtnS2L::Aps::ProtectionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo : public ydk::Entity
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
        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo> session_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory> deletion_history;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel> > bfd_reverse_path_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::DeletionHistory


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo : public ydk::Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo::SessionInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection : public ydk::Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_collect_type; //type: TeSrlgCollectRequest
        class DiscoveredSrlg; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg> > discovered_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SrlgCollection::DiscoveredSrlg


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association : public ydk::Entity
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
        class S2LExtendedId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association::S2LExtendedId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Association::S2LExtendedId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::Protection


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseTspec : public ydk::Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseTspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo : public ydk::Entity
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
        class FlexFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo::FlexFec : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::FlexInfo::FlexFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::LspWrapInfo : public ydk::Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::LspWrapInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::DiversityInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::DiversityInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LReverseLspSubObj : public ydk::Entity
{
    public:
        S2LReverseLspSubObj();
        ~S2LReverseLspSubObj();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LReverseLspSubObj


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::SharedRiskLinkGroup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

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
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::Ipv4EroSubObject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::OutEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro : public ydk::Entity
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
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::Ipv4EroSubObject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::InEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro : public ydk::Entity
{
    public:
        PathRro();
        ~PathRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro : public ydk::Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity> > hop_extended_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::PathAffinityArray::HopExtendedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

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
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LSegmentRoutingPath : public ydk::Entity
{
    public:
        S2LSegmentRoutingPath();
        ~S2LSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2MpLsp::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp : public ydk::Entity
{
    public:
        TunnelStandbyLsp();
        ~TunnelStandbyLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf is_frr_failed; //type: boolean
        ydk::YLeaf frr_active_reason; //type: uint32
        ydk::YLeaf lsp_bandwidth; //type: uint32
        ydk::YLeaf lsp_setup_priority; //type: uint8
        ydk::YLeaf lsp_hold_priority; //type: uint8
        ydk::YLeaf lsp_bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf dste_class_match; //type: boolean
        ydk::YLeaf dste_class_index; //type: uint8
        ydk::YLeaf type; //type: MplsTeLsp
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf s2_ls_up; //type: uint32
        ydk::YLeaf s2_ls_proceeding; //type: uint32
        ydk::YLeaf s2_ls_down; //type: uint32
        ydk::YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf reoptimize_trigger; //type: MteReoptTrigger
        ydk::YLeaf timer_left; //type: uint32
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        class LspFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec
        class S2L; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec> lsp_fec;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L> > s2l;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::LspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L : public ydk::Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcalc_area; //type: string
        ydk::YLeaf is_expanded_ero; //type: boolean
        ydk::YLeaf path_reeval_query_mid; //type: uint32
        ydk::YLeaf time_since_last_query_received_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        ydk::YLeaf expanded_ero_area_id; //type: string
        ydk::YLeaf expanded_ero_affinity_bits; //type: uint32
        ydk::YLeaf expanded_ero_affinity_mask; //type: uint32
        ydk::YLeaf expanded_ero_metric_type; //type: MplsTeMetric
        ydk::YLeaf expanded_ero_metric; //type: uint32
        ydk::YLeaf abr_auto_discovered; //type: string
        ydk::YLeaf is_frr_enabled; //type: boolean
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf path_rro_enabled; //type: boolean
        ydk::YLeaf weight; //type: uint64
        ydk::YLeaf reverse_weight; //type: uint64
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf egress_interface_state; //type: TeControllerState
        ydk::YLeaf egress_interface_brief; //type: string
        ydk::YLeaf ingress_interface; //type: string
        ydk::YLeaf ingress_interface_state; //type: TeControllerState
        ydk::YLeaf ingress_interface_brief; //type: string
        ydk::YLeaf s2l_local_label; //type: uint32
        ydk::YLeaf s2l_out_label; //type: uint32
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf frr_out_tunnel_interface; //type: string
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatus
        ydk::YLeaf local_router_id; //type: string
        ydk::YLeaf upstream_router_id; //type: string
        ydk::YLeaf downstream_router_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf incoming_address; //type: string
        ydk::YLeaf backup_tunnel_interface; //type: string
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf is_optical; //type: boolean
        ydk::YLeaf s2l_reverse_ero_obj_present; //type: boolean
        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        ydk::YLeaf reverse_lsp_name; //type: string
        ydk::YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        ydk::YLeaf path_using_strict_spf; //type: boolean
        class S2LFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LFec
        class ActivePathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption
        class OutXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OutXro
        class InXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::InXro
        class Tspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Tspec
        class GenericTspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GenericTspec
        class Fspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Fspec
        class GenericFspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GenericFspec
        class NextHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::IncomingAddressGeneric
        class S2LConvergence; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LConvergence
        class SoftPreemption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SoftPreemption
        class GmplsLabels; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GmplsLabels
        class OtnS2L; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OtnS2L
        class HeadEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::TailEndBfdInfo
        class SrlgCollection; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SrlgCollection
        class Association; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Association
        class Protection; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Protection
        class ReverseLspFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseLspFec
        class ReverseTspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseTspec
        class FlexInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::FlexInfo
        class LspWrapInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::LspWrapInfo
        class DiversityInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::DiversityInfo
        class S2LReverseLspSubObj; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LReverseLspSubObj
        class SharedRiskLinkGroup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SharedRiskLinkGroup
        class OutEro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OutEro
        class InEro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::InEro
        class PathRro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PathRro
        class ResvRro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ResvRro
        class PathAffinityArray; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PathAffinityArray
        class ReverseEroIn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseEroIn
        class S2LSegmentRoutingPath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LFec> s2l_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption> active_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OutXro> out_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::InXro> in_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Tspec> tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GenericTspec> generic_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Fspec> fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GenericFspec> generic_fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LConvergence> s2l_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::GmplsLabels> gmpls_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OtnS2L> otn_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::HeadEndBfdInfo> head_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SrlgCollection> srlg_collection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseTspec> reverse_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::DiversityInfo> diversity_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LReverseLspSubObj> > s2l_reverse_lsp_sub_obj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::OutEro> > out_ero;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::InEro> > in_ero;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PathRro> > path_rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ResvRro> > resv_rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::PathAffinityArray> > path_affinity_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ReverseEroIn> > reverse_ero_in;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LSegmentRoutingPath> > s2l_segment_routing_path;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LFec : public ydk::Entity
{
    public:
        S2LFec();
        ~S2LFec();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::S2LFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption : public ydk::Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::XroAttributeSet> xro_attribute_set;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::PathCalculationError> > path_calculation_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::RemergeError> > remerge_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::SignallingError> > signalling_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet : public ydk::Entity
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
        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
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

        class Xro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
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
        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
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
        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
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
        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_55_ */

