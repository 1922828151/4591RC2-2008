/*
 * func-name: ?WriteSnapshotToAvatar@DamageEquip@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1014e390
 * callers: 0x100044f8
 * callees: 0x1000bc80, 0x10012940, 0x1001344e
 */

bool __thiscall GameClient::DamageEquip::WriteSnapshotToAvatar(GameClient::DamageEquip *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  GameClient::EquipManager *v11; // eax
  struct GameClient::SystemPart *SystemPart; // eax
  int v13; // [esp-4h] [ebp-Ch]

  result = GameClient::Equip::WriteSnapshotToAvatar(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = (_DWORD *)*((_DWORD *)this + 2);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      v5[563] = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 12) <= *((_DWORD *)a2 + 2) )
    {
      v7 = (_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      v5[560] = *v7;
      v5[561] = v7[1];
      v5[562] = v7[2];
      *((_DWORD *)a2 + 3) += 12;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 12) <= *((_DWORD *)a2 + 2) )
    {
      v9 = (_DWORD *)(v8 + *((_DWORD *)a2 + 1));
      v10 = v5 + 557;
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      *((_DWORD *)a2 + 3) += 12;
    }
    if ( *((_DWORD *)this + 65) != -1 )
    {
      v13 = *((_DWORD *)this + 65);
      v11 = GameClient::EquipManager::Instance();
      SystemPart = GameClient::EquipManager::GetSystemPart(v11, v13);
      if ( SystemPart )
        *((_DWORD *)SystemPart + 66) = *((_DWORD *)this + 3);
    }
    return 1;
  }
  return result;
}
