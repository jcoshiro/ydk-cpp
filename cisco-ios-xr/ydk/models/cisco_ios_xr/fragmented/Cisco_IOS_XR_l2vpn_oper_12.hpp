#ifndef _CISCO_IOS_XR_L2VPN_OPER_12_
#define _CISCO_IOS_XR_L2VPN_OPER_12_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_11.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_9.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::AttachmentCircuit::Statistics::SequenceNumber


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire : public ydk::Entity
{
    public:
        PseudoWire();
        ~PseudoWire();

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

        ydk::YLeaf local_source_address; //type: string
        ydk::YLeaf ipv6_local_source_address; //type: string
        ydk::YLeaf pseudo_wire_id; //type: uint64
        ydk::YLeaf is_pwr_type; //type: boolean
        ydk::YLeaf is_evpn_vpws_type; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf state; //type: L2vpnSegmentState
        ydk::YLeaf pseudo_wire_state; //type: L2vpnPwState
        ydk::YLeaf protocol; //type: L2vpnSignallingProto
        ydk::YLeaf pw_class_name; //type: string
        ydk::YLeaf tag_rewrite; //type: uint16
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf fe_ctype; //type: L2vpnPwFec
        ydk::YLeaf evpn_src_acid; //type: uint32
        ydk::YLeaf sequencing_type; //type: L2vpnPwSequence
        ydk::YLeaf resync_enabled; //type: boolean
        ydk::YLeaf resync_threshold; //type: uint32
        ydk::YLeaf local_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf remote_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf local_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf remote_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf imposed_vlan_id; //type: uint32
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf time_elapsed_creation; //type: string
        ydk::YLeaf last_time_status_changed; //type: string
        ydk::YLeaf time_elapsed_status_changed; //type: string
        ydk::YLeaf last_time_status_down; //type: string
        ydk::YLeaf time_elapsed_status_down; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf pseudo_wire_type_mismatched; //type: boolean
        ydk::YLeaf payload_bytes_mismatched; //type: boolean
        ydk::YLeaf bitrate_mismatched; //type: boolean
        ydk::YLeaf rtp_mismatched; //type: boolean
        ydk::YLeaf diff_ts_mismatched; //type: boolean
        ydk::YLeaf sig_pkts_mismatched; //type: boolean
        ydk::YLeaf cas_mismatched; //type: boolean
        ydk::YLeaf payload_type_mismatched; //type: boolean
        ydk::YLeaf freq_mismatched; //type: boolean
        ydk::YLeaf ssrc_mismatched; //type: boolean
        ydk::YLeaf mtu_mismatched; //type: boolean
        ydk::YLeaf illegal_control_word; //type: boolean
        ydk::YLeaf ad_remote_down; //type: boolean
        ydk::YLeaf not_supported_qinq; //type: boolean
        ydk::YLeaf local_label_failed; //type: boolean
        ydk::YLeaf remote_label_failed; //type: boolean
        ydk::YLeaf preferred_path_disable_fallback; //type: boolean
        ydk::YLeaf backup_pw; //type: boolean
        ydk::YLeaf primary_pw; //type: boolean
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf backup_force_active; //type: boolean
        ydk::YLeaf disable_never; //type: boolean
        ydk::YLeaf disable_delay; //type: uint8
        ydk::YLeaf primary_peer_id; //type: string
        ydk::YLeaf primary_pseudo_wire_id; //type: uint64
        ydk::YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        ydk::YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf transport_lsp_down; //type: boolean
        ydk::YLeaf mac_limit_oper_down; //type: boolean
        ydk::YLeaf pw_status_use; //type: boolean
        ydk::YLeaf auto_discovery; //type: boolean
        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf pwlsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertise_failed; //type: boolean
        ydk::YLeaf is_vfi; //type: boolean
        ydk::YLeaf is_multi_segment_pseudowire; //type: boolean
        ydk::YLeaf pw_redundancy_one_way; //type: boolean
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf pw_flow_label_type; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_type_cfg; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_code17_disabled; //type: boolean
        ydk::YLeaf is_flow_label_static; //type: boolean
        ydk::YLeaf is_partially_programmed; //type: boolean
        ydk::YLeaf pw_redundancy_initial_delay; //type: uint8
        ydk::YLeaf bridge_pw_type_mismatch; //type: boolean
        ydk::YLeaf required_bw; //type: uint32
        ydk::YLeaf admited_bw; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf table_policy_name; //type: string
        class PeerId; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics
        class P2MpPw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::P2MpPw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface> local_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling> local_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::P2MpPw> p2mp_pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PeerId> peer_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface> remote_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling> remote_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics> statistics;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo : public ydk::Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

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

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class Atom; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

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

        ydk::YLeaf is_pseudowire_headend; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf local_group_id; //type: uint32
        ydk::YLeaf remote_group_id; //type: uint32
        ydk::YLeaf local_cv_type; //type: uint8
        ydk::YLeaf local_c_ctype; //type: uint8
        ydk::YLeaf remote_cv_type; //type: uint8
        ydk::YLeaf remote_c_ctype; //type: uint8
        ydk::YLeaf local_veid; //type: uint32
        ydk::YLeaf remote_veid; //type: uint32
        ydk::YLeaf local_ceid; //type: uint32
        ydk::YLeaf remote_ceid; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf remote_source_address; //type: string
        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf remote_ldp_id; //type: string
        ydk::YLeaf saii; //type: string
        ydk::YLeaf taii; //type: string
        ydk::YLeaf is_sai_itype2; //type: boolean
        ydk::YLeaf local_saii_gbl_id; //type: uint32
        ydk::YLeaf local_saiiac_id; //type: uint32
        ydk::YLeaf is_tai_itype2; //type: boolean
        ydk::YLeaf local_taii_gbl_id; //type: uint32
        ydk::YLeaf local_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii_gbl_id; //type: uint32
        ydk::YLeaf rem_saiiac_id; //type: uint32
        ydk::YLeaf rem_taii_gbl_id; //type: uint32
        ydk::YLeaf rem_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii; //type: string
        ydk::YLeaf rem_taii; //type: string
        ydk::YLeaf lsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertisment_failed; //type: boolean
        class LocalAgi; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi : public ydk::Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

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

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

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

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

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

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::L2Tpv3 : public ydk::Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

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

        ydk::YLeaf l2tp_class_name; //type: string
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv6_source_address; //type: string
        ydk::YLeaf path_mtu_enabled; //type: boolean
        ydk::YLeaf path_mtu_max_value; //type: uint16
        ydk::YLeaf dont_fragment_bit; //type: boolean
        ydk::YLeaf tos_mode; //type: L2vpnTosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf local_session_id; //type: uint32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf local_cookie_size; //type: uint8
        ydk::YLeaf remote_cookie_size; //type: uint8
        ydk::YLeaf local_cookie_low_value; //type: uint32
        ydk::YLeaf remote_cookie_low_value; //type: uint32
        ydk::YLeaf local_cookie_high_value; //type: uint32
        ydk::YLeaf remote_cookie_high_value; //type: uint32
        ydk::YLeaf remote_circuit_status_up; //type: boolean
        ydk::YLeaf tunnel_state; //type: L2vpnL2TpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface : public ydk::Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Atm


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

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

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Fr


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

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

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

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

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

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

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

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

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

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

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::StatusTlv


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::LocalSignalling::Tlv


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::P2MpPw : public ydk::Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

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

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::P2MpPw


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PeerId : public ydk::Entity
{
    public:
        PeerId();
        ~PeerId();

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

        ydk::YLeaf type; //type: L2vpnPeer
        ydk::YLeaf ipv4_peer_id; //type: string
        ydk::YLeaf ipv6_peer_id; //type: string
        ydk::YLeaf internal_label; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PeerId


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

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

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath::SrtePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath::SrtePolicy> srte_policy;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

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

        ydk::YLeaf policy_name; //type: string

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::PreferredPath::SrtePolicy


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters> parameters;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

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

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

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

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

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

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

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

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

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

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling : public ydk::Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

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

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::StatusTlv


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::RemoteSignalling::Tlv


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Active::Xconnects::Xconnect::Segment2::PseudoWire::Statistics::SequenceNumber


class L2Vpnv2::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: L2Vpnv2::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node> > node;
        
}; // L2Vpnv2::Nodes


class L2Vpnv2::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_id; //type: string
        class Discoveries; //type: L2Vpnv2::Nodes::Node::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2Vpnv2::Nodes::Node::MainInterfaces
        class IccpSm; //type: L2Vpnv2::Nodes::Node::IccpSm
        class BridgeSummary; //type: L2Vpnv2::Nodes::Node::BridgeSummary
        class Nsr; //type: L2Vpnv2::Nodes::Node::Nsr
        class PreferredPaths; //type: L2Vpnv2::Nodes::Node::PreferredPaths
        class GlobalSettings; //type: L2Vpnv2::Nodes::Node::GlobalSettings
        class Pwr; //type: L2Vpnv2::Nodes::Node::Pwr
        class XconnectMp2MpCe2Ces; //type: L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces
        class Xconnects; //type: L2Vpnv2::Nodes::Node::Xconnects
        class XconnectGroups; //type: L2Vpnv2::Nodes::Node::XconnectGroups
        class XconnectMp2Mps; //type: L2Vpnv2::Nodes::Node::XconnectMp2Mps
        class Indexes; //type: L2Vpnv2::Nodes::Node::Indexes
        class XconnectSummary; //type: L2Vpnv2::Nodes::Node::XconnectSummary
        class ProcFsm; //type: L2Vpnv2::Nodes::Node::ProcFsm
        class MstpPorts; //type: L2Vpnv2::Nodes::Node::MstpPorts
        class GenericInterfaceListDetails; //type: L2Vpnv2::Nodes::Node::GenericInterfaceListDetails
        class L2VpnResourceState; //type: L2Vpnv2::Nodes::Node::L2VpnResourceState
        class BridgeDomains; //type: L2Vpnv2::Nodes::Node::BridgeDomains
        class DiscoverySummary; //type: L2Vpnv2::Nodes::Node::DiscoverySummary
        class G8032; //type: L2Vpnv2::Nodes::Node::G8032
        class PseudowireClasses; //type: L2Vpnv2::Nodes::Node::PseudowireClasses
        class L2VpnCollaborators; //type: L2Vpnv2::Nodes::Node::L2VpnCollaborators
        class Mvrp; //type: L2Vpnv2::Nodes::Node::Mvrp
        class GenericInterfaces; //type: L2Vpnv2::Nodes::Node::GenericInterfaces
        class MstpVlans; //type: L2Vpnv2::Nodes::Node::MstpVlans
        class L2VpnPbbBsa; //type: L2Vpnv2::Nodes::Node::L2VpnPbbBsa
        class FlexibleXconnectServices; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices
        class XconnectBrief; //type: L2Vpnv2::Nodes::Node::XconnectBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains> bridge_domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeSummary> bridge_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Discoveries> discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::DiscoverySummary> discovery_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::G8032> g8032;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::GenericInterfaces> generic_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::GlobalSettings> global_settings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::IccpSm> iccp_sm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Indexes> indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::L2VpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::L2VpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::L2VpnResourceState> l2vpn_resource_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MainInterfaces> main_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpPorts> mstp_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::MstpVlans> mstp_vlans;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Mvrp> mvrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PreferredPaths> preferred_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::ProcFsm> proc_fsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Pwr> pwr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief> xconnect_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectGroups> xconnect_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectMp2Mps> xconnect_mp2mps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectSummary> xconnect_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::Xconnects> xconnects;
        
}; // L2Vpnv2::Nodes::Node


