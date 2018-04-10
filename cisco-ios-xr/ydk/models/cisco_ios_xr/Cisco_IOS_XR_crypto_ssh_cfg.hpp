#ifndef _CISCO_IOS_XR_CRYPTO_SSH_CFG_
#define _CISCO_IOS_XR_CRYPTO_SSH_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_ssh_cfg {

class Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

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

        class Client; //type: Ssh::Client
        class Server; //type: Ssh::Server

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server> server;
        
}; // Ssh


class Ssh::Client : public ydk::Entity
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

        ydk::YLeaf rekey_volume; //type: uint32
        ydk::YLeaf host_public_key; //type: string
        ydk::YLeaf client_vrf; //type: string
        ydk::YLeaf rekey_time; //type: uint32
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf dscp; //type: uint32
        class ClientAlgo; //type: Ssh::Client::ClientAlgo
        class ClientEnable; //type: Ssh::Client::ClientEnable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Client::ClientAlgo> client_algo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Client::ClientEnable> client_enable;
        
}; // Ssh::Client


class Ssh::Client::ClientAlgo : public ydk::Entity
{
    public:
        ClientAlgo();
        ~ClientAlgo();

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

        class KeyExchange; //type: Ssh::Client::ClientAlgo::KeyExchange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Client::ClientAlgo::KeyExchange> key_exchange; // presence node
        
}; // Ssh::Client::ClientAlgo


class Ssh::Client::ClientAlgo::KeyExchange : public ydk::Entity
{
    public:
        KeyExchange();
        ~KeyExchange();

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

        ydk::YLeaf kex_algo1st; //type: string
        ydk::YLeaf kex_algo2nd; //type: string
        ydk::YLeaf kex_algo3rd; //type: string
        ydk::YLeaf kex_algo4th; //type: string
        ydk::YLeaf kex_algo5th; //type: string

}; // Ssh::Client::ClientAlgo::KeyExchange


class Ssh::Client::ClientEnable : public ydk::Entity
{
    public:
        ClientEnable();
        ~ClientEnable();

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

        class ClientCipher; //type: Ssh::Client::ClientEnable::ClientCipher

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Client::ClientEnable::ClientCipher> client_cipher;
        
}; // Ssh::Client::ClientEnable


class Ssh::Client::ClientEnable::ClientCipher : public ydk::Entity
{
    public:
        ClientCipher();
        ~ClientCipher();

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

        ydk::YLeaf aescbc; //type: boolean

}; // Ssh::Client::ClientEnable::ClientCipher


class Ssh::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf rekey_volume; //type: uint32
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf netconf; //type: uint32
        ydk::YLeaf v2; //type: empty
        ydk::YLeaf rekey_time; //type: uint32
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf rate_limit; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        class Disable; //type: Ssh::Server::Disable
        class Enable; //type: Ssh::Server::Enable
        class VrfTable; //type: Ssh::Server::VrfTable
        class ServerAlgo; //type: Ssh::Server::ServerAlgo
        class Capability; //type: Ssh::Server::Capability
        class NetconfVrfTable; //type: Ssh::Server::NetconfVrfTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::Disable> disable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::VrfTable> vrf_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::ServerAlgo> server_algo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::Capability> capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::NetconfVrfTable> netconf_vrf_table;
        
}; // Ssh::Server


class Ssh::Server::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

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

        class Hmac; //type: Ssh::Server::Disable::Hmac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::Disable::Hmac> hmac;
        
}; // Ssh::Server::Disable


class Ssh::Server::Disable::Hmac : public ydk::Entity
{
    public:
        Hmac();
        ~Hmac();

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

        ydk::YLeaf hmac_sha512; //type: boolean

}; // Ssh::Server::Disable::Hmac


class Ssh::Server::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        class Cipher; //type: Ssh::Server::Enable::Cipher

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::Enable::Cipher> cipher;
        
}; // Ssh::Server::Enable


class Ssh::Server::Enable::Cipher : public ydk::Entity
{
    public:
        Cipher();
        ~Cipher();

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

        ydk::YLeaf aescbc; //type: boolean

}; // Ssh::Server::Enable::Cipher


class Ssh::Server::VrfTable : public ydk::Entity
{
    public:
        VrfTable();
        ~VrfTable();

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

        class Vrf; //type: Ssh::Server::VrfTable::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::VrfTable::Vrf> > vrf;
        
}; // Ssh::Server::VrfTable


class Ssh::Server::VrfTable::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf ipv4_access_list; //type: string
        ydk::YLeaf ipv6_access_list; //type: string

}; // Ssh::Server::VrfTable::Vrf


class Ssh::Server::ServerAlgo : public ydk::Entity
{
    public:
        ServerAlgo();
        ~ServerAlgo();

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

        class KeyExchange; //type: Ssh::Server::ServerAlgo::KeyExchange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::ServerAlgo::KeyExchange> key_exchange; // presence node
        
}; // Ssh::Server::ServerAlgo


class Ssh::Server::ServerAlgo::KeyExchange : public ydk::Entity
{
    public:
        KeyExchange();
        ~KeyExchange();

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

        ydk::YLeaf kex_algo1st; //type: string
        ydk::YLeaf kex_algo2nd; //type: string
        ydk::YLeaf kex_algo3rd; //type: string
        ydk::YLeaf kex_algo4th; //type: string
        ydk::YLeaf kex_algo5th; //type: string

}; // Ssh::Server::ServerAlgo::KeyExchange


class Ssh::Server::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

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

        ydk::YLeaf netconf_xml; //type: boolean

}; // Ssh::Server::Capability


class Ssh::Server::NetconfVrfTable : public ydk::Entity
{
    public:
        NetconfVrfTable();
        ~NetconfVrfTable();

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

        class Vrf; //type: Ssh::Server::NetconfVrfTable::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_ssh_cfg::Ssh::Server::NetconfVrfTable::Vrf> > vrf;
        
}; // Ssh::Server::NetconfVrfTable


class Ssh::Server::NetconfVrfTable::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf ipv4_access_list; //type: string
        ydk::YLeaf ipv6_access_list; //type: string

}; // Ssh::Server::NetconfVrfTable::Vrf


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SSH_CFG_ */
