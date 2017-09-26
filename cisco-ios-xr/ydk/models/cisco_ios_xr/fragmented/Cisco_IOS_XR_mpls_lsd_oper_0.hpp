#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_0_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

class MplsLsd : public ydk::Entity
{
    public:
        MplsLsd();
        ~MplsLsd();

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

        class Clients; //type: MplsLsd::Clients
        class LabelSummary; //type: MplsLsd::LabelSummary
        class Labels; //type: MplsLsd::Labels
        class FrrDatabase; //type: MplsLsd::FrrDatabase
        class Rewrite; //type: MplsLsd::Rewrite
        class RewriteSummary; //type: MplsLsd::RewriteSummary
        class Applications; //type: MplsLsd::Applications
        class SrlbInconsistency; //type: MplsLsd::SrlbInconsistency
        class LabelSummaryVrfs; //type: MplsLsd::LabelSummaryVrfs
        class LabelRange; //type: MplsLsd::LabelRange
        class RewriteSummaryVrfs; //type: MplsLsd::RewriteSummaryVrfs
        class Interfaces; //type: MplsLsd::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications> applications;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase> frr_database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelRange> label_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummary> label_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs> label_summary_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels> labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite> rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary> rewrite_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs> rewrite_summary_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::SrlbInconsistency> srlb_inconsistency;
        
}; // MplsLsd


class MplsLsd::Applications : public ydk::Entity
{
    public:
        Applications();
        ~Applications();

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

        class Application; //type: MplsLsd::Applications::Application

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application> > application;
        
}; // MplsLsd::Applications


class MplsLsd::Applications::Application : public ydk::Entity
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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_name_xr; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf app_reg_time; //type: uint64
        ydk::YLeaf app_disconnect_time; //type: uint64
        ydk::YLeaf app_flow_controlled; //type: int32
        ydk::YLeaf flow_ctrl_time; //type: uint64
        ydk::YLeaf flow_ctrl_clr_time; //type: uint64
        ydk::YLeaf go_act_ts; //type: uint64
        ydk::YLeaf application_state; //type: MgmtLsdAppState
        ydk::YLeaf recovery_time_remaining_seconds; //type: uint32
        ydk::YLeaf recovery_time_elapsed_seconds; //type: uint32
        ydk::YLeaf recovery_time_register_seconds; //type: uint32
        ydk::YLeaf node_id; //type: string
        class ApplicationStatistics; //type: MplsLsd::Applications::Application::ApplicationStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics> application_statistics;
        
}; // MplsLsd::Applications::Application


class MplsLsd::Applications::Application::ApplicationStatistics : public ydk::Entity
{
    public:
        ApplicationStatistics();
        ~ApplicationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_enable; //type: uint32
        ydk::YLeaf interface_enable_pending; //type: uint32
        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeafList label_context_count; //type: list of  uint32
        ydk::YLeafList label_context_pending_count; //type: list of  uint32
        class Connected; //type: MplsLsd::Applications::Application::ApplicationStatistics::Connected

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics::Connected> connected;
        
}; // MplsLsd::Applications::Application::ApplicationStatistics


class MplsLsd::Applications::Application::ApplicationStatistics::Connected : public ydk::Entity
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

        ydk::YLeaf rt_set_msg_count; //type: uint32
        ydk::YLeaf operation_msg_count; //type: uint32
        ydk::YLeaf oor_label_count; //type: uint32
        ydk::YLeaf error_msg_count; //type: uint32

}; // MplsLsd::Applications::Application::ApplicationStatistics::Connected


class MplsLsd::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        class Client; //type: MplsLsd::Clients::Client

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client> > client;
        
}; // MplsLsd::Clients


class MplsLsd::Clients::Client : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf client_index; //type: uint32
        ydk::YLeaf node_id; //type: string
        class ClientUnion; //type: MplsLsd::Clients::Client::ClientUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion> client_union;
        
}; // MplsLsd::Clients::Client


