/*
 * func-name: ?AddSystemPart@Robot@GameClient@@QAE_NABV?$vector@KV?$allocator@K@std@@@std@@_N@Z_0
 * func-address: 0x1017bf20
 * callers: 0x100065b4
 * callees: 0x10003b52, 0x10005fb5, 0x1000762b, 0x1000b2e9, 0x1000bc80, 0x1000ef34, 0x10011766, 0x10011d3d, 0x10013093, 0x1001344e, 0x1001ac58, 0x102c9d50
 */

char __thiscall GameClient::Robot::AddSystemPart(
        GameClient::Robot *this,
        unsigned int a2,
        struct GameClient::SystemPart *a3)
{
  GameClient::Robot *v3; // edi
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // eax
  void (__cdecl *v7)(); // esi
  GameClient::EquipManager *v8; // eax
  struct GameClient::SystemPart *SystemPart; // eax
  int v11; // ecx
  GameClient::EquipManager *v12; // eax
  struct GameClient::SystemPart *v13; // eax
  int v14; // eax
  GameClient::EquipManager *v15; // eax
  struct GameClient::SystemPart *v16; // eax
  char *v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  _DWORD *v23; // edi
  GameClient::EquipManager *v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int i; // ebx
  int v29; // ecx
  int v30; // ecx
  GameClient::EquipManager *v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // edx
  struct GameClient::SystemPart **v34; // eax
  int v35; // ecx
  void *v36; // ecx
  int v37; // [esp-4h] [ebp-44h]
  int v38; // [esp-4h] [ebp-44h]
  int v39; // [esp-4h] [ebp-44h]
  int v40; // [esp-4h] [ebp-44h]
  int v41; // [esp-4h] [ebp-44h]
  int v42; // [esp+14h] [ebp-2Ch]
  int v44[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v45; // [esp+24h] [ebp-1Ch] BYREF
  void *v46; // [esp+28h] [ebp-18h]
  int v47; // [esp+2Ch] [ebp-14h]
  int v48; // [esp+30h] [ebp-10h]
  int v49; // [esp+3Ch] [ebp-4h]

  v3 = this;
  v4 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v5 = a2;
  v49 = 0;
  v42 = 0;
  if ( (_BYTE)a3 )
  {
    GameClient::Robot::ClearRobot(this);
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 && (*(_DWORD *)(v5 + 8) - v6) >> 2 )
    {
      v7 = _invalid_parameter_noinfo;
    }
    else
    {
      v7 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v37 = **(_DWORD **)(v5 + 4);
    v8 = GameClient::EquipManager::Instance();
    SystemPart = GameClient::EquipManager::GetSystemPart(v8, v37);
    *((_DWORD *)v3 + 50) = SystemPart;
    if ( !SystemPart )
    {
      if ( v46 )
        operator delete(v46);
      return 0;
    }
    *((_DWORD *)SystemPart + 37) = v3;
    v11 = *(_DWORD *)(v5 + 4);
    if ( !v11 || (unsigned int)((*(_DWORD *)(v5 + 8) - v11) >> 2) <= 1 )
      v7();
    v38 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4);
    v12 = GameClient::EquipManager::Instance();
    v13 = GameClient::EquipManager::GetSystemPart(v12, v38);
    *((_DWORD *)v3 + 51) = v13;
    *((_DWORD *)v13 + 37) = v3;
    v14 = *(_DWORD *)(v5 + 4);
    if ( !v14 || (unsigned int)((*(_DWORD *)(v5 + 8) - v14) >> 2) <= 2 )
      v7();
    v39 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8);
    v15 = GameClient::EquipManager::Instance();
    v16 = GameClient::EquipManager::GetSystemPart(v15, v39);
    *((_DWORD *)v3 + 52) = v16;
    *((_DWORD *)v16 + 37) = v3;
    GameClient::Robot::init(v3);
    v42 = 3;
  }
  a2 = *(_DWORD *)(*((_DWORD *)v3 + 50) + 8);
  sub_10011766(&v45, (int)&a2);
  a2 = *(_DWORD *)(*((_DWORD *)v3 + 51) + 8);
  sub_10011766(&v45, (int)&a2);
  a2 = *(_DWORD *)(*((_DWORD *)v3 + 52) + 8);
  sub_10011766(&v45, (int)&a2);
  GameClient::Robot::ClearEquip(v3);
  v17 = (char *)v3 + 248;
  sub_10005FB5((char *)v3 + 248, *((_DWORD *)v3 + 86) + *((_DWORD *)v3 + 87), 0);
  v18 = v42;
  a2 = 4 * v42;
  while ( 1 )
  {
    v19 = *((_DWORD *)v17 + 1);
    if ( !v19 || v4 >= (*((_DWORD *)v17 + 2) - v19) >> 2 )
      break;
    v20 = *(_DWORD *)(v5 + 4);
    if ( !v20 || v4 + v18 >= (*(_DWORD *)(v5 + 8) - v20) >> 2 )
    {
      _invalid_parameter_noinfo();
      v18 = v42;
    }
    v21 = *(_DWORD *)(v5 + 4);
    if ( *(_DWORD *)(a2 + v21) == -1 )
    {
      v44[0] = 0;
      sub_10011766(&v45, (int)v44);
      v18 = v42;
      ++v4;
      a2 += 4;
    }
    else
    {
      if ( !v21 || v4 + v18 >= (*(_DWORD *)(v5 + 8) - v21) >> 2 )
        _invalid_parameter_noinfo();
      v22 = *((_DWORD *)v17 + 1);
      v44[0] = a2 + *(_DWORD *)(v5 + 4);
      if ( !v22 || v4 >= (*((_DWORD *)v17 + 2) - v22) >> 2 )
        _invalid_parameter_noinfo();
      v23 = (_DWORD *)(4 * v4 + *((_DWORD *)v17 + 1));
      v40 = *(_DWORD *)v44[0];
      v24 = GameClient::EquipManager::Instance();
      *v23 = GameClient::EquipManager::GetSystemPart(v24, v40);
      v25 = *((_DWORD *)v17 + 1);
      if ( !v25 || v4 >= (*((_DWORD *)v17 + 2) - v25) >> 2 )
        _invalid_parameter_noinfo();
      v26 = *((_DWORD *)v17 + 1);
      if ( *(_DWORD *)(v26 + 4 * v4) )
      {
        if ( !v26 || v4 >= (*((_DWORD *)v17 + 2) - v26) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v4) + 148) = this;
        v27 = *((_DWORD *)v17 + 1);
        if ( !v27 || v4 >= (*((_DWORD *)v17 + 2) - v27) >> 2 )
          _invalid_parameter_noinfo();
        v44[0] = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v4) + 8);
        sub_10011766(&v45, (int)v44);
      }
      v3 = this;
      v18 = v42;
      ++v4;
      a2 += 4;
    }
  }
  if ( (_BYTE)a3 )
  {
    for ( i = v18 + *((_DWORD *)v3 + 86) + *((_DWORD *)v3 + 87); i < sub_1001AC58(); ++i )
    {
      v29 = *(_DWORD *)(v5 + 4);
      if ( !v29 || i >= (*(_DWORD *)(v5 + 8) - v29) >> 2 )
        _invalid_parameter_noinfo();
      v30 = *(_DWORD *)(v5 + 4);
      if ( *(_DWORD *)(4 * i + v30) != -1 )
      {
        if ( !v30 || i >= (*(_DWORD *)(v5 + 8) - v30) >> 2 )
          _invalid_parameter_noinfo();
        v41 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * i);
        v31 = GameClient::EquipManager::Instance();
        a3 = GameClient::EquipManager::GetSystemPart(v31, v41);
        v32 = *((_DWORD *)v3 + 67);
        if ( v32 )
          v33 = (int)(*((_DWORD *)v3 + 68) - v32) >> 2;
        else
          v33 = 0;
        if ( v32 && v33 < (int)(*((_DWORD *)v3 + 69) - v32) >> 2 )
        {
          v34 = (struct GameClient::SystemPart **)*((_DWORD *)v3 + 68);
          v35 = (int)a3;
          *v34 = a3;
          *((_DWORD *)v3 + 68) = v34 + 1;
        }
        else
        {
          a2 = *((_DWORD *)v3 + 68);
          v36 = (void *)a2;
          if ( v32 > a2 )
          {
            _invalid_parameter_noinfo();
            v36 = (void *)a2;
          }
          sub_10013093((int)v44, (int)v3 + 264, v36, (int)&a3);
          v35 = (int)a3;
        }
        if ( v35 )
          *(_DWORD *)(v35 + 148) = v3;
      }
    }
  }
  *((_DWORD *)v3 + 84) = GameClient::Robot::ComputerTotalMass((int)&v45);
  *((_DWORD *)v3 + 85) = GameClient::Robot::ComputerTotalPower((int)&v45);
  if ( v46 )
    operator delete(v46);
  return 1;
}
