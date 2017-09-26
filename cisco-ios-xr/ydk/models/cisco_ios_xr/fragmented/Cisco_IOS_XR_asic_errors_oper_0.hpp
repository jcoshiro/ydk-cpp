#ifndef _CISCO_IOS_XR_ASIC_ERRORS_OPER_0_
#define _CISCO_IOS_XR_ASIC_ERRORS_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {

class AsicErrors : public ydk::Entity
{
    public:
        AsicErrors();
        ~AsicErrors();

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

        class Nodes; //type: AsicErrors::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes> nodes;
        
}; // AsicErrors


class AsicErrors::Nodes : public ydk::Entity
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

        class Node; //type: AsicErrors::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node> > node;
        
}; // AsicErrors::Nodes


class AsicErrors::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        class AsicInformation; //type: AsicErrors::Nodes::Node::AsicInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation> > asic_information;
        
}; // AsicErrors::Nodes::Node


class AsicErrors::Nodes::Node::AsicInformation : public ydk::Entity
{
    public:
        AsicInformation();
        ~AsicInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic; //type: string
        class AllInstances; //type: AsicErrors::Nodes::Node::AsicInformation::AllInstances
        class Instances; //type: AsicErrors::Nodes::Node::AsicInformation::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances> all_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances> instances;
        
}; // AsicErrors::Nodes::Node::AsicInformation


class AsicErrors::Nodes::Node::AsicInformation::AllInstances : public ydk::Entity
{
    public:
        AllInstances();
        ~AllInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllErrorPath; //type: AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath> all_error_path;
        
}; // AsicErrors::Nodes::Node::AsicInformation::AllInstances


class AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath : public ydk::Entity
{
    public:
        AllErrorPath();
        ~AllErrorPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary> summary;
        
}; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath


class AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary : public ydk::Entity
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

        ydk::YLeaf legacy_client; //type: boolean
        ydk::YLeaf cih_client; //type: boolean
        class SumData; //type: AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData> > sum_data;
        
}; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary


class AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData : public ydk::Entity
{
    public:
        SumData();
        ~SumData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nodes; //type: uint32
        ydk::YLeaf crc_err_count; //type: uint32
        ydk::YLeaf sbe_err_count; //type: uint32
        ydk::YLeaf mbe_err_count; //type: uint32
        ydk::YLeaf par_err_count; //type: uint32
        ydk::YLeaf gen_err_count; //type: uint32
        ydk::YLeaf reset_err_count; //type: uint32
        ydk::YLeafList err_count; //type: list of  uint32
        ydk::YLeafList pcie_err_count; //type: list of  uint32
        ydk::YLeafList node_key; //type: list of  uint32

}; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData


