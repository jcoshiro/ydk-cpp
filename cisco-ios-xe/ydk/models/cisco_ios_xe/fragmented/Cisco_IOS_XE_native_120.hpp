#ifndef _CISCO_IOS_XE_NATIVE_120_
#define _CISCO_IOS_XE_NATIVE_120_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_118.hpp"
#include "Cisco_IOS_XE_native_119.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256 : public ydk::Entity
{
    public:
        HmacSha256();
        ~HmacSha256();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AfInterface::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Eigrp::AfInterface::SummaryAddress


class Native::Router::Eigrp::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_interfaces; //type: empty
        class Interface; //type: Native::Router::Eigrp::Bfd::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::Bfd


class Native::Router::Eigrp::Bfd::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class AtmSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::Bfd::Interface


class Native::Router::Eigrp::Bfd::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Eigrp::Bfd::Interface::AtmSubinterface


class Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::Bfd::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Eigrp::Bfd::Interface::LispSubinterface


class Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Router::Eigrp::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::DefaultInformation::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::DefaultInformation


class Native::Router::Eigrp::DefaultInformation::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num; //type: uint16
        ydk::YLeaf sa_name; //type: string

}; // Native::Router::Eigrp::DefaultInformation::In


class Native::Router::Eigrp::DefaultInformation::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_out_num; //type: uint16
        ydk::YLeaf sa_out_name; //type: string

}; // Native::Router::Eigrp::DefaultInformation::Out


class Native::Router::Eigrp::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DmRdr; //type: Native::Router::Eigrp::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::DefaultMetric


class Native::Router::Eigrp::DefaultMetric::DmRdr : public ydk::Entity
{
    public:
        DmRdr();
        ~DmRdr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr; //type: uint32
        class DmRdr0; //type: Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::DefaultMetric::DmRdr


class Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0 : public ydk::Entity
{
    public:
        DmRdr0();
        ~DmRdr0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr0; //type: uint32
        ydk::YLeaf dm_rdr_pct; //type: uint8

}; // Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RadDis; //type: Native::Router::Eigrp::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::Eigrp_> eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::RadDis> > rad_dis;
        
}; // Native::Router::Eigrp::Distance


class Native::Router::Eigrp::Distance::RadDis : public ydk::Entity
{
    public:
        RadDis();
        ~RadDis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rad_dis; //type: uint8
        class Ipv4; //type: Native::Router::Eigrp::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::Distance::RadDis


class Native::Router::Eigrp::Distance::RadDis::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv40; //type: string

}; // Native::Router::Eigrp::Distance::RadDis::Ipv4


class Native::Router::Eigrp::Distance::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiRt; //type: Native::Router::Eigrp::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::Distance::Eigrp_


class Native::Router::Eigrp::Distance::Eigrp_::DiRt : public ydk::Entity
{
    public:
        DiRt();
        ~DiRt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf di_rt; //type: uint8
        ydk::YLeaf di_rt0; //type: uint8

}; // Native::Router::Eigrp::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EigFilt; //type: Native::Router::Eigrp::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::DistributeList


class Native::Router::Eigrp::DistributeList::EigFilt : public ydk::Entity
{
    public:
        EigFilt();
        ~EigFilt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eig_filt; //type: one of string, uint16
        class In; //type: Native::Router::Eigrp::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::DistributeList::EigFilt::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::DistributeList::EigFilt


class Native::Router::Eigrp::DistributeList::EigFilt::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::DistributeList::EigFilt::In


class Native::Router::Eigrp::DistributeList::EigFilt::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::DistributeList::EigFilt::Out


class Native::Router::Eigrp::DistributeList::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GwList; //type: Native::Router::Eigrp::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::DistributeList::Gateway


class Native::Router::Eigrp::DistributeList::Gateway::GwList : public ydk::Entity
{
    public:
        GwList();
        ~GwList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gw_list; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::Gateway::GwList


class Native::Router::Eigrp::DistributeList::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PlName; //type: Native::Router::Eigrp::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::DistributeList::Prefix


class Native::Router::Eigrp::DistributeList::Prefix::PlName : public ydk::Entity
{
    public:
        PlName();
        ~PlName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pl_name; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::Prefix::PlName


class Native::Router::Eigrp::DistributeList::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RmapName; //type: Native::Router::Eigrp::DistributeList::RouteMap::RmapName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::RouteMap::RmapName> > rmap_name;
        
}; // Native::Router::Eigrp::DistributeList::RouteMap


class Native::Router::Eigrp::DistributeList::RouteMap::RmapName : public ydk::Entity
{
    public:
        RmapName();
        ~RmapName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rmap_name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::RouteMap::RmapName


class Native::Router::Eigrp::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        class Stub; //type: Native::Router::Eigrp::Eigrp_::Stub

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Eigrp_::Stub> stub; // presence node
        
}; // Native::Router::Eigrp::Eigrp_


class Native::Router::Eigrp::Eigrp_::Stub : public ydk::Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connected; //type: empty
        ydk::YLeaf summary; //type: empty
        ydk::YLeaf redistributed; //type: empty
        ydk::YLeaf leak_map; //type: string
        ydk::YLeaf receive_only; //type: empty
        ydk::YLeaf static_; //type: empty

}; // Native::Router::Eigrp::Eigrp_::Stub


class Native::Router::Eigrp::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_hops; //type: uint8
        ydk::YLeaf weights; //type: uint8

}; // Native::Router::Eigrp::Metric


