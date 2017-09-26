#ifndef _ENTITY_STATE_MIB_
#define _ENTITY_STATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ENTITY_STATE_MIB {

class ENTITYSTATEMIB : public ydk::Entity
{
    public:
        ENTITYSTATEMIB();
        ~ENTITYSTATEMIB();

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

        class Entstatetable; //type: ENTITYSTATEMIB::Entstatetable

        std::shared_ptr<cisco_ios_xe::ENTITY_STATE_MIB::ENTITYSTATEMIB::Entstatetable> entstatetable;
        
}; // ENTITYSTATEMIB


class ENTITYSTATEMIB::Entstatetable : public ydk::Entity
{
    public:
        Entstatetable();
        ~Entstatetable();

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

        class Entstateentry; //type: ENTITYSTATEMIB::Entstatetable::Entstateentry

        std::vector<std::shared_ptr<cisco_ios_xe::ENTITY_STATE_MIB::ENTITYSTATEMIB::Entstatetable::Entstateentry> > entstateentry;
        
}; // ENTITYSTATEMIB::Entstatetable


class ENTITYSTATEMIB::Entstatetable::Entstateentry : public ydk::Entity
{
    public:
        Entstateentry();
        ~Entstateentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entstatelastchanged; //type: string
        ydk::YLeaf entstateadmin; //type: EntityAdminState
        ydk::YLeaf entstateoper; //type: EntityOperState
        ydk::YLeaf entstateusage; //type: EntityUsageState
        ydk::YLeaf entstatealarm; //type: EntityAlarmStatus
        ydk::YLeaf entstatestandby; //type: EntityStandbyStatus

}; // ENTITYSTATEMIB::Entstatetable::Entstateentry


}
}

#endif /* _ENTITY_STATE_MIB_ */

