/*
 * func-name: sub_100120D0
 * func-address: 0x100120d0
 * callers: none
 * callees: 0x10018cf2
 */

_DWORD *__thiscall sub_100120D0(_DWORD *this, char a2)
{
  *this = &Outpop::Utility::XercescXMLItem_Warrp::`vftable';
  *this = &Outpop::Utility::Config_Item::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