class MplsLsd::Clients::Client::ClientUnion : public ydk::Entity
{
    public:
        ClientUnion();
        ~ClientUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsd_client_type; //type: MgmtLsdClient
        class Application; //type: MplsLsd::Clients::Client::ClientUnion::Application
        class BcdlAgent; //type: MplsLsd::Clients::Client::ClientUnion::BcdlAgent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion::Application> application;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion::BcdlAgent> bcdl_agent;
        
}; // MplsLsd::Clients::Client::ClientUnion


class MplsLsd::Clients::Client::ClientUnion::Application : public ydk::Entity
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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf application_role_primary; //type: int32

}; // MplsLsd::Clients::Client::ClientUnion::Application


class MplsLsd::Clients::Client::ClientUnion::BcdlAgent : public ydk::Entity
{
    public:
        BcdlAgent();
        ~BcdlAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_conn_index; //type: int32
        ydk::YLeaf parent_client_conn_index; //type: int32

}; // MplsLsd::Clients::Client::ClientUnion::BcdlAgent


class MplsLsd::FrrDatabase : public ydk::Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

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

        class TunnelMidpoints; //type: MplsLsd::FrrDatabase::TunnelMidpoints
        class TunnelHeads; //type: MplsLsd::FrrDatabase::TunnelHeads
        class TunnelHeadSummary; //type: MplsLsd::FrrDatabase::TunnelHeadSummary
        class SummaryProtectedInterfaces; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces
        class TunnelSummary; //type: MplsLsd::FrrDatabase::TunnelSummary
        class TunnelMidpointSummary; //type: MplsLsd::FrrDatabase::TunnelMidpointSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::SummaryProtectedInterfaces> summary_protected_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeadSummary> tunnel_head_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads> tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpointSummary> tunnel_midpoint_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints> tunnel_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelSummary> tunnel_summary;
        
}; // MplsLsd::FrrDatabase


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces : public ydk::Entity
{
    public:
        SummaryProtectedInterfaces();
        ~SummaryProtectedInterfaces();

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

        class SummaryProtectedInterface; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface> > summary_protected_interface;
        
}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface : public ydk::Entity
{
    public:
        SummaryProtectedInterface();
        ~SummaryProtectedInterface();

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
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface


class MplsLsd::FrrDatabase::TunnelHeadSummary : public ydk::Entity
{
    public:
        TunnelHeadSummary();
        ~TunnelHeadSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeadSummary


class MplsLsd::FrrDatabase::TunnelHeads : public ydk::Entity
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

        class TunnelHead; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead> > tunnel_head;
        
}; // MplsLsd::FrrDatabase::TunnelHeads


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath> > out_path;
        
}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head : public ydk::Entity
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

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath


class MplsLsd::FrrDatabase::TunnelMidpointSummary : public ydk::Entity
{
    public:
        TunnelMidpointSummary();
        ~TunnelMidpointSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpointSummary


class MplsLsd::FrrDatabase::TunnelMidpoints : public ydk::Entity
{
    public:
        TunnelMidpoints();
        ~TunnelMidpoints();

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

        class TunnelMidpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint> > tunnel_midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint : public ydk::Entity
{
    public:
        TunnelMidpoint();
        ~TunnelMidpoint();

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

        ydk::YLeaf label; //type: int32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath> > out_path;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head : public ydk::Entity
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

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath


class MplsLsd::FrrDatabase::TunnelSummary : public ydk::Entity
{
    public:
        TunnelSummary();
        ~TunnelSummary();

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

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsd::FrrDatabase::TunnelSummary


class MplsLsd::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsLsd::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface> > interface;
        
}; // MplsLsd::Interfaces


class MplsLsd::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_state; //type: MgmtLsdIntfState
        class ApplicationOwner; //type: MplsLsd::Interfaces::Interface::ApplicationOwner

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface::ApplicationOwner> > application_owner;
        
}; // MplsLsd::Interfaces::Interface


class MplsLsd::Interfaces::Interface::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Interfaces::Interface::ApplicationOwner


class MplsLsd::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf min_dynamic_label_value; //type: uint32
        ydk::YLeaf max_dynamic_label_value; //type: uint32
        ydk::YLeaf min_static_label_value; //type: uint32
        ydk::YLeaf max_static_label_value; //type: uint32

}; // MplsLsd::LabelRange


class MplsLsd::LabelSummary : public ydk::Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

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

        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf total_labels; //type: uint32
        ydk::YLeaf rsi_connected; //type: int32
        class OwnerCount; //type: MplsLsd::LabelSummary::OwnerCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummary::OwnerCount> > owner_count;
        
}; // MplsLsd::LabelSummary


