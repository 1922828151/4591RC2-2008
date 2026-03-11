/*
 * func-name: ?StopCast@ASatelliteCapability@GameClient@@UAEXXZ_0
 * func-address: 0x101d0600
 * callers: 0x10012963
 * callees: 0x10016a4f, 0x10018043
 */

void __thiscall GameClient::ASatelliteCapability::StopCast(GameClient::ASatelliteCapability *this)
{
  int v2; // eax
  int v3; // eax

  GameClient::Aura::StopCast(this);
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
  {
    v3 = sub_10016A4F(*(_DWORD *)(v2 + 16));
    if ( v3 )
      *(_BYTE *)(v3 + 304) = 0;
  }
}
