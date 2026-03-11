/*
 * func-name: ?WriteSynaData@FASummon@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10249ee0
 * callers: 0x100084db
 * callees: 0x1000a3a8, 0x1000a939, 0x1000ed13, 0x100156bd, 0x1001990c
 */

bool __thiscall GameClient::FASummon::WriteSynaData(GameClient::FASummon *this, struct BinStream *a2)
{
  struct BinStream *v2; // esi
  bool result; // al
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  struct BinStream *v8; // ebp
  int v9; // ecx
  struct BinStream *v10; // ebx
  int v11; // ecx
  struct BinStream *v12; // edi
  GameClient::RobotManager *v13; // eax
  GameClient::Robot *Robot; // eax
  GameClient::Robot *v15; // esi

  v2 = a2;
  result = GameClient::FAura::WriteSynaData(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3) + 4;
    v5 = *((_DWORD *)a2 + 2);
    if ( v4 <= v5 )
      *((_DWORD *)a2 + 3) = v4;
    v6 = *((_DWORD *)a2 + 3);
    if ( v6 + 4 <= v5 )
    {
      a2 = *(struct BinStream **)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)v2 + 3) = v6 + 4;
    }
    v7 = *((_DWORD *)v2 + 3);
    if ( v7 + 4 > v5 )
    {
      v8 = a2;
    }
    else
    {
      v8 = *(struct BinStream **)(v7 + *((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 3) = v7 + 4;
    }
    v9 = *((_DWORD *)v2 + 3);
    if ( v9 + 4 > v5 )
    {
      v10 = a2;
    }
    else
    {
      v10 = *(struct BinStream **)(v9 + *((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 3) = v9 + 4;
    }
    v11 = *((_DWORD *)v2 + 3);
    if ( v11 + 4 > v5 )
    {
      v12 = a2;
    }
    else
    {
      v12 = *(struct BinStream **)(v11 + *((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 3) = v11 + 4;
    }
    v13 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v13, (int)a2);
    v15 = Robot;
    if ( !Robot )
      return 0;
    if ( v10 == (struct BinStream *)-1 )
    {
      if ( v8 == (struct BinStream *)1 )
      {
        GameClient::Robot::OutOffEstablishment(Robot);
        *((_DWORD *)v15 + 91) = v12;
        return 1;
      }
    }
    else if ( v8 == (struct BinStream *)1 )
    {
      GameClient::Robot::IntoEstablishment(Robot, (unsigned int)v10, 0);
    }
    *((_DWORD *)v15 + 91) = v12;
    return 1;
  }
  return result;
}
