/*
 * func-name: sub_100D5950
 * func-address: 0x100d5950
 * callers: 0x10007842
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_100D5950(_DWORD *this, char a2)
{
  *this = &GameClient::NxRaycastWheel::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