class MplsLsd::LabelSummary::OwnerCount : public ydk::Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

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

        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf number_of_labels; //type: uint32

}; // MplsLsd::LabelSummary::OwnerCount


class MplsLsd::LabelSummaryVrfs : public ydk::Entity
{
    public:
        LabelSummaryVrfs();
        ~LabelSummaryVrfs();

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

        class LabelSummaryVrf; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf> > label_summary_vrf;
        
}; // MplsLsd::LabelSummaryVrfs


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf : public ydk::Entity
{
    public:
        LabelSummaryVrf();
        ~LabelSummaryVrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf total_labels; //type: uint32
        ydk::YLeaf rsi_connected; //type: int32
        class OwnerCount; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount> > owner_count;
        
}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount : public ydk::Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf number_of_labels; //type: uint32

}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount


class MplsLsd::Labels : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Label; //type: MplsLsd::Labels::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label> > label;
        
}; // MplsLsd::Labels


class MplsLsd::Labels::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf label_id; //type: int32
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf rewrite_is_bound; //type: int32
        ydk::YLeaf rewrite_owners; //type: uint32
        ydk::YLeaf rs_iconnected; //type: int32
        ydk::YLeaf vrf_name; //type: string
        class LabelContext; //type: MplsLsd::Labels::Label::LabelContext
        class ApplicationOwner; //type: MplsLsd::Labels::Label::ApplicationOwner

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::ApplicationOwner> > application_owner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext> label_context;
        
}; // MplsLsd::Labels::Label


class MplsLsd::Labels::Label::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Labels::Label::ApplicationOwner


class MplsLsd::Labels::Label::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: MplsLsd::Labels::Label::LabelContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key> key;
        
}; // MplsLsd::Labels::Label::LabelContext


class MplsLsd::Labels::Label::LabelContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data
        class Tev4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Labels::Label::LabelContext::Key::PseudowireData
        class LabelBlockData; //type: MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData
        class IpSubData; //type: MplsLsd::Labels::Label::LabelContext::Key::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Labels::Label::LabelContext::Key::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Labels::Label::LabelContext::Key::TeBinding
        class LabelBlockSrlbData; //type: MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData> label_block_srlb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData> vrf_l3vpn_data;
        
}; // MplsLsd::Labels::Label::LabelContext::Key


class MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData : public ydk::Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData : public ydk::Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::EvpnData


class MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::IpSubData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData : public ydk::Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData : public ydk::Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData : public ydk::Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData : public ydk::Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrlbData


class MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data


class MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn : public ydk::Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn


class MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::PseudowireData


class MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6


class MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment


class MplsLsd::Labels::Label::LabelContext::Key::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsd::Labels::Label::LabelContext::Key::TeBinding


class MplsLsd::Labels::Label::LabelContext::Key::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsd::Labels::Label::LabelContext::Key::Tev4Data


class MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData : public ydk::Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData


class MplsLsd::Labels::Label::LabelContext::Key::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsd::Labels::Label::LabelContext::Key::TpData


class MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData : public ydk::Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData


class MplsLsd::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

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

        class RewritePws; //type: MplsLsd::Rewrite::RewritePws
        class RewriteIpv4S; //type: MplsLsd::Rewrite::RewriteIpv4S
        class RewriteTes; //type: MplsLsd::Rewrite::RewriteTes
        class RewriteLabels; //type: MplsLsd::Rewrite::RewriteLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S> rewrite_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels> rewrite_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws> rewrite_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes> rewrite_tes;
        
}; // MplsLsd::Rewrite