class L2Vpnv2::Nodes::Node::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomain; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_group_name; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class BridgeAccessVfiTable; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable
        class BridgeCoreVfiTable; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable
        class BridgeAcs; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAcs
        class BridgeAccessPws; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws
        class BridgeDomainInfo; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeDomainInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws> bridge_access_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable> bridge_access_vfi_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAcs> bridge_acs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable> bridge_core_vfi_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeDomainInfo> bridge_domain_info;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws : public ydk::Entity
{
    public:
        BridgeAccessPws();
        ~BridgeAccessPws();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeAccessPw; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw> > bridge_access_pw;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw : public ydk::Entity
{
    public:
        BridgeAccessPw();
        ~BridgeAccessPw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf is_access; //type: boolean
        class Pseudowire; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire
        class SecurityParameters; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac> > static_mac;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_source_address; //type: string
        ydk::YLeaf ipv6_local_source_address; //type: string
        ydk::YLeaf pseudo_wire_id; //type: uint64
        ydk::YLeaf is_pwr_type; //type: boolean
        ydk::YLeaf is_evpn_vpws_type; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf state; //type: L2vpnSegmentState
        ydk::YLeaf pseudo_wire_state; //type: L2vpnPwState
        ydk::YLeaf protocol; //type: L2vpnSignallingProto
        ydk::YLeaf pw_class_name; //type: string
        ydk::YLeaf tag_rewrite; //type: uint16
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf fe_ctype; //type: L2vpnPwFec
        ydk::YLeaf evpn_src_acid; //type: uint32
        ydk::YLeaf sequencing_type; //type: L2vpnPwSequence
        ydk::YLeaf resync_enabled; //type: boolean
        ydk::YLeaf resync_threshold; //type: uint32
        ydk::YLeaf local_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf remote_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf local_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf remote_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf imposed_vlan_id; //type: uint32
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf time_elapsed_creation; //type: string
        ydk::YLeaf last_time_status_changed; //type: string
        ydk::YLeaf time_elapsed_status_changed; //type: string
        ydk::YLeaf last_time_status_down; //type: string
        ydk::YLeaf time_elapsed_status_down; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf pseudo_wire_type_mismatched; //type: boolean
        ydk::YLeaf payload_bytes_mismatched; //type: boolean
        ydk::YLeaf bitrate_mismatched; //type: boolean
        ydk::YLeaf rtp_mismatched; //type: boolean
        ydk::YLeaf diff_ts_mismatched; //type: boolean
        ydk::YLeaf sig_pkts_mismatched; //type: boolean
        ydk::YLeaf cas_mismatched; //type: boolean
        ydk::YLeaf payload_type_mismatched; //type: boolean
        ydk::YLeaf freq_mismatched; //type: boolean
        ydk::YLeaf ssrc_mismatched; //type: boolean
        ydk::YLeaf mtu_mismatched; //type: boolean
        ydk::YLeaf illegal_control_word; //type: boolean
        ydk::YLeaf ad_remote_down; //type: boolean
        ydk::YLeaf not_supported_qinq; //type: boolean
        ydk::YLeaf local_label_failed; //type: boolean
        ydk::YLeaf remote_label_failed; //type: boolean
        ydk::YLeaf preferred_path_disable_fallback; //type: boolean
        ydk::YLeaf backup_pw; //type: boolean
        ydk::YLeaf primary_pw; //type: boolean
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf backup_force_active; //type: boolean
        ydk::YLeaf disable_never; //type: boolean
        ydk::YLeaf disable_delay; //type: uint8
        ydk::YLeaf primary_peer_id; //type: string
        ydk::YLeaf primary_pseudo_wire_id; //type: uint64
        ydk::YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        ydk::YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf transport_lsp_down; //type: boolean
        ydk::YLeaf mac_limit_oper_down; //type: boolean
        ydk::YLeaf pw_status_use; //type: boolean
        ydk::YLeaf auto_discovery; //type: boolean
        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf pwlsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertise_failed; //type: boolean
        ydk::YLeaf is_vfi; //type: boolean
        ydk::YLeaf is_multi_segment_pseudowire; //type: boolean
        ydk::YLeaf pw_redundancy_one_way; //type: boolean
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf pw_flow_label_type; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_type_cfg; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_code17_disabled; //type: boolean
        ydk::YLeaf is_flow_label_static; //type: boolean
        ydk::YLeaf is_partially_programmed; //type: boolean
        ydk::YLeaf pw_redundancy_initial_delay; //type: uint8
        ydk::YLeaf bridge_pw_type_mismatch; //type: boolean
        ydk::YLeaf required_bw; //type: uint32
        ydk::YLeaf admited_bw; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf table_policy_name; //type: string
        class PeerId; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics
        class P2MpPw; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw> p2mp_pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics> statistics;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo : public ydk::Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class Atom; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_pseudowire_headend; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf local_group_id; //type: uint32
        ydk::YLeaf remote_group_id; //type: uint32
        ydk::YLeaf local_cv_type; //type: uint8
        ydk::YLeaf local_c_ctype; //type: uint8
        ydk::YLeaf remote_cv_type; //type: uint8
        ydk::YLeaf remote_c_ctype; //type: uint8
        ydk::YLeaf local_veid; //type: uint32
        ydk::YLeaf remote_veid; //type: uint32
        ydk::YLeaf local_ceid; //type: uint32
        ydk::YLeaf remote_ceid; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf remote_source_address; //type: string
        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf remote_ldp_id; //type: string
        ydk::YLeaf saii; //type: string
        ydk::YLeaf taii; //type: string
        ydk::YLeaf is_sai_itype2; //type: boolean
        ydk::YLeaf local_saii_gbl_id; //type: uint32
        ydk::YLeaf local_saiiac_id; //type: uint32
        ydk::YLeaf is_tai_itype2; //type: boolean
        ydk::YLeaf local_taii_gbl_id; //type: uint32
        ydk::YLeaf local_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii_gbl_id; //type: uint32
        ydk::YLeaf rem_saiiac_id; //type: uint32
        ydk::YLeaf rem_taii_gbl_id; //type: uint32
        ydk::YLeaf rem_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii; //type: string
        ydk::YLeaf rem_taii; //type: string
        ydk::YLeaf lsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertisment_failed; //type: boolean
        class LocalAgi; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public ydk::Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3 : public ydk::Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_class_name; //type: string
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv6_source_address; //type: string
        ydk::YLeaf path_mtu_enabled; //type: boolean
        ydk::YLeaf path_mtu_max_value; //type: uint16
        ydk::YLeaf dont_fragment_bit; //type: boolean
        ydk::YLeaf tos_mode; //type: L2vpnTosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf local_session_id; //type: uint32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf local_cookie_size; //type: uint8
        ydk::YLeaf remote_cookie_size; //type: uint8
        ydk::YLeaf local_cookie_low_value; //type: uint32
        ydk::YLeaf remote_cookie_low_value; //type: uint32
        ydk::YLeaf local_cookie_high_value; //type: uint32
        ydk::YLeaf remote_cookie_high_value; //type: uint32
        ydk::YLeaf remote_circuit_status_up; //type: boolean
        ydk::YLeaf tunnel_state; //type: L2vpnL2TpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface : public ydk::Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters : public ydk::Entity
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

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

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

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw : public ydk::Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId : public ydk::Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnPeer
        ydk::YLeaf ipv4_peer_id; //type: string
        ydk::YLeaf ipv6_peer_id; //type: string
        ydk::YLeaf internal_label; //type: uint32

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy> srte_policy;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters> parameters;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters : public ydk::Entity
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

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters


class L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_12_ */

