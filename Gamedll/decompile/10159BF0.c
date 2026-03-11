/*
 * func-name: ?WriteSnapshot@Equip@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10159bf0
 * callers: 0x1000e9b2
 * callees: 0x1000a3a8, 0x1000bc80, 0x1000c964, 0x1000ed13, 0x1001344e
 */

bool __thiscall GameClient::Equip::WriteSnapshot(GameClient::Equip *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // ecx
  struct BinStream *v6; // eax
  GameClient::RobotManager *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  GameClient::EquipManager *v11; // eax
  struct GameClient::SystemPart *SystemPart; // eax
  int v13; // ecx
  int v14; // [esp-4h] [ebp-Ch]
  int v15; // [esp-4h] [ebp-Ch]

  result = GameClient::SystemPart::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = v4 + 4;
    if ( (unsigned int)(v4 + 4) > *((_DWORD *)a2 + 2) )
    {
      v6 = a2;
    }
    else
    {
      v6 = *(struct BinStream **)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v5;
    }
    if ( v6 != (struct BinStream *)-1 )
    {
      v14 = (int)v6;
      v7 = GameClient::RobotManager::Instance();
      *((_DWORD *)this + 37) = GameClient::RobotManager::GetRobot(v7, v14);
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 62) = *(_DWORD *)(v8 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v9 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 63) = *(_DWORD *)(v9 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v10 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v10 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 64) = *(_DWORD *)(v10 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    if ( *((_DWORD *)this + 63) != -1 )
    {
      v15 = *((_DWORD *)this + 63);
      v11 = GameClient::EquipManager::Instance();
      SystemPart = GameClient::EquipManager::GetSystemPart(v11, v15);
      if ( SystemPart )
      {
        v13 = *((_DWORD *)this + 62);
        *((_DWORD *)SystemPart + 63) = *((_DWORD *)this + 3);
        *((_DWORD *)SystemPart + 64) = v13;
      }
    }
    return 1;
  }
  return result;
}