class MplsLsd::Rewrite::RewriteIpv4S : public ydk::Entity
{
    public:
        RewriteIpv4S();
        ~RewriteIpv4S();

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

        class RewriteIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4> > rewrite_ipv4;
        
}; // MplsLsd::Rewrite::RewriteIpv4S


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4 : public ydk::Entity
{
    public:
        RewriteIpv4();
        ~RewriteIpv4();

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

        ydk::YLeaf rsi_table_name; //type: string
        ydk::YLeaf rsi_table_id; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi> > associated_fpi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey> fpi_key;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois> > mois;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf> > v6_rpf;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi : public ydk::Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

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

        class Fpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

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

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

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

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

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

        class Fpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

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

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

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

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois : public ydk::Entity
{
    public:
        Mois();
        ~Mois();

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

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray> > moi_array;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource : public ydk::Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

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

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray : public ydk::Entity
{
    public:
        MoiArray();
        ~MoiArray();

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

        class Moi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi : public ydk::Entity
{
    public:
        Moi();
        ~Moi();

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

        ydk::YLeaf moi_type; //type: MgmtLsdMoi
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
{
    public:
        DmtcData();
        ~DmtcData();

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

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4 : public ydk::Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6 : public ydk::Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp : public ydk::Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf pseuodo_wire_connect_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf split_horizon_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf control_word; //type: int32
        ydk::YLeaf imposition; //type: int32
        ydk::YLeaf vctype; //type: uint8
        ydk::YLeaf pw_list_id; //type: uint16
        ydk::YLeaf pwhe_interface; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf l3_interface; //type: string
        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

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

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

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

        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

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

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        ydk::YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_local_label_str; //type: string
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint32
        ydk::YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf backup_ipv4_next_hop; //type: string
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf backup_local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_weight; //type: uint32
        ydk::YLeaf data_out_parent_interface; //type: string
        ydk::YLeaf tunnel_class; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

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

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_ : public ydk::Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

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

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

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

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public ydk::Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public ydk::Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

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

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

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

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public ydk::Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

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

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public ydk::Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public ydk::Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

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

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

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

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public ydk::Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

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

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

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

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

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

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public ydk::Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

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

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

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

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

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

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

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

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public ydk::Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

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

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public ydk::Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

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

        ydk::YLeafList label_data; //type: list of  uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf : public ydk::Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

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

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf

class MgmtLsdMoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_tev4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pw;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ip_sub;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pwhe;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pw_list;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv4_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_tp;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv6_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_te_head;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_dmtc_ext_intf;

};

class MgmtLsdAppState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_zombie;
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_recover;

};

class MgmtLsdApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_int;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_test;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_static;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_ldp;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_te;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_app_controller;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_vpn_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_l2vpn;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_spkr;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bfd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_pim;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_v2_lsd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_pim6;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_isis;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_ospf;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_cgn;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_dmtc;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_any;

};

class MgmtLsdTeBinding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2p_tun_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2p_grp_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2mp_tun_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2mp_grp_id;

};

class MgmtLsdAppRsrcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd_svr;

};

class MgmtLsdClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_client_type_app;
        static const ydk::Enum::YLeaf mgmt_lsd_client_type_ba;

};

class MgmtLsdFpi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_label;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_te;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_pw_list;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_te_v2;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_dmtc_ext_intf;

};

class MgmtLsdLblCtx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_vrf;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pw;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ip_sub;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4_p2mp;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_mldpv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pwhe;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tp;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_evpn;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_i_pmsi;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_s_pmsi;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_nh_set;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_pfx_seg;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk_srgb;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_te_binding;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_any;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk_srlb;

};

class MgmtLsdFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_partial;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_ready;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_complete;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_any;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_igp;

};

class MgmtLsdIntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_unknown;
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_up;
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_down;

};

class MgmtLsdLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_lsp_role_head;
        static const ydk::Enum::YLeaf mgmt_lsd_lsp_role_mid;

};

class MgmtLsdRwId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_lbl_ctx;
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_loc_lbl;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_0_ */

