#ifndef _CISCO_IOS_XR_CONFIG_CFGMGR_CFG_
#define _CISCO_IOS_XR_CONFIG_CFGMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_config_cfgmgr_cfg {

class Cfgmgr : public Entity
{
    public:
        Cfgmgr();
        ~Cfgmgr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf mode_exclusive; //type: boolean



}; // Cfgmgr


}
}

#endif /* _CISCO_IOS_XR_CONFIG_CFGMGR_CFG_ */
