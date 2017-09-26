#ifndef _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_
#define _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_optics_oper {

class OpticsOper : public ydk::Entity
{
    public:
        OpticsOper();
        ~OpticsOper();

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

        class OpticsPorts; //type: OpticsOper::OpticsPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts> optics_ports;
        
}; // OpticsOper


class OpticsOper::OpticsPorts : public ydk::Entity
{
    public:
        OpticsPorts();
        ~OpticsPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OpticsPort; //type: OpticsOper::OpticsPorts::OpticsPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort> > optics_port;
        
}; // OpticsOper::OpticsPorts


class OpticsOper::OpticsPorts::OpticsPort : public ydk::Entity
{
    public:
        OpticsPort();
        ~OpticsPort();

        bool has_data() const override;
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
        class OpticsDwdmCarrrierChannelMap; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap
        class OpticsInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo
        class OpticsLanes; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes
        class OpticsDbInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo> optics_db_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap> optics_dwdm_carrrier_channel_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo> optics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes> optics_lanes;
        
}; // OpticsOper::OpticsPorts::OpticsPort


class OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo : public ydk::Entity
{
    public:
        OpticsDbInfo();
        ~OpticsDbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_admin_state; //type: OpticsTas
        ydk::YLeaf controller_state; //type: OpticsControllerState
        class NetworkSrlgInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo> network_srlg_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo : public ydk::Entity
{
    public:
        NetworkSrlgInfo();
        ~NetworkSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkSrlgArray; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray> > network_srlg_array;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray : public ydk::Entity
{
    public:
        NetworkSrlgArray();
        ~NetworkSrlgArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_number; //type: uint32
        ydk::YLeafList network_srlg; //type: list of  uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsDbInfo::NetworkSrlgInfo::NetworkSrlgArray


class OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap : public ydk::Entity
{
    public:
        OpticsDwdmCarrrierChannelMap();
        ~OpticsDwdmCarrrierChannelMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dwdm_carrier_band; //type: OpticsWaveBand
        ydk::YLeaf dwdm_carrier_min; //type: uint32
        ydk::YLeaf dwdm_carrier_max; //type: uint32
        class DwdmCarrierMapInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo> > dwdm_carrier_map_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap


class OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo : public ydk::Entity
{
    public:
        DwdmCarrierMapInfo();
        ~DwdmCarrierMapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itu_chan_num; //type: uint32
        ydk::YLeaf g694_chan_num; //type: int32
        ydk::YLeaf frequency; //type: string
        ydk::YLeaf wavelength; //type: string

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsDwdmCarrrierChannelMap::DwdmCarrierMapInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo : public ydk::Entity
{
    public:
        OpticsInfo();
        ~OpticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_admin_state; //type: OpticsTas
        ydk::YLeaf optics_present; //type: boolean
        ydk::YLeaf optics_type; //type: Optics
        ydk::YLeaf derived_optics_type; //type: string
        ydk::YLeaf optics_module; //type: string
        ydk::YLeaf dwdm_carrier_band; //type: OpticsWaveBand
        ydk::YLeaf dwdm_carrier_channel; //type: string
        ydk::YLeaf dwdm_carrier_frequency; //type: string
        ydk::YLeaf dwdm_carrier_wavelength; //type: string
        ydk::YLeaf grey_wavelength; //type: uint32
        ydk::YLeaf rx_low_threshold; //type: int32
        ydk::YLeaf rx_high_threshold; //type: int32
        ydk::YLeaf lbc_high_threshold; //type: int32
        ydk::YLeaf tx_low_threshold; //type: int32
        ydk::YLeaf tx_high_threshold; //type: int32
        ydk::YLeaf lbc_th_high_default; //type: int32
        ydk::YLeaf lbc_th_low_default; //type: int32
        ydk::YLeaf temp_low_threshold; //type: int32
        ydk::YLeaf temp_high_threshold; //type: int32
        ydk::YLeaf volt_low_threshold; //type: int32
        ydk::YLeaf volt_high_threshold; //type: int32
        ydk::YLeaf cd; //type: int32
        ydk::YLeaf cd_min; //type: int32
        ydk::YLeaf cd_max; //type: int32
        ydk::YLeaf cd_low_threshold; //type: int32
        ydk::YLeaf cd_high_threshold; //type: int32
        ydk::YLeaf osnr_low_threshold; //type: string
        ydk::YLeaf dgd_high_threshold; //type: string
        ydk::YLeaf polarization_mode_dispersion; //type: string
        ydk::YLeaf second_order_polarization_mode_dispersion; //type: string
        ydk::YLeaf optical_signal_to_noise_ratio; //type: string
        ydk::YLeaf polarization_dependent_loss; //type: string
        ydk::YLeaf polarization_change_rate; //type: string
        ydk::YLeaf differential_group_delay; //type: string
        ydk::YLeaf phase_noise; //type: string
        ydk::YLeaf pm_enable; //type: uint32
        ydk::YLeaf laser_state; //type: OpticsLaserState
        ydk::YLeaf led_state; //type: OpticsLedState
        ydk::YLeaf controller_state; //type: OpticsControllerState
        ydk::YLeaf form_factor; //type: OpticsFormFactor
        ydk::YLeaf phy_type; //type: OpticsPhy
        ydk::YLeaf cfg_tx_power; //type: int32
        ydk::YLeaf cfg_tx_power_configurable; //type: boolean
        ydk::YLeaf temperature; //type: int32
        ydk::YLeaf voltage; //type: int32
        ydk::YLeaf display_volt_temp; //type: boolean
        ydk::YLeaf cd_configurable; //type: boolean
        ydk::YLeaf optics_fec; //type: OpticsFec
        ydk::YLeaf port_type; //type: OpticsPort
        ydk::YLeaf port_status; //type: OpticsPortStatus
        ydk::YLeaf rx_voa_attenuation; //type: int32
        ydk::YLeaf tx_voa_attenuation; //type: int32
        ydk::YLeaf ampli_gain; //type: int32
        ydk::YLeaf ampli_tilt; //type: int32
        ydk::YLeaf rx_power_th_configurable; //type: boolean
        ydk::YLeaf tx_power_th_configurable; //type: boolean
        ydk::YLeaf rx_voa_attenuation_config_val; //type: int32
        ydk::YLeaf tx_voa_attenuation_config_val; //type: int32
        ydk::YLeaf ampli_control_mode_config_val; //type: OpticsAmplifierControlMode
        ydk::YLeaf ampli_gain_range_config_val; //type: OpticsAmplifierGainRange
        ydk::YLeaf ampli_gain_config_val; //type: int32
        ydk::YLeaf ampli_tilt_config_val; //type: int32
        ydk::YLeaf ampli_channel_power_config_val; //type: int32
        ydk::YLeaf channel_power_max_delta_config_val; //type: int32
        ydk::YLeaf ampli_gain_thr_deg_low_config_val; //type: int32
        ydk::YLeaf ampli_gain_thr_deg_high_config_val; //type: int32
        ydk::YLeaf osri_config_val; //type: boolean
        ydk::YLeaf safety_control_mode_config_val; //type: OpticsAmplifierSafetyControlMode
        ydk::YLeaf total_rx_power; //type: int32
        ydk::YLeaf total_tx_power; //type: int32
        ydk::YLeaf is_bo_configured; //type: boolean
        ydk::YLeaf is_ext_param_valid; //type: boolean
        ydk::YLeaf alarm_detected; //type: boolean
        ydk::YLeaf rx_low_warning_threshold; //type: int32
        ydk::YLeaf rx_high_warning_threshold; //type: int32
        ydk::YLeaf tx_low_warning_threshold; //type: int32
        ydk::YLeaf tx_high_warning_threshold; //type: int32
        ydk::YLeaf lbc_th_high_warning_default; //type: int32
        ydk::YLeaf lbc_th_low_warning_default; //type: int32
        ydk::YLeaf temp_low_warning_threshold; //type: int32
        ydk::YLeaf temp_high_warning_threshold; //type: int32
        ydk::YLeaf volt_low_warning_threshold; //type: int32
        ydk::YLeaf volt_high_warning_threshold; //type: int32
        ydk::YLeaf ampli_gain_range; //type: OpticsAmplifierGainRange
        ydk::YLeaf safety_control_mode; //type: OpticsAmplifierSafetyControlMode
        ydk::YLeaf osri; //type: boolean
        ydk::YLeaf description; //type: string
        ydk::YLeaf is_optics_type_string_valid; //type: boolean
        ydk::YLeaf optics_type_str; //type: string
        class NetworkSrlgInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo
        class OpticsAlarmInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo
        class OtsAlarmInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo
        class TransceiverInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo
        class ExtParamVal; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal
        class ExtParamThresholdVal; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal
        class SpectrumInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo
        class LaneData; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal> ext_param_threshold_val;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal> ext_param_val;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData> > lane_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo> network_srlg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo> optics_alarm_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo> ots_alarm_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo> spectrum_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo> transceiver_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal : public ydk::Entity
{
    public:
        ExtParamThresholdVal();
        ~ExtParamThresholdVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snr_alarm_high_threshold; //type: int32
        ydk::YLeaf snr_alarm_low_threshold; //type: int32
        ydk::YLeaf snr_warn_high_threshold; //type: int32
        ydk::YLeaf snr_warn_low_threshold; //type: int32
        ydk::YLeaf isi_correction_alarm_high_threshold; //type: int32
        ydk::YLeaf isi_correction_alarm_low_threshold; //type: int32
        ydk::YLeaf isi_correction_warn_high_threshold; //type: int32
        ydk::YLeaf isi_correction_warn_low_threshold; //type: int32
        ydk::YLeaf pam_rate_alarm_high_threshold; //type: int32
        ydk::YLeaf pam_rate_alarm_low_threshold; //type: int32
        ydk::YLeaf pam_rate_warn_high_threshold; //type: int32
        ydk::YLeaf pam_rate_warn_low_threshold; //type: int32
        ydk::YLeaf pre_fec_ber_alarm_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_alarm_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_warn_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_warn_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_alarm_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_alarm_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_warn_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_warn_low_threshold; //type: int64
        ydk::YLeaf tec_current_alarm_high_threshold; //type: int32
        ydk::YLeaf tec_current_alarm_low_threshold; //type: int32
        ydk::YLeaf tec_current_warn_high_threshold; //type: int32
        ydk::YLeaf tec_current_warn_low_threshold; //type: int32
        ydk::YLeaf laser_diff_frequency_alarm_high_threshold; //type: int32
        ydk::YLeaf laser_diff_frequency_alarm_low_threshold; //type: int32
        ydk::YLeaf laser_diff_frequency_warn_high_threshold; //type: int32
        ydk::YLeaf laser_diff_frequency_warn_low_threshold; //type: int32
        ydk::YLeaf laser_diff_temperature_alarm_high_threshold; //type: int32
        ydk::YLeaf laser_diff_temperature_alarm_low_threshold; //type: int32
        ydk::YLeaf laser_diff_temperature_warn_high_threshold; //type: int32
        ydk::YLeaf laser_diff_temperature_warn_low_threshold; //type: int32
        ydk::YLeaf pre_fec_ber_latched_min_alarm_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_min_alarm_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_min_warn_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_min_warn_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_max_alarm_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_max_alarm_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_max_warn_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_latched_max_warn_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_accumulated_alarm_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_accumulated_alarm_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_accumulated_warn_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_accumulated_warn_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_instantaneous_alarm_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_instantaneous_alarm_low_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_instantaneous_warn_high_threshold; //type: int64
        ydk::YLeaf pre_fec_ber_instantaneous_warn_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_min_alarm_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_min_alarm_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_min_warn_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_min_warn_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_max_alarm_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_max_alarm_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_max_warn_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_latched_max_warn_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_accumulated_alarm_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_accumulated_alarm_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_accumulated_warn_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_accumulated_warn_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_instantaneous_alarm_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_instantaneous_alarm_low_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_instantaneous_warn_high_threshold; //type: int64
        ydk::YLeaf uncorrected_ber_instantaneous_warn_low_threshold; //type: int64

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamThresholdVal


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal : public ydk::Entity
{
    public:
        ExtParamVal();
        ~ExtParamVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snr_lane1; //type: int32
        ydk::YLeaf snr_lane2; //type: int32
        ydk::YLeaf isi_correction_lane1; //type: int32
        ydk::YLeaf isi_correction_lane2; //type: int32
        ydk::YLeaf pam_rate_lane1; //type: int32
        ydk::YLeaf pam_rate_lane2; //type: int32
        ydk::YLeaf pre_fec_ber; //type: int64
        ydk::YLeaf uncorrected_ber; //type: int64
        ydk::YLeaf tec_current_lane1; //type: int32
        ydk::YLeaf tec_current_lane2; //type: int32
        ydk::YLeaf laser_diff_frequency_lane1; //type: int32
        ydk::YLeaf laser_diff_frequency_lane2; //type: int32
        ydk::YLeaf laser_diff_temperature_lane1; //type: int32
        ydk::YLeaf laser_diff_temperature_lane2; //type: int32
        ydk::YLeaf pre_fec_ber_latched_min; //type: int64
        ydk::YLeaf pre_fec_ber_latched_max; //type: int64
        ydk::YLeaf pre_fec_ber_accumulated; //type: int64
        ydk::YLeaf pre_fec_ber_instantaneous; //type: int64
        ydk::YLeaf uncorrected_ber_latched_min; //type: int64
        ydk::YLeaf uncorrected_ber_latched_max; //type: int64
        ydk::YLeaf uncorrected_ber_accumulated; //type: int64
        ydk::YLeaf uncorrected_ber_instantaneous; //type: int64

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::ExtParamVal


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData : public ydk::Entity
{
    public:
        LaneData();
        ~LaneData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lane_index; //type: uint32
        ydk::YLeaf laser_bias_current_percent; //type: uint32
        ydk::YLeaf laser_bias_current_milli_amps; //type: uint32
        ydk::YLeaf transmit_power; //type: int32
        ydk::YLeaf receive_power; //type: int32
        ydk::YLeaf receive_signal_power; //type: int32
        ydk::YLeaf transmit_signal_power; //type: int32
        ydk::YLeaf output_frequency; //type: int32
        ydk::YLeaf frequency_offset; //type: int32
        class LaneAlarmInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo> lane_alarm_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo : public ydk::Entity
{
    public:
        LaneAlarmInfo();
        ~LaneAlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HighRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower
        class LowRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower
        class HighTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower
        class LowTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower
        class HighLbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc> high_lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower> high_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower> high_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower> low_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower> low_tx_power;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc : public ydk::Entity
{
    public:
        HighLbc();
        ~HighLbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighLbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower : public ydk::Entity
{
    public:
        HighRxPower();
        ~HighRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower : public ydk::Entity
{
    public:
        HighTxPower();
        ~HighTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::HighTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower : public ydk::Entity
{
    public:
        LowRxPower();
        ~LowRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower : public ydk::Entity
{
    public:
        LowTxPower();
        ~LowTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::LaneData::LaneAlarmInfo::LowTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo : public ydk::Entity
{
    public:
        NetworkSrlgInfo();
        ~NetworkSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkSrlgArray; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray> > network_srlg_array;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray : public ydk::Entity
{
    public:
        NetworkSrlgArray();
        ~NetworkSrlgArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_number; //type: uint32
        ydk::YLeafList network_srlg; //type: list of  uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::NetworkSrlgInfo::NetworkSrlgArray


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo : public ydk::Entity
{
    public:
        OpticsAlarmInfo();
        ~OpticsAlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HighRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower
        class LowRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower
        class HighTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower
        class LowTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower
        class HighLbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc
        class HighRx1Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power
        class HighRx2Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power
        class HighRx3Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power
        class HighRx4Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power
        class LowRx1Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power
        class LowRx2Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power
        class LowRx3Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power
        class LowRx4Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power
        class HighTx1Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power
        class HighTx2Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power
        class HighTx3Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power
        class HighTx4Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power
        class LowTx1Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power
        class LowTx2Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power
        class LowTx3Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power
        class LowTx4Power; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power
        class HighTx1Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc
        class HighTx2Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc
        class HighTx3Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc
        class HighTx4Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc
        class LowTx1Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc
        class LowTx2Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc
        class LowTx3Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc
        class LowTx4Lbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc
        class RxLos; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos
        class TxLos; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos
        class RxLol; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol
        class TxLol; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol
        class TxFault; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault
        class Hidgd; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd
        class Oorcd; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd
        class Osnr; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr
        class Wvlool; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool
        class Mea; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea
        class ImpRemoval; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval
        class RxLoc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc
        class AmpGainDegLow; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow
        class AmpGainDegHigh; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh
        class TxpwrMismatch; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh> amp_gain_deg_high;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow> amp_gain_deg_low;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd> hidgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc> high_lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power> high_rx1_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power> high_rx2_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power> high_rx3_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power> high_rx4_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower> high_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power> high_tx1_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc> high_tx1lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power> high_tx2_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc> high_tx2lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power> high_tx3_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc> high_tx3lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power> high_tx4_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc> high_tx4lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower> high_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval> imp_removal;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power> low_rx1_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power> low_rx2_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power> low_rx3_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power> low_rx4_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower> low_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power> low_tx1_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc> low_tx1lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power> low_tx2_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc> low_tx2lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power> low_tx3_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc> low_tx3lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power> low_tx4_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc> low_tx4lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower> low_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea> mea;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd> oorcd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc> rx_loc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol> rx_lol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos> rx_los;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault> tx_fault;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol> tx_lol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos> tx_los;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch> txpwr_mismatch;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool> wvlool;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh : public ydk::Entity
{
    public:
        AmpGainDegHigh();
        ~AmpGainDegHigh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegHigh


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow : public ydk::Entity
{
    public:
        AmpGainDegLow();
        ~AmpGainDegLow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::AmpGainDegLow


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd : public ydk::Entity
{
    public:
        Hidgd();
        ~Hidgd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Hidgd


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc : public ydk::Entity
{
    public:
        HighLbc();
        ~HighLbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighLbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power : public ydk::Entity
{
    public:
        HighRx1Power();
        ~HighRx1Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx1Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power : public ydk::Entity
{
    public:
        HighRx2Power();
        ~HighRx2Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx2Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power : public ydk::Entity
{
    public:
        HighRx3Power();
        ~HighRx3Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx3Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power : public ydk::Entity
{
    public:
        HighRx4Power();
        ~HighRx4Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRx4Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower : public ydk::Entity
{
    public:
        HighRxPower();
        ~HighRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc : public ydk::Entity
{
    public:
        HighTx1Lbc();
        ~HighTx1Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power : public ydk::Entity
{
    public:
        HighTx1Power();
        ~HighTx1Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx1Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc : public ydk::Entity
{
    public:
        HighTx2Lbc();
        ~HighTx2Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power : public ydk::Entity
{
    public:
        HighTx2Power();
        ~HighTx2Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx2Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc : public ydk::Entity
{
    public:
        HighTx3Lbc();
        ~HighTx3Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power : public ydk::Entity
{
    public:
        HighTx3Power();
        ~HighTx3Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx3Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc : public ydk::Entity
{
    public:
        HighTx4Lbc();
        ~HighTx4Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power : public ydk::Entity
{
    public:
        HighTx4Power();
        ~HighTx4Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTx4Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower : public ydk::Entity
{
    public:
        HighTxPower();
        ~HighTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::HighTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval : public ydk::Entity
{
    public:
        ImpRemoval();
        ~ImpRemoval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::ImpRemoval


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power : public ydk::Entity
{
    public:
        LowRx1Power();
        ~LowRx1Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx1Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power : public ydk::Entity
{
    public:
        LowRx2Power();
        ~LowRx2Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx2Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power : public ydk::Entity
{
    public:
        LowRx3Power();
        ~LowRx3Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx3Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power : public ydk::Entity
{
    public:
        LowRx4Power();
        ~LowRx4Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRx4Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower : public ydk::Entity
{
    public:
        LowRxPower();
        ~LowRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc : public ydk::Entity
{
    public:
        LowTx1Lbc();
        ~LowTx1Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power : public ydk::Entity
{
    public:
        LowTx1Power();
        ~LowTx1Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx1Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc : public ydk::Entity
{
    public:
        LowTx2Lbc();
        ~LowTx2Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power : public ydk::Entity
{
    public:
        LowTx2Power();
        ~LowTx2Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx2Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc : public ydk::Entity
{
    public:
        LowTx3Lbc();
        ~LowTx3Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power : public ydk::Entity
{
    public:
        LowTx3Power();
        ~LowTx3Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx3Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc : public ydk::Entity
{
    public:
        LowTx4Lbc();
        ~LowTx4Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Lbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power : public ydk::Entity
{
    public:
        LowTx4Power();
        ~LowTx4Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTx4Power


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower : public ydk::Entity
{
    public:
        LowTxPower();
        ~LowTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::LowTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea : public ydk::Entity
{
    public:
        Mea();
        ~Mea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Mea


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd : public ydk::Entity
{
    public:
        Oorcd();
        ~Oorcd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Oorcd


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr : public ydk::Entity
{
    public:
        Osnr();
        ~Osnr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Osnr


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc : public ydk::Entity
{
    public:
        RxLoc();
        ~RxLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLoc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol : public ydk::Entity
{
    public:
        RxLol();
        ~RxLol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLol


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos : public ydk::Entity
{
    public:
        RxLos();
        ~RxLos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::RxLos


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault : public ydk::Entity
{
    public:
        TxFault();
        ~TxFault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxFault


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol : public ydk::Entity
{
    public:
        TxLol();
        ~TxLol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLol


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos : public ydk::Entity
{
    public:
        TxLos();
        ~TxLos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxLos


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch : public ydk::Entity
{
    public:
        TxpwrMismatch();
        ~TxpwrMismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::TxpwrMismatch


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool : public ydk::Entity
{
    public:
        Wvlool();
        ~Wvlool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OpticsAlarmInfo::Wvlool


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo : public ydk::Entity
{
    public:
        OtsAlarmInfo();
        ~OtsAlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LowTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower
        class LowRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower
        class RxLosP; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP
        class RxLoc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc
        class AmpGainDegLow; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow
        class AmpGainDegHigh; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh
        class AutoLaserShut; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut
        class AutoPowerRed; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed
        class AutoAmpliCtrlDisabled; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled
        class AutoAmpliCtrlConfigMismatch; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch
        class SwitchToProtect; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect
        class AutoAmpliCtrlRunning; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh> amp_gain_deg_high;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow> amp_gain_deg_low;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch> auto_ampli_ctrl_config_mismatch;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled> auto_ampli_ctrl_disabled;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning> auto_ampli_ctrl_running;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut> auto_laser_shut;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed> auto_power_red;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower> low_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower> low_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc> rx_loc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP> rx_los_p;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect> switch_to_protect;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh : public ydk::Entity
{
    public:
        AmpGainDegHigh();
        ~AmpGainDegHigh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegHigh


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow : public ydk::Entity
{
    public:
        AmpGainDegLow();
        ~AmpGainDegLow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AmpGainDegLow


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch : public ydk::Entity
{
    public:
        AutoAmpliCtrlConfigMismatch();
        ~AutoAmpliCtrlConfigMismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlConfigMismatch


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled : public ydk::Entity
{
    public:
        AutoAmpliCtrlDisabled();
        ~AutoAmpliCtrlDisabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlDisabled


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning : public ydk::Entity
{
    public:
        AutoAmpliCtrlRunning();
        ~AutoAmpliCtrlRunning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoAmpliCtrlRunning


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut : public ydk::Entity
{
    public:
        AutoLaserShut();
        ~AutoLaserShut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoLaserShut


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed : public ydk::Entity
{
    public:
        AutoPowerRed();
        ~AutoPowerRed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::AutoPowerRed


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower : public ydk::Entity
{
    public:
        LowRxPower();
        ~LowRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower : public ydk::Entity
{
    public:
        LowTxPower();
        ~LowTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::LowTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc : public ydk::Entity
{
    public:
        RxLoc();
        ~RxLoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLoc


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP : public ydk::Entity
{
    public:
        RxLosP();
        ~RxLosP();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::RxLosP


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect : public ydk::Entity
{
    public:
        SwitchToProtect();
        ~SwitchToProtect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::OtsAlarmInfo::SwitchToProtect


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo : public ydk::Entity
{
    public:
        SpectrumInfo();
        ~SpectrumInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_spectrum_slice_count; //type: uint32
        ydk::YLeaf spectrum_slice_spacing; //type: uint32
        ydk::YLeaf first_slice_wavelength; //type: string
        class SpectrumSlicePowerInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo> > spectrum_slice_power_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo : public ydk::Entity
{
    public:
        SpectrumSlicePowerInfo();
        ~SpectrumSlicePowerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_num; //type: uint32
        ydk::YLeaf lower_frequency; //type: uint64
        ydk::YLeaf upper_frequency; //type: uint64
        ydk::YLeaf rx_power; //type: string
        ydk::YLeaf tx_power; //type: string
        ydk::YLeaf rx_psd; //type: string
        ydk::YLeaf tx_psd; //type: string

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::SpectrumInfo::SpectrumSlicePowerInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo : public ydk::Entity
{
    public:
        TransceiverInfo();
        ~TransceiverInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor_info; //type: string
        ydk::YLeaf adapter_vendor_info; //type: string
        ydk::YLeaf date; //type: string
        ydk::YLeaf optics_vendor_rev; //type: string
        ydk::YLeaf optics_serial_no; //type: string
        ydk::YLeaf optics_vendor_part; //type: string
        ydk::YLeaf optics_type; //type: string
        ydk::YLeaf vendor_name; //type: string
        ydk::YLeaf oui_no; //type: string
        ydk::YLeaf optics_pid; //type: string
        ydk::YLeaf optics_vid; //type: string
        ydk::YLeaf connector_type; //type: FiberConnector
        ydk::YLeaf otn_application_code; //type: OtnApplicationCode
        ydk::YLeaf sonet_application_code; //type: SonetApplicationCode
        ydk::YLeaf ethernet_compliance_code; //type: EthernetPmd
        ydk::YLeaf internal_temperature; //type: int32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsInfo::TransceiverInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes : public ydk::Entity
{
    public:
        OpticsLanes();
        ~OpticsLanes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsLane; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane> > optics_lane;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane : public ydk::Entity
{
    public:
        OpticsLane();
        ~OpticsLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf lane_index; //type: uint32
        ydk::YLeaf laser_bias_current_percent; //type: uint32
        ydk::YLeaf laser_bias_current_milli_amps; //type: uint32
        ydk::YLeaf transmit_power; //type: int32
        ydk::YLeaf receive_power; //type: int32
        ydk::YLeaf receive_signal_power; //type: int32
        ydk::YLeaf transmit_signal_power; //type: int32
        ydk::YLeaf output_frequency; //type: int32
        ydk::YLeaf frequency_offset; //type: int32
        class LaneAlarmInfo; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo> lane_alarm_info;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo : public ydk::Entity
{
    public:
        LaneAlarmInfo();
        ~LaneAlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HighRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower
        class LowRxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower
        class HighTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower
        class LowTxPower; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower
        class HighLbc; //type: OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc> high_lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower> high_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower> high_tx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower> low_rx_power;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_optics_oper::OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower> low_tx_power;
        
}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc : public ydk::Entity
{
    public:
        HighLbc();
        ~HighLbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighLbc


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower : public ydk::Entity
{
    public:
        HighRxPower();
        ~HighRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower : public ydk::Entity
{
    public:
        HighTxPower();
        ~HighTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::HighTxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower : public ydk::Entity
{
    public:
        LowRxPower();
        ~LowRxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowRxPower


class OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower : public ydk::Entity
{
    public:
        LowTxPower();
        ~LowTxPower();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf counter; //type: uint32

}; // OpticsOper::OpticsPorts::OpticsPort::OpticsLanes::OpticsLane::LaneAlarmInfo::LowTxPower

class OpticsAmplifierControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

};

class OpticsAmplifierSafetyControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_amplifier_safety_mode_invalid;
        static const ydk::Enum::YLeaf optics_amplifier_safety_mode_auto;
        static const ydk::Enum::YLeaf optics_amplifier_safety_mode_disabled;

};

class OpticsFormFactor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf cpak;
        static const ydk::Enum::YLeaf cxp;
        static const ydk::Enum::YLeaf sfp_plus;
        static const ydk::Enum::YLeaf qsfp;
        static const ydk::Enum::YLeaf qsfp_plus;
        static const ydk::Enum::YLeaf qsfp28;
        static const ydk::Enum::YLeaf sfp;
        static const ydk::Enum::YLeaf cfp;
        static const ydk::Enum::YLeaf cfp2;
        static const ydk::Enum::YLeaf cfp4;
        static const ydk::Enum::YLeaf xfp;
        static const ydk::Enum::YLeaf x2;
        static const ydk::Enum::YLeaf non_pluggable;
        static const ydk::Enum::YLeaf other;

};

class Optics : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_unknown;
        static const ydk::Enum::YLeaf optics_grey;
        static const ydk::Enum::YLeaf optics_dwdm;
        static const ydk::Enum::YLeaf optics_cwdm;

};

class FiberConnector : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_connect_or_not_set;
        static const ydk::Enum::YLeaf optics_sc_connect_or;
        static const ydk::Enum::YLeaf optics_lc_connect_or;
        static const ydk::Enum::YLeaf optics_mpo_connect_or;
        static const ydk::Enum::YLeaf optics_undefined_connect_or;

};

class OpticsPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf com;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf osc;
        static const ydk::Enum::YLeaf com_check;
        static const ydk::Enum::YLeaf work;
        static const ydk::Enum::YLeaf prot;

};

class OpticsControllerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_state_up;
        static const ydk::Enum::YLeaf optics_state_down;
        static const ydk::Enum::YLeaf optics_state_admin_down;

};

class EthernetPmd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_eth_not_set;
        static const ydk::Enum::YLeaf optics_eth_10gbase_lrm;
        static const ydk::Enum::YLeaf optics_eth_10gbase_lr;
        static const ydk::Enum::YLeaf optics_eth_10gbase_zr;
        static const ydk::Enum::YLeaf optics_eth_10gbase_er;
        static const ydk::Enum::YLeaf optics_eth_10gbase_sr;
        static const ydk::Enum::YLeaf optics_eth_10gbase;
        static const ydk::Enum::YLeaf optics_eth_40gbase_cr4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_sr4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_lr4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_er4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_psm4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_csr4;
        static const ydk::Enum::YLeaf optics_eth_40gbase_sr_bd;
        static const ydk::Enum::YLeaf optics_eth_40g_aoc;
        static const ydk::Enum::YLeaf optics_eth_4x10gbase_lr;
        static const ydk::Enum::YLeaf optics_eth_4x10gbase_sr;
        static const ydk::Enum::YLeaf optics_eth_100g_aoc;
        static const ydk::Enum::YLeaf optics_eth_100g_acc;
        static const ydk::Enum::YLeaf optics_eth_100gbase_sr10;
        static const ydk::Enum::YLeaf optics_eth_100gbase_sr4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_lr4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_er4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_cwdm4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_clr4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_psm4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_cr4;
        static const ydk::Enum::YLeaf optics_eth_100gbase_al;
        static const ydk::Enum::YLeaf optics_eth_100gbase_pl;
        static const ydk::Enum::YLeaf optics_eth_undefined;

};

class OpticsFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fec_none;
        static const ydk::Enum::YLeaf fec_hg15;
        static const ydk::Enum::YLeaf fec_hg25;
        static const ydk::Enum::YLeaf fec_hg15_de;
        static const ydk::Enum::YLeaf fec_hg25_de;
        static const ydk::Enum::YLeaf fec_enabled;

};

class OtnApplicationCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_not_set;
        static const ydk::Enum::YLeaf optics_p1l1_2d1;
        static const ydk::Enum::YLeaf optics_p1s1_2d2;
        static const ydk::Enum::YLeaf optics_p1l1_2d2;
        static const ydk::Enum::YLeaf optics_undefined;

};

class OpticsPhy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf long_reach_four_lanes;
        static const ydk::Enum::YLeaf short_reach_ten_lanes;
        static const ydk::Enum::YLeaf short_reach_one_lane;
        static const ydk::Enum::YLeaf long_reach_one_lane;
        static const ydk::Enum::YLeaf short_reach_four_lanes;
        static const ydk::Enum::YLeaf copper_four_lanes;
        static const ydk::Enum::YLeaf active_optical_cable;
        static const ydk::Enum::YLeaf fourty_gig_e_long_reach_four_lanes;
        static const ydk::Enum::YLeaf fourty_gig_e_short_reach_four_lanes;
        static const ydk::Enum::YLeaf cwdm_four_lanes;
        static const ydk::Enum::YLeaf extended_reach_four_lanes;
        static const ydk::Enum::YLeaf psm_four_lanes;
        static const ydk::Enum::YLeaf active_copper_cable;
        static const ydk::Enum::YLeaf fourty_gig_e_extended_reach_four_lanes;
        static const ydk::Enum::YLeaf four_x_ten_gig_e_short_reach_one_lane;
        static const ydk::Enum::YLeaf fourty_gig_epsm_four_lanes;
        static const ydk::Enum::YLeaf fourty_gig_e_copper_four_lanes;
        static const ydk::Enum::YLeaf long_reach_mm_one_lane;
        static const ydk::Enum::YLeaf copper_short_reach;
        static const ydk::Enum::YLeaf short_reach_srbd;
        static const ydk::Enum::YLeaf copper_one_lane;
        static const ydk::Enum::YLeaf four_x_ten_gig_e_long_reach_one_lane;
        static const ydk::Enum::YLeaf fourty_gig_eaoc_four_lanes;
        static const ydk::Enum::YLeaf extended_one_lane;
        static const ydk::Enum::YLeaf zr_one_lane;
        static const ydk::Enum::YLeaf dwdm_one_lane;
        static const ydk::Enum::YLeaf sx_one_lane;
        static const ydk::Enum::YLeaf lx_one_lane;
        static const ydk::Enum::YLeaf ex_one_lane;
        static const ydk::Enum::YLeaf zx_one_lane;
        static const ydk::Enum::YLeaf ba_set_one_lane;
        static const ydk::Enum::YLeaf aoc_one_lane;
        static const ydk::Enum::YLeaf active_copper_one_lane;
        static const ydk::Enum::YLeaf fourty_gig_eacu_four_lanes;
        static const ydk::Enum::YLeaf four_x_ten_gig_eacu_one_lanes;
        static const ydk::Enum::YLeaf four_x_ten_gig_ecu_one_lanes;
        static const ydk::Enum::YLeaf four_x_ten_gig_eaoc_one_lanes;
        static const ydk::Enum::YLeaf twenty_five_gig_short_reach_one_lane;
        static const ydk::Enum::YLeaf twenty_five_gig_long_reach_one_lane;
        static const ydk::Enum::YLeaf twenty_five_gig_extended_reach_one_lane;
        static const ydk::Enum::YLeaf twenty_five_gig_copper_one_lane;
        static const ydk::Enum::YLeaf twenty_five_gig_active_optical_one_lane;
        static const ydk::Enum::YLeaf hundred_gig_edwdm_two;
        static const ydk::Enum::YLeaf fourty_gig_plr4_four_lanes;
        static const ydk::Enum::YLeaf fourty_gig_esr4_four_lanes;
        static const ydk::Enum::YLeaf smsr_four_lanes;
        static const ydk::Enum::YLeaf cazadero_rqsa;
        static const ydk::Enum::YLeaf trunk_port_cfp2;
        static const ydk::Enum::YLeaf short_reach1_lane;
        static const ydk::Enum::YLeaf inmd_reach1lane;
        static const ydk::Enum::YLeaf long_reach1_lane;
        static const ydk::Enum::YLeaf twenty_five_gig_ecu_one_lanes;
        static const ydk::Enum::YLeaf hundred_gig_e;
        static const ydk::Enum::YLeaf ten_gig_bx;
        static const ydk::Enum::YLeaf one_geige;

};

class OpticsPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class OpticsTas : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tas_ui_oos;
        static const ydk::Enum::YLeaf tas_ui_main;
        static const ydk::Enum::YLeaf tas_ui_is;
        static const ydk::Enum::YLeaf tas_ui_ains;

};

class OpticsLaserState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf apr;

};

class SonetApplicationCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_sonet_not_set;
        static const ydk::Enum::YLeaf optics_vsr2000_3r2;
        static const ydk::Enum::YLeaf optics_vsr2000_3r3;
        static const ydk::Enum::YLeaf optics_vsr2000_3r5;
        static const ydk::Enum::YLeaf optics_sonet_undefined;

};

class OpticsAmplifierGainRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf optics_amplifier_gain_range_invalid;
        static const ydk::Enum::YLeaf optics_amplifier_gain_range_normal;
        static const ydk::Enum::YLeaf optics_amplifier_gain_range_ext_end_ed;

};

class OpticsWaveBand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_band;
        static const ydk::Enum::YLeaf l_band;
        static const ydk::Enum::YLeaf c_band_odd;
        static const ydk::Enum::YLeaf c_band_even;
        static const ydk::Enum::YLeaf invalid_band;

};

class OpticsLedState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf green_on;
        static const ydk::Enum::YLeaf green_flashing;
        static const ydk::Enum::YLeaf yellow_on;
        static const ydk::Enum::YLeaf yellow_flashing;
        static const ydk::Enum::YLeaf red_on;
        static const ydk::Enum::YLeaf red_flashing;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OPTICS_OPER_ */

