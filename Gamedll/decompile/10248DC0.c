/*
 * func-name: ?WriteSynaData@FARepair@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10248dc0
 * callers: 0x10003c06
 * callees: 0x1000a3a8, 0x1000ed13, 0x1001990c
 */

char __thiscall GameClient::FARepair::WriteSynaData(GameClient::FARepair *this, struct BinStream *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ecx
  struct BinStream *v7; // eax
  GameClient::RobotManager *v8; // eax
  struct GameClient::Robot *Robot; // eax
  int v10; // [esp-4h] [ebp-8h]

  if ( !GameClient::FAura::WriteSynaData(this, a2) )
    return 0;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 3) + 4;
  if ( v4 <= v3 )
    *((_DWORD *)a2 + 3) = v4;
  v5 = *((_DWORD *)a2 + 3);
  v6 = v5 + 4;
  if ( v5 + 4 > v3 )
  {
    v7 = a2;
  }
  else
  {
    v7 = *(struct BinStream **)(v5 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v6;
  }
  v10 = (int)v7;
  v8 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v8, v10);
  if ( !Robot )
    return 0;
  (*(void (__thiscall **)(int, struct BinStream *))(*((_DWORD *)Robot + 37) + 4))((int)Robot + 148, a2);
  return 1;
}
