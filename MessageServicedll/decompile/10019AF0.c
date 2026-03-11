/*
 * func-name: sub_10019AF0
 * func-address: 0x10019af0
 * callers: none
 * callees: 0x100198f0, 0x100294f2
 */

_DWORD *__thiscall sub_10019AF0(_DWORD *this, char a2)
{
  *this = &Outpop::Message::Asynch_Group_Item::`vftable';
  sub_100198F0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
