/*
 * func-name: ?WriteSynaData@FAMovement@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x102486f0
 * callers: 0x10010b90
 * callees: 0x1000a3a8, 0x1000ed13, 0x1001990c
 */

char __thiscall GameClient::FAMovement::WriteSynaData(GameClient::FAMovement *this, float a2)
{
  float v2; // esi
  unsigned int v4; // edx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ecx
  float v8; // eax
  GameClient::RobotManager *v9; // eax
  float *Robot; // eax
  int v11; // edx
  unsigned int v12; // ecx
  double v13; // st7
  int v14; // edx
  double v15; // st7
  int v16; // edx
  int v17; // edi
  int v18; // ecx
  float v19; // ebx
  int v20; // ecx
  float v21; // edx
  float v22; // ecx
  int v23; // [esp-4h] [ebp-18h]
  float v24; // [esp+4h] [ebp-10h]

  v2 = a2;
  if ( !GameClient::FAura::WriteSynaData(this, (struct BinStream *)LODWORD(a2)) )
    return 0;
  v4 = *(_DWORD *)(LODWORD(a2) + 8);
  v5 = *(_DWORD *)(LODWORD(a2) + 12) + 4;
  if ( v5 <= v4 )
    *(_DWORD *)(LODWORD(a2) + 12) = v5;
  v6 = *(_DWORD *)(LODWORD(a2) + 12);
  v7 = v6 + 4;
  if ( v6 + 4 > v4 )
  {
    v8 = a2;
  }
  else
  {
    v8 = *(float *)(v6 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) = v7;
  }
  v23 = LODWORD(v8);
  v9 = GameClient::RobotManager::Instance();
  Robot = (float *)GameClient::RobotManager::GetRobot(v9, v23);
  if ( !Robot )
    return 0;
  v11 = *(_DWORD *)(LODWORD(a2) + 12);
  v12 = *(_DWORD *)(LODWORD(a2) + 8);
  if ( v11 + 4 <= v12 )
  {
    v13 = *(float *)(v11 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) = v11 + 4;
    a2 = v13;
  }
  v14 = *(_DWORD *)(LODWORD(v2) + 12);
  if ( v14 + 4 <= v12 )
  {
    v15 = *(float *)(v14 + *(_DWORD *)(LODWORD(v2) + 4));
    *(_DWORD *)(LODWORD(v2) + 12) = v14 + 4;
    v24 = v15;
  }
  v16 = *(_DWORD *)(LODWORD(v2) + 12);
  v17 = v16 + 12;
  if ( v16 + 12 > v12 )
  {
    v22 = 0.0;
    v21 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v18 = *(_DWORD *)(LODWORD(v2) + 4);
    v19 = *(float *)(v18 + v16);
    v20 = v16 + v18;
    v21 = *(float *)(v20 + 4);
    v22 = *(float *)(v20 + 8);
    *(_DWORD *)(LODWORD(v2) + 12) = v17;
  }
  Robot[82] = a2;
  Robot[83] = v24;
  Robot[189] = v24;
  Robot[188] = v19;
  Robot[189] = v21;
  Robot[190] = v22;
  return 1;
}