class AsicErrors::Nodes::Node::AsicInformation::Instances : public ydk::Entity
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

        class Instance; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance> > instance;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance : public ydk::Entity
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

        ydk::YLeaf asic_instance; //type: int32
        class ErrorPath; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath> error_path;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath : public ydk::Entity
{
    public:
        ErrorPath();
        ~ErrorPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultipleBitSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors
        class AsicErrorGenericSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft
        class CrcHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors
        class AsicErrorSbeSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft
        class HardwareSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors
        class AsicErrorCrcSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft
        class AsicErrorParitySoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft
        class IoSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors
        class ResetSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors
        class BarrierHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors
        class UcodeSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors
        class AsicErrorResetHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard
        class SingleBitHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors
        class IndirectHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors
        class OutofResourceSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft
        class CrcSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors
        class TimeOutHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors
        class BarrierSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors
        class AsicErrorMbeSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft
        class BackPressureHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors
        class SingleBitSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors
        class IndirectSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors
        class GenericHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors
        class LinkHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors
        class ConfigurationHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors
        class InstanceSummary; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary
        class UnexpectedHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors
        class TimeOutSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors
        class AsicErrorGenericHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard
        class ParityHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors
        class DescriptorHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors
        class InterfaceHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors
        class AsicErrorSbeHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard
        class AsicErrorCrcHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard
        class AsicErrorParityHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard
        class AsicErrorResetSoft; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft
        class BackPressureSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors
        class GenericSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors
        class LinkSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors
        class ConfigurationSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors
        class MultipleBitHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors
        class UnexpectedSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors
        class OutofResourceHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard
        class HardwareHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors
        class ParitySoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors
        class DescriptorSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors
        class InterfaceSoftErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors
        class IoHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors
        class ResetHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors
        class UcodeHardErrors; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors
        class AsicErrorMbeHard; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard> asic_error_crc_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft> asic_error_crc_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard> asic_error_generic_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft> asic_error_generic_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard> asic_error_mbe_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft> asic_error_mbe_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard> asic_error_parity_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft> asic_error_parity_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard> asic_error_reset_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft> asic_error_reset_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard> asic_error_sbe_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft> asic_error_sbe_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors> back_pressure_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors> back_pressure_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors> barrier_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors> barrier_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors> configuration_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors> configuration_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors> crc_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors> crc_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors> descriptor_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors> descriptor_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors> generic_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors> generic_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors> hardware_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors> hardware_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors> indirect_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors> indirect_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary> instance_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors> interface_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors> interface_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors> io_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors> io_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors> link_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors> link_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors> multiple_bit_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors> multiple_bit_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard> outof_resource_hard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft> outof_resource_soft;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors> parity_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors> parity_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors> reset_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors> reset_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors> single_bit_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors> single_bit_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors> time_out_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors> time_out_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors> ucode_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors> ucode_soft_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors> unexpected_hard_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors> unexpected_soft_errors;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard : public ydk::Entity
{
    public:
        AsicErrorCrcHard();
        ~AsicErrorCrcHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft : public ydk::Entity
{
    public:
        AsicErrorCrcSoft();
        ~AsicErrorCrcSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard : public ydk::Entity
{
    public:
        AsicErrorGenericHard();
        ~AsicErrorGenericHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft : public ydk::Entity
{
    public:
        AsicErrorGenericSoft();
        ~AsicErrorGenericSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard : public ydk::Entity
{
    public:
        AsicErrorMbeHard();
        ~AsicErrorMbeHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft : public ydk::Entity
{
    public:
        AsicErrorMbeSoft();
        ~AsicErrorMbeSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard : public ydk::Entity
{
    public:
        AsicErrorParityHard();
        ~AsicErrorParityHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft : public ydk::Entity
{
    public:
        AsicErrorParitySoft();
        ~AsicErrorParitySoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard : public ydk::Entity
{
    public:
        AsicErrorResetHard();
        ~AsicErrorResetHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft : public ydk::Entity
{
    public:
        AsicErrorResetSoft();
        ~AsicErrorResetSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard : public ydk::Entity
{
    public:
        AsicErrorSbeHard();
        ~AsicErrorSbeHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft : public ydk::Entity
{
    public:
        AsicErrorSbeSoft();
        ~AsicErrorSbeSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors : public ydk::Entity
{
    public:
        BackPressureHardErrors();
        ~BackPressureHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors : public ydk::Entity
{
    public:
        BackPressureSoftErrors();
        ~BackPressureSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors : public ydk::Entity
{
    public:
        BarrierHardErrors();
        ~BarrierHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors : public ydk::Entity
{
    public:
        BarrierSoftErrors();
        ~BarrierSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors : public ydk::Entity
{
    public:
        ConfigurationHardErrors();
        ~ConfigurationHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors : public ydk::Entity
{
    public:
        ConfigurationSoftErrors();
        ~ConfigurationSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors : public ydk::Entity
{
    public:
        CrcHardErrors();
        ~CrcHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors : public ydk::Entity
{
    public:
        CrcSoftErrors();
        ~CrcSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors : public ydk::Entity
{
    public:
        DescriptorHardErrors();
        ~DescriptorHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors : public ydk::Entity
{
    public:
        DescriptorSoftErrors();
        ~DescriptorSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors : public ydk::Entity
{
    public:
        GenericHardErrors();
        ~GenericHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors : public ydk::Entity
{
    public:
        GenericSoftErrors();
        ~GenericSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors : public ydk::Entity
{
    public:
        HardwareHardErrors();
        ~HardwareHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors : public ydk::Entity
{
    public:
        HardwareSoftErrors();
        ~HardwareSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors : public ydk::Entity
{
    public:
        IndirectHardErrors();
        ~IndirectHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors : public ydk::Entity
{
    public:
        IndirectSoftErrors();
        ~IndirectSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary : public ydk::Entity
{
    public:
        InstanceSummary();
        ~InstanceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf legacy_client; //type: boolean
        ydk::YLeaf cih_client; //type: boolean
        class SumData; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData> > sum_data;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData : public ydk::Entity
{
    public:
        SumData();
        ~SumData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nodes; //type: uint32
        ydk::YLeaf crc_err_count; //type: uint32
        ydk::YLeaf sbe_err_count; //type: uint32
        ydk::YLeaf mbe_err_count; //type: uint32
        ydk::YLeaf par_err_count; //type: uint32
        ydk::YLeaf gen_err_count; //type: uint32
        ydk::YLeaf reset_err_count; //type: uint32
        ydk::YLeafList err_count; //type: list of  uint32
        ydk::YLeafList pcie_err_count; //type: list of  uint32
        ydk::YLeafList node_key; //type: list of  uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors : public ydk::Entity
{
    public:
        InterfaceHardErrors();
        ~InterfaceHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors : public ydk::Entity
{
    public:
        InterfaceSoftErrors();
        ~InterfaceSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors : public ydk::Entity
{
    public:
        IoHardErrors();
        ~IoHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors : public ydk::Entity
{
    public:
        IoSoftErrors();
        ~IoSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors : public ydk::Entity
{
    public:
        LinkHardErrors();
        ~LinkHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors : public ydk::Entity
{
    public:
        LinkSoftErrors();
        ~LinkSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

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
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors : public ydk::Entity
{
    public:
        MultipleBitHardErrors();
        ~MultipleBitHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors


}
}

#endif /* _CISCO_IOS_XR_ASIC_ERRORS_OPER_0_ */

