#ifndef _CISCO_IOS_XE_NATIVE_104_
#define _CISCO_IOS_XE_NATIVE_104_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::FilterList


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::HaMode::Sso


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of string, uint32
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::LocalAs


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::LogNeighborChanges : public ydk::Entity
{
    public:
        LogNeighborChanges();
        ~LogNeighborChanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::LogNeighborChanges


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Password


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute : public ydk::Entity
{
    public:
        PathAttribute();
        ~PathAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discard; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard : public ydk::Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw : public ydk::Entity
{
    public:
        TreatAsWithdraw();
        ~TreatAsWithdraw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PeerGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PrefixList


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendLabel : public ydk::Entity
{
    public:
        SendLabel();
        ~SendLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_label_explicit; //type: SendLabelExplicit
        class SendLabelExplicit;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendLabel


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Timers : public ydk::Entity
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

        ydk::YLeaf keepalive_interval; //type: uint16
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Timers


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate : public ydk::Entity
{
    public:
        TranslateUpdate();
        ~TranslateUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_> ipv4;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_ : public ydk::Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_::Multicast> multicast; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_::Multicast : public ydk::Entity
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

        ydk::YLeaf unicast; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TranslateUpdate::Ipv4_::Multicast


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection_mode; //type: ConnectionMode
        ydk::YLeaf multi_session; //type: empty
        class PathMtuDiscovery; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionMode;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::TtlSecurity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf backdoor; //type: empty
        ydk::YLeaf mask; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Network


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf
        class Rip; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Rip
        class Static_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application> application; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application : public ydk::Entity
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

        class Name; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application::Name> > name;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application::Name : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Application::Name


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of string, uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Connected


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Dvmrp : public ydk::Entity
{
    public:
        Dvmrp();
        ~Dvmrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Dvmrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_no; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Eigrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::IsisArea
        class Default_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::Default_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::IsisArea : public ydk::Entity
{
    public:
        IsisArea();
        ~IsisArea();

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
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp : public ydk::Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsoIgrpArea; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpArea
        class Default_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpArea> > iso_igrp_area;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::Default_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpArea : public ydk::Entity
{
    public:
        IsoIgrpArea();
        ~IsoIgrpArea();

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
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Lisp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Mobile


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Odr


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Vrf_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_
        class NonVrf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf> non_vrf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_> > vrf;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf : public ydk::Entity
{
    public:
        NonVrf();
        ~NonVrf();

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
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_ : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Ospf::Vrf_::Match


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

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
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf name; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Rip


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

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
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Clns


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Static_::Ip


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context> context;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ContextWord; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context::ContextWord

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context::ContextWord> > context_word;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp::Context::ContextWord


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::TableMap : public ydk::Entity
{
    public:
        TableMap();
        ~TableMap();

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
        ydk::YLeaf filter; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::TableMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpIpv6AfType
        class Vrf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf> > vrf;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf : public ydk::Entity
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
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        ydk::YLeaf auto_summary; //type: boolean
        class AggregateAddress; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::AggregateAddress
        class Import; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DefaultInformation
        class Distance; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor
        class Network; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Network
        class Redistribute; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Redistribute
        class TableMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::TableMap
        class Snmp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::AggregateAddress> aggregate_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance> distance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf advertise_map; //type: string
        ydk::YLeaf as_set; //type: empty
        ydk::YLeaf attribute_map; //type: string
        ydk::YLeaf as_override; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf summary_only; //type: empty
        ydk::YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::AggregateAddress


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf always_compare_med; //type: empty
        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf cluster_id; //type: one of string, uint32
        ydk::YLeaf deterministic_med; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf enforce_first_as; //type: empty
        ydk::YLeaf enhanced_error; //type: empty
        ydk::YLeaf fast_external_fallover; //type: boolean
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf maxas_limit; //type: uint16
        ydk::YLeaf maxcommunity_limit; //type: uint16
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        ydk::YLeaf update_delay; //type: uint16
        class Asnotation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Asnotation
        class NopeerupDelay; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::NopeerupDelay
        class Recursion; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Recursion
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths
        class Bestpath; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath
        class ClientToClient; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ClientToClient
        class Confederation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation
        class ConsistencyChecker; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker
        class Dampening; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening
        class Default_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Default_
        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::GracefulRestart
        class HaMode; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode
        class InjectMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::InjectMap
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup
        class Nexthop; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop
        class Regexp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Regexp
        class Transport; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Asnotation> asnotation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ClientToClient> client_to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation> confederation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker> consistency_checker;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode> ha_mode;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::InjectMap> > inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::NopeerupDelay> nopeerup_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Regexp> regexp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install; //type: empty
        ydk::YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select : public ydk::Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
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

        ydk::YLeaf best_external; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Asnotation : public ydk::Entity
{
    public:
        Asnotation();
        ~Asnotation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Asnotation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath : public ydk::Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf compare_routerid; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::CostCommunity
        class IgpMetric; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::IgpMetric
        class Med; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::CostCommunity> cost_community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med> med;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::CostCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::IgpMetric : public ydk::Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med : public ydk::Entity
{
    public:
        Med();
        ~Med();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty
        class Confed; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med::Confed

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med::Confed> confed; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med::Confed : public ydk::Entity
{
    public:
        Confed();
        ~Confed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Bestpath::Med::Confed


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ClientToClient : public ydk::Entity
{
    public:
        ClientToClient();
        ~ClientToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reflection; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ClientToClient


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation : public ydk::Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint32
        class Peers; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation::Peers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation::Peers> peers;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation::Peers : public ydk::Entity
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

        ydk::YLeafList peers_as; //type: list of  uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Confederation::Peers


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker : public ydk::Entity
{
    public:
        ConsistencyChecker();
        ~ConsistencyChecker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoRepair; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::AutoRepair
        class ErrorMessage; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::ErrorMessage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::AutoRepair> auto_repair; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::ErrorMessage> error_message; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::AutoRepair


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::ErrorMessage : public ydk::Entity
{
    public:
        ErrorMessage();
        ~ErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::ConsistencyChecker::ErrorMessage


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening::Dampen : public ydk::Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_time; //type: uint8
        ydk::YLeaf reuse_time; //type: uint16
        ydk::YLeaf suppress_time; //type: uint16
        ydk::YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Dampening::Dampen


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_unicast; //type: boolean
        ydk::YLeaf ipv6_nexthop; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf route_target; //type: RouteTarget
        class RouteTarget;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Default_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf extended; //type: empty
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stalepath_time; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::GracefulRestart


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sso; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefer; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::HaMode::Sso


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::InjectMap : public ydk::Entity
{
    public:
        InjectMap();
        ~InjectMap();

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
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::InjectMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf enable; //type: boolean

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::NopeerupDelay : public ydk::Entity
{
    public:
        NopeerupDelay();
        ~NopeerupDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cold_boot; //type: uint16
        ydk::YLeaf nsf_switchover; //type: uint16
        ydk::YLeaf post_boot; //type: uint16
        ydk::YLeaf user_initiated; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::NopeerupDelay


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Recursion : public ydk::Entity
{
    public:
        Recursion();
        ~Recursion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Recursion


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Regexp : public ydk::Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deterministic; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Regexp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::RouteMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_mtu_discovery; //type: boolean

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Transport


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup : public ydk::Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Split; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup::Split

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup::Split : public ydk::Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_override; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DefaultInformation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::AdmDistance

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::AdmDistance> > adm_distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::Bgp_> bgp;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::AdmDistance : public ydk::Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf wildbits; //type: string
        ydk::YLeaf acl; //type: one of string, uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::AdmDistance


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extern_as; //type: uint16
        ydk::YLeaf internal_as; //type: uint16
        ydk::YLeaf local; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Distance::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint16
        class In; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::In
        class Out; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::Out> out; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

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

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::In


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

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

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::DistributeList::Out


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import::Path

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import::Path> path;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Import::Path


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths : public ydk::Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eibgp; //type: uint16
        class MaxPath; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::ExternalRtfilter
        class Ibgp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::Ibgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::MaxPath> max_path;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::ExternalRtfilter : public ydk::Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unequal_cost; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::Ibgp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::MaxPath : public ydk::Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::MaximumPaths::MaxPath


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf remote_as; //type: one of string, uint32
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf cluster_id; //type: one of string, uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf disable_connected_check; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_self; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf remove_private_as; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf soo; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf version; //type: uint16
        ydk::YLeaf weight; //type: uint16
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PeerGroup
        class LocalAs; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::LocalAs
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise
        class AdvertiseMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap
        class Aigp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp
        class Announce; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Announce
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AllowasIn
        class AsOverride; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AsOverride
        class Capability; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::DefaultOriginate
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::DistributeList
        class EbgpMultihop; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::FallOver
        class FilterList; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Inherit
        class LogNeighborChanges; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::MaximumPrefix
        class Password; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Password
        class PrefixList; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PrefixList
        class PathAttribute; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PathAttribute
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SendCommunity
        class SendLabel; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SendLabel
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Timers
        class TranslateUpdate; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::TranslateUpdate
        class Transport; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::UpdateSource
        class HaMode; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::HaMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap> advertise_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp> aigp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Announce> announce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AsOverride> as_override; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::DefaultOriginate> default_originate; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::FallOver> fall_over;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::FilterList> > filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::HaMode> ha_mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PathAttribute> path_attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PeerGroup> peer_group; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::RouteMap> > route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SendLabel> send_label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::TranslateUpdate> translate_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::UpdateSource> update_source;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf receive; //type: empty
        class Send; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_external; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath : public ydk::Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
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

        ydk::YLeaf mpath; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap : public ydk::Entity
{
    public:
        AdvertiseMap();
        ~AdvertiseMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap::Name> > name;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap::Name : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf non_exist_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp : public ydk::Entity
{
    public:
        Aigp();
        ~Aigp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf med; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CcRange; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange> > cc_range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange : public ydk::Entity
{
    public:
        CcRange();
        ~CcRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        class Poi; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::Aigp::Send::CostCommunity::CcRange

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::SendLabel::SendLabelExplicit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor::Transport::ConnectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::Default_::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute::Isis::IsisArea::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Bgp_::Default_::RouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filter;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_104_ */

