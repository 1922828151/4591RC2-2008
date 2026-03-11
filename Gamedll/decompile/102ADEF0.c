/*
 * func-name: sub_102ADEF0
 * func-address: 0x102adef0
 * callers: 0x10019452
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102ADEF0(_DWORD *this, char a2)
{
  *this = &GameDefaultRequestHandler::`vftable';
  *this = Outpop::Message::App_Request_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
