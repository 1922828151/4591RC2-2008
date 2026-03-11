/*
 * func-name: sub_102ABB30
 * func-address: 0x102abb30
 * callers: 0x10012b4d
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102ABB30(_DWORD *this, char a2)
{
  *this = &ClientMessageServiceHandler::`vftable';
  *this = Outpop::Message::Message_Service_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
