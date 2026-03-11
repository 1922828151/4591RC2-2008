/*
 * func-name: ?addSystemPart@Robot@GameClient@@QAE_NAAV?$vector@KV?$allocator@K@std@@@std@@@Z_0
 * func-address: 0x1017e0b0
 * callers: 0x100070c2
 * callees: 0x10001573, 0x10005fb5, 0x1000762b, 0x1000773e, 0x1000aff6, 0x1000b2e9, 0x10013a84
 */

char __thiscall GameClient::Robot::addSystemPart(GameClient::Robot *this, int a2)
{
  GameClient::Robot *v2; // edi
  int v3; // ebx
  int v4; // eax
  void (__cdecl *v5)(); // esi
  GameClient::FlyweightManager *v6; // eax
  int v7; // ecx
  GameClient::FlyweightManager *v8; // eax
  int v9; // ecx
  GameClient::FlyweightManager *v10; // eax
  char *v11; // esi
  unsigned int i; // ebp
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  unsigned int *v18; // ebx
  _DWORD *v19; // edi
  GameClient::FlyweightManager *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned int v26; // [esp-8h] [ebp-20h]
  unsigned int v27; // [esp-8h] [ebp-20h]
  unsigned int v28; // [esp-8h] [ebp-20h]
  unsigned int v29; // [esp-8h] [ebp-20h]

  v2 = this;
  GameClient::Robot::ClearRobot(this);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 && (*(_DWORD *)(a2 + 8) - v4) >> 2 )
  {
    v5 = _invalid_parameter_noinfo;
  }
  else
  {
    v5 = _invalid_parameter_noinfo;
    _invalid_parameter_noinfo();
  }
  v26 = **(_DWORD **)(a2 + 4);
  v6 = GameClient::FlyweightManager::Instance();
  *((_DWORD *)v2 + 50) = GameClient::FlyweightManager::NewInstance(v6, v26, 0xFFFFFFFF);
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 || (unsigned int)((*(_DWORD *)(a2 + 8) - v7) >> 2) <= 1 )
    v5();
  v27 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4);
  v8 = GameClient::FlyweightManager::Instance();
  *((_DWORD *)v2 + 51) = GameClient::FlyweightManager::NewInstance(v8, v27, 0xFFFFFFFF);
  v9 = *(_DWORD *)(a2 + 4);
  if ( !v9 || (unsigned int)((*(_DWORD *)(a2 + 8) - v9) >> 2) <= 2 )
    v5();
  v28 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8);
  v10 = GameClient::FlyweightManager::Instance();
  *((_DWORD *)v2 + 52) = GameClient::FlyweightManager::NewInstance(v10, v28, 0xFFFFFFFF);
  GameClient::Robot::init(v2);
  v11 = (char *)v2 + 248;
  sub_10005FB5((char *)v2 + 248, *((_DWORD *)v2 + 86) + *((_DWORD *)v2 + 87), 0);
  for ( i = 0; ; ++i )
  {
    v13 = *((_DWORD *)v11 + 1);
    if ( !v13 || i >= (*((_DWORD *)v11 + 2) - v13) >> 2 )
      break;
    v14 = *(_DWORD *)(v3 + 4);
    if ( !v14 || i + 3 >= (*(_DWORD *)(v3 + 8) - v14) >> 2 )
      _invalid_parameter_noinfo();
    v15 = *(_DWORD *)(v3 + 4);
    v16 = 4 * i + 12;
    if ( *(_DWORD *)(v16 + v15) != -1 )
    {
      if ( !v15 || i + 3 >= (*(_DWORD *)(v3 + 8) - v15) >> 2 )
      {
        _invalid_parameter_noinfo();
        v16 = 4 * i + 12;
      }
      v17 = *((_DWORD *)v11 + 1);
      v18 = (unsigned int *)(v16 + *(_DWORD *)(v3 + 4));
      if ( !v17 || i >= (*((_DWORD *)v11 + 2) - v17) >> 2 )
        _invalid_parameter_noinfo();
      v29 = *v18;
      v19 = (_DWORD *)(4 * i + *((_DWORD *)v11 + 1));
      v20 = GameClient::FlyweightManager::Instance();
      *v19 = GameClient::FlyweightManager::NewInstance(v20, v29, 0xFFFFFFFF);
      v21 = *((_DWORD *)v11 + 1);
      if ( !v21 || i >= (*((_DWORD *)v11 + 2) - v21) >> 2 )
        _invalid_parameter_noinfo();
      v22 = *((_DWORD *)v11 + 1);
      if ( *(_DWORD *)(v22 + 4 * i) )
      {
        if ( !v22 || i >= (*((_DWORD *)v11 + 2) - v22) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v11 + 1) + 4 * i) + 148) = this;
        v23 = *((_DWORD *)v11 + 1);
        if ( !v23 || i >= (*((_DWORD *)v11 + 2) - v23) >> 2 )
          _invalid_parameter_noinfo();
        v24 = *(_DWORD *)(*((_DWORD *)v11 + 1) + 4 * i);
        (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 24))(v24);
      }
      v2 = this;
      v3 = a2;
    }
  }
  *(_BYTE *)(*((_DWORD *)v2 + 43) + 1389) = 0;
  GameClient::Robot::loadResource(v2);
  GameClient::Robot::SetCurEquip(v2, 1, -1);
  return 1;
}
