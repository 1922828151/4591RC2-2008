/*
 * func-name: sub_10016C30
 * func-address: 0x10016c30
 * callers: none
 * callees: 0x100294f2
 */

_DWORD *__thiscall sub_10016C30(_DWORD *this, char a2)
{
  *this = &Outpop::Message::Defalut_Type_Handler::`vftable';
  *this = &Outpop::Message::Message_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
