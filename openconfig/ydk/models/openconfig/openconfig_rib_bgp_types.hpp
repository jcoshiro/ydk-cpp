#ifndef _OPENCONFIG_RIB_BGP_TYPES_
#define _OPENCONFIG_RIB_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_rib_bgp_types {

class BGPNOTSELECTEDBESTPATH : public virtual ydk::Identity
{
    public:
        BGPNOTSELECTEDBESTPATH();
        ~BGPNOTSELECTEDBESTPATH();


}; // BGPNOTSELECTEDBESTPATH

class BGPNOTSELECTEDPOLICY : public virtual ydk::Identity
{
    public:
        BGPNOTSELECTEDPOLICY();
        ~BGPNOTSELECTEDPOLICY();


}; // BGPNOTSELECTEDPOLICY

class INVALIDROUTEREASON : public virtual ydk::Identity
{
    public:
        INVALIDROUTEREASON();
        ~INVALIDROUTEREASON();


}; // INVALIDROUTEREASON

class ASPATHLONGER : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        ASPATHLONGER();
        ~ASPATHLONGER();


}; // ASPATHLONGER

class HIGHERPEERADDRESS : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        HIGHERPEERADDRESS();
        ~HIGHERPEERADDRESS();


}; // HIGHERPEERADDRESS

class HIGHERROUTERID : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        HIGHERROUTERID();
        ~HIGHERROUTERID();


}; // HIGHERROUTERID

class INVALIDASLOOP : public openconfig::openconfig_rib_bgp_types::INVALIDROUTEREASON, virtual ydk::Identity
{
    public:
        INVALIDASLOOP();
        ~INVALIDASLOOP();


}; // INVALIDASLOOP

class INVALIDCLUSTERLOOP : public openconfig::openconfig_rib_bgp_types::INVALIDROUTEREASON, virtual ydk::Identity
{
    public:
        INVALIDCLUSTERLOOP();
        ~INVALIDCLUSTERLOOP();


}; // INVALIDCLUSTERLOOP

class INVALIDCONFED : public openconfig::openconfig_rib_bgp_types::INVALIDROUTEREASON, virtual ydk::Identity
{
    public:
        INVALIDCONFED();
        ~INVALIDCONFED();


}; // INVALIDCONFED

class INVALIDORIGINATOR : public openconfig::openconfig_rib_bgp_types::INVALIDROUTEREASON, virtual ydk::Identity
{
    public:
        INVALIDORIGINATOR();
        ~INVALIDORIGINATOR();


}; // INVALIDORIGINATOR

class LOCALPREFLOWER : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        LOCALPREFLOWER();
        ~LOCALPREFLOWER();


}; // LOCALPREFLOWER

class MEDHIGHER : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        MEDHIGHER();
        ~MEDHIGHER();


}; // MEDHIGHER

class NEXTHOPCOSTHIGHER : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        NEXTHOPCOSTHIGHER();
        ~NEXTHOPCOSTHIGHER();


}; // NEXTHOPCOSTHIGHER

class ORIGINTYPEHIGHER : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        ORIGINTYPEHIGHER();
        ~ORIGINTYPEHIGHER();


}; // ORIGINTYPEHIGHER

class PREFEREXTERNAL : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDBESTPATH, virtual ydk::Identity
{
    public:
        PREFEREXTERNAL();
        ~PREFEREXTERNAL();


}; // PREFEREXTERNAL

class REJECTEDIMPORTPOLICY : public openconfig::openconfig_rib_bgp_types::BGPNOTSELECTEDPOLICY, virtual ydk::Identity
{
    public:
        REJECTEDIMPORTPOLICY();
        ~REJECTEDIMPORTPOLICY();


}; // REJECTEDIMPORTPOLICY


}
}

#endif /* _OPENCONFIG_RIB_BGP_TYPES_ */