class Native::Router::Eigrp::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Eigrp::Neighbor::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::Neighbor


class Native::Router::Eigrp::Neighbor::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        class Interface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface> interface;
        
}; // Native::Router::Eigrp::Neighbor::Ipv4


class Native::Router::Eigrp::Neighbor::Ipv4::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class AtmSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface


class Native::Router::Eigrp::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf wild_card; //type: string

}; // Native::Router::Eigrp::Network


class Native::Router::Eigrp::OffsetList : public ydk::Entity
{
    public:
        OffsetList();
        ~OffsetList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrList; //type: Native::Router::Eigrp::OffsetList::NsrList
        class OlAcl; //type: Native::Router::Eigrp::OffsetList::OlAcl

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList::NsrList> > nsr_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList::OlAcl> > ol_acl;
        
}; // Native::Router::Eigrp::OffsetList


class Native::Router::Eigrp::OffsetList::NsrList : public ydk::Entity
{
    public:
        NsrList();
        ~NsrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_list; //type: uint16
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::OffsetList::NsrList


class Native::Router::Eigrp::OffsetList::OlAcl : public ydk::Entity
{
    public:
        OlAcl();
        ~OlAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ol_acl; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::OffsetList::OlAcl


class Native::Router::Eigrp::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf ospf; //type: uint16
        class Bgp; //type: Native::Router::Eigrp::Redistribute::Bgp
        class Connected; //type: Native::Router::Eigrp::Redistribute::Connected
        class Isis; //type: Native::Router::Eigrp::Redistribute::Isis
        class Lisp; //type: Native::Router::Eigrp::Redistribute::Lisp
        class Mobile; //type: Native::Router::Eigrp::Redistribute::Mobile
        class Odr; //type: Native::Router::Eigrp::Redistribute::Odr
        class Rip; //type: Native::Router::Eigrp::Redistribute::Rip
        class Static_; //type: Native::Router::Eigrp::Redistribute::Static_
        class Vrf; //type: Native::Router::Eigrp::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Odr> odr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Vrf> vrf;
        
}; // Native::Router::Eigrp::Redistribute


class Native::Router::Eigrp::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rdr_as; //type: one of uint32, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rd_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class Metric; //type: Native::Router::Eigrp::Redistribute::Bgp::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Bgp::Metric> metric;
        
}; // Native::Router::Eigrp::Redistribute::Bgp


class Native::Router::Eigrp::Redistribute::Bgp::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwith; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf reliability; //type: uint8
        ydk::YLeaf effective; //type: uint8
        ydk::YLeaf mtu; //type: uint16

}; // Native::Router::Eigrp::Redistribute::Bgp::Metric


class Native::Router::Eigrp::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Connected


class Native::Router::Eigrp::Redistribute::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_tag; //type: string
        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_1_2; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Isis


class Native::Router::Eigrp::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Lisp


class Native::Router::Eigrp::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Mobile


class Native::Router::Eigrp::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Odr


class Native::Router::Eigrp::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Rip


class Native::Router::Eigrp::Redistribute::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Static_


class Native::Router::Eigrp::Redistribute::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf global; //type: empty

}; // Native::Router::Eigrp::Redistribute::Vrf


