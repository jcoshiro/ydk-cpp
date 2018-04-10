#ifndef _CISCO_IOS_XE_TCAM_OPER_
#define _CISCO_IOS_XE_TCAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_tcam_oper {

class TcamDetails : public ydk::Entity
{
    public:
        TcamDetails();
        ~TcamDetails();

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

        class TcamDetail; //type: TcamDetails::TcamDetail

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_tcam_oper::TcamDetails::TcamDetail> > tcam_detail;
        
}; // TcamDetails


class TcamDetails::TcamDetail : public ydk::Entity
{
    public:
        TcamDetail();
        ~TcamDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asic_no; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf hash_entries_max; //type: uint32
        ydk::YLeaf tcam_entries_max; //type: uint32
        ydk::YLeaf hash_entries_used; //type: uint32
        ydk::YLeaf tcam_entries_used; //type: uint32

}; // TcamDetails::TcamDetail


}
}

#endif /* _CISCO_IOS_XE_TCAM_OPER_ */
