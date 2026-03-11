/*
 * func-name: ?GetCapacitancePercent@Equip@GameClient@@QBEMXZ_0
 * func-address: 0x10159bd0
 * callers: 0x1001290e
 * callees: none
 */

double __thiscall GameClient::Equip::GetCapacitancePercent(GameClient::Equip *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 44);
  if ( v1 )
    return *(float *)(v1 + 56);
  else
    return 0.0;
}