class Native::Router::Eigrp::SummaryMetric : public ydk::Entity
{
    public:
        SummaryMetric();
        ~SummaryMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty
        class Ipv4; //type: Native::Router::Eigrp::SummaryMetric::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::SummaryMetric::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::SummaryMetric


class Native::Router::Eigrp::SummaryMetric::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Eigrp::SummaryMetric::Ipv4


class Native::Router::Eigrp::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveTime; //type: Native::Router::Eigrp::Timers::ActiveTime
        class GracefulRestart; //type: Native::Router::Eigrp::Timers::GracefulRestart
        class Nsf; //type: Native::Router::Eigrp::Timers::Nsf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::ActiveTime> active_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::Nsf> nsf;
        
}; // Native::Router::Eigrp::Timers


class Native::Router::Eigrp::Timers::ActiveTime : public ydk::Entity
{
    public:
        ActiveTime();
        ~ActiveTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atimer; //type: uint16
        ydk::YLeaf disabled; //type: empty

}; // Native::Router::Eigrp::Timers::ActiveTime


class Native::Router::Eigrp::Timers::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf purge_time; //type: empty

}; // Native::Router::Eigrp::Timers::GracefulRestart


class Native::Router::Eigrp::Timers::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf converge; //type: empty
        ydk::YLeaf signal; //type: empty

}; // Native::Router::Eigrp::Timers::Nsf


class Native::Router::Eigrp::TrafficShare : public ydk::Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf balanced; //type: empty
        class Min; //type: Native::Router::Eigrp::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::TrafficShare::Min> min;
        
}; // Native::Router::Eigrp::TrafficShare


class Native::Router::Eigrp::TrafficShare::Min : public ydk::Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::Eigrp::TrafficShare::Min


class Native::Router::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::Lisp::Default_
        class Service; //type: Native::Router::Lisp::Service
        class Encapsulation; //type: Native::Router::Lisp::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::LocatorSet
        class Locator; //type: Native::Router::Lisp::Locator
        class LocatorScope; //type: Native::Router::Lisp::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Alt
        class ControlPacket; //type: Native::Router::Lisp::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Decapsulation
        class Etr; //type: Native::Router::Lisp::Etr
        class Ipv4; //type: Native::Router::Lisp::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::MapRequest
        class MapServer; //type: Native::Router::Lisp::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::EidTable
        class Security; //type: Native::Router::Lisp::Security
        class Site; //type: Native::Router::Lisp::Site
        class Syslog; //type: Native::Router::Lisp::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Syslog> syslog;
        
}; // Native::Router::Lisp


class Native::Router::Lisp::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::Lisp::Default_::Service
        class Encapsulation; //type: Native::Router::Lisp::Default_::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::Default_::LocatorSet
        class Locator; //type: Native::Router::Lisp::Default_::Locator
        class LocatorScope; //type: Native::Router::Lisp::Default_::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::Default_::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Default_::Alt
        class ControlPacket; //type: Native::Router::Lisp::Default_::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Default_::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Default_::Decapsulation
        class Etr; //type: Native::Router::Lisp::Default_::Etr
        class Ipv4; //type: Native::Router::Lisp::Default_::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::Default_::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::Default_::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::Default_::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::Default_::MapRequest
        class MapServer; //type: Native::Router::Lisp::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::Default_::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::Default_::EidTable
        class Security; //type: Native::Router::Lisp::Default_::Security
        class Site; //type: Native::Router::Lisp::Default_::Site
        class Syslog; //type: Native::Router::Lisp::Default_::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Syslog> syslog;
        
}; // Native::Router::Lisp::Default_


class Native::Router::Lisp::Default_::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Lisp::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::Lisp::Default_::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::Lisp::Default_::Service


class Native::Router::Lisp::Default_::Service::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::Lisp::Default_::Service::Ipv4


class Native::Router::Lisp::Default_::Service::Ipv4::Default__ : public ydk::Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::Service::Ipv4::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Itr


class Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapRegister; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration


class Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Distance


class Native::Router::Lisp::Default_::Service::Ipv4::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids> away_eids;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCache


class Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids


class Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent


class Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr


class Native::Router::Lisp::Default_::Service::Ipv4::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::RouteExport


class Native::Router::Lisp::Default_::Service::Ipv4::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::UsePetr


class Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority


class Native::Router::Lisp::Default_::Service::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv6::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::Lisp::Default_::Service::Ipv6


class Native::Router::Lisp::Default_::Service::Ipv6::Default__ : public ydk::Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key

class Native::Router::Lisp::Default_::Service::Ipv4::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv6::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv6::Default__::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_120_ */
