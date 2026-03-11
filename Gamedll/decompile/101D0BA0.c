/*
 * func-name: ?WriteSynaData@ASummon@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d0ba0
 * callers: 0x100012da
 * callees: 0x10008a62, 0x1000a3a8, 0x1000a939, 0x1000ed13, 0x10018e71
 */

bool __thiscall GameClient::ASummon::WriteSynaData(GameClient::ASummon *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  struct BinStream *v9; // ebp
  int v10; // ecx
  float *v11; // eax
  int v12; // ecx
  int v13; // edx
  int *v14; // eax
  float v15; // ecx
  float v16; // eax
  GameClient::RobotManager *v17; // eax
  struct GameClient::Robot *Robot; // esi
  unsigned int v19; // eax
  void (__thiscall *v20)(struct GameClient::Robot *, float *); // edx
  int v21; // edi
  int v22; // eax
  int v23; // [esp-Ch] [ebp-6Ch]
  float v24; // [esp+8h] [ebp-58h] BYREF
  float v25; // [esp+Ch] [ebp-54h]
  float v26; // [esp+10h] [ebp-50h]
  int v27; // [esp+14h] [ebp-4Ch] BYREF
  float v28; // [esp+18h] [ebp-48h]
  float v29; // [esp+1Ch] [ebp-44h]
  _BYTE v30[64]; // [esp+20h] [ebp-40h] BYREF

  result = GameClient::Aura::WriteSynaData(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v24 = 0.0;
    v5 = (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2);
    v25 = 0.0;
    v26 = 0.0;
    *(float *)&v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    if ( v5 )
    {
      *((_DWORD *)this + 39) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 40) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 2);
    if ( v7 + 4 > v8 )
    {
      v9 = a2;
    }
    else
    {
      v9 = *(struct BinStream **)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v7 + 4;
    }
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 + 12 <= v8 )
    {
      v11 = (float *)(v10 + *((_DWORD *)a2 + 1));
      v24 = *v11;
      v25 = v11[1];
      v26 = v11[2];
      *((_DWORD *)a2 + 3) = v10 + 12;
    }
    v12 = *((_DWORD *)a2 + 3);
    v13 = v12 + 12;
    if ( v12 + 12 <= v8 )
    {
      v14 = (int *)(v12 + *((_DWORD *)a2 + 1));
      v27 = *v14;
      v15 = *((float *)v14 + 1);
      v16 = *((float *)v14 + 2);
      v28 = v15;
      v29 = v16;
      *((_DWORD *)a2 + 3) = v13;
    }
    v23 = *(_DWORD *)(*((_DWORD *)this + 8) + 12);
    v17 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v17, v23);
    if ( Robot )
    {
      v19 = *((_DWORD *)this + 39);
      if ( v19 != -1 && *(_DWORD *)(*((_DWORD *)this + 2) + 288) == 1 )
        GameClient::Robot::IntoEstablishment(Robot, v19, 0);
      v20 = *(void (__thiscall **)(struct GameClient::Robot *, float *))(*(_DWORD *)Robot + 36);
      *((_DWORD *)Robot + 91) = v9;
      v20(Robot, &v24);
      v21 = *(_DWORD *)Robot;
      v22 = sub_10018E71(v30, (int)&v27);
      (*(void (__thiscall **)(struct GameClient::Robot *, int))(v21 + 40))(Robot, v22);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
