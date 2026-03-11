/*
 * func-name: sub_101D86A0
 * func-address: 0x101d86a0
 * callers: 0x1000ff2e
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_101D86A0(_DWORD *this, char a2)
{
  *this = &GameClient::LogicCore::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
