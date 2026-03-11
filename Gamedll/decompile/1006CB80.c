/*
 * func-name: sub_1006CB80
 * func-address: 0x1006cb80
 * callers: 0x10004b1f
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_1006CB80(_DWORD *this, char a2)
{
  *this = &GameClient::ControlModule::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
