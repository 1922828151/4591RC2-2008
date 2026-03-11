/*
 * func-name: ?Disable@Aura@GameClient@@UAE_NXZ_0
 * func-address: 0x101d1140
 * callers: 0x1000b3de
 * callees: 0x1000bf05, 0x100163b0, 0x1001a5d2
 */

char __thiscall GameClient::Aura::Disable(GameClient::Aura *this)
{
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = 1;
  if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
    sub_1001A5D2(0);
  return 1;
}
