/*
 * func-name: ?WriteSynaData@ARepair@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d0170
 * callers: 0x10016c98
 * callees: 0x100015b4, 0x10008a62
 */

char __thiscall GameClient::ARepair::WriteSynaData(GameClient::ARepair *this, struct BinStream *a2)
{
  int v4; // eax
  struct GameClient::DamageUnit *DamageUnit; // eax

  if ( !GameClient::Aura::WriteSynaData(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 8);
  if ( !v4 )
    return 0;
  DamageUnit = GameClient::DamageManager::GetDamageUnit(GameClient::DamageManager::ms_pInstance, *(_DWORD *)(v4 + 12));
  (*(void (__thiscall **)(struct GameClient::DamageUnit *, struct BinStream *))(*(_DWORD *)DamageUnit + 4))(
    DamageUnit,
    a2);
  return 1;
}
