/*
 * func-name: ?ClearEquip@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x101783e0
 * callers: 0x10011d3d
 * callees: 0x100084f4, 0x1000aff6, 0x10016f95
 */

void __thiscall GameClient::Robot::ClearEquip(GameClient::Robot *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebx
  GameClient::FlyweightManager *v7; // eax
  char *v8; // ebx
  void (__cdecl *v9)(); // ebp
  char *v10; // edi
  int v11; // eax
  char *v12; // ebp
  unsigned int i; // edi
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ebx
  int v17; // ecx
  GameClient::FlyweightManager *v18; // eax
  int v19; // ecx
  unsigned int v20; // [esp-8h] [ebp-18h]
  unsigned int v21; // [esp-8h] [ebp-18h]

  v2 = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 57) = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 63);
    if ( !v3 || v2 >= (int)(*((_DWORD *)this + 64) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v4 + 4 * v2) )
    {
      if ( !v4 || v2 >= (*((_DWORD *)this + 64) - v4) >> 2 )
        _invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 63);
      v6 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * v2) + 12);
      if ( !v5 || v2 >= (*((_DWORD *)this + 64) - v5) >> 2 )
        _invalid_parameter_noinfo();
      v20 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 63) + 4 * v2) + 4);
      v7 = GameClient::FlyweightManager::Instance();
      GameClient::FlyweightManager::DeleteInstance(v7, v20, v6);
    }
    ++v2;
  }
  v8 = (char *)*((_DWORD *)this + 64);
  v9 = _invalid_parameter_noinfo;
  if ( v3 > (unsigned int)v8 )
    _invalid_parameter_noinfo();
  v10 = (char *)*((_DWORD *)this + 63);
  if ( (unsigned int)v10 > *((_DWORD *)this + 64) )
    _invalid_parameter_noinfo();
  if ( v10 != v8 )
  {
    v11 = (*((_DWORD *)this + 64) - (int)v8) >> 2;
    v12 = &v10[4 * v11];
    if ( v11 > 0 )
      memmove_s(v10, 4 * v11, v8, 4 * v11);
    *((_DWORD *)this + 64) = v12;
    v9 = _invalid_parameter_noinfo;
  }
  for ( i = 0; ; ++i )
  {
    v14 = *((_DWORD *)this + 67);
    if ( !v14 || i >= (*((_DWORD *)this + 68) - v14) >> 2 )
      break;
    v15 = *((_DWORD *)this + 67);
    if ( *(_DWORD *)(v15 + 4 * i) )
    {
      if ( !v15 || i >= (*((_DWORD *)this + 68) - v15) >> 2 )
        v9();
      v16 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 67) + 4 * i) + 12);
      v17 = *((_DWORD *)this + 67);
      if ( !v17 || i >= (*((_DWORD *)this + 68) - v17) >> 2 )
        v9();
      v21 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 67) + 4 * i) + 4);
      v18 = GameClient::FlyweightManager::Instance();
      GameClient::FlyweightManager::DeleteInstance(v18, v21, v16);
    }
    v19 = *((_DWORD *)this + 67);
    if ( !v19 || i >= (*((_DWORD *)this + 68) - v19) >> 2 )
      v9();
    *(_DWORD *)(*((_DWORD *)this + 67) + 4 * i) = 0;
  }
  GameClient::Robot::ChangeViewMode(this, *((_BYTE *)this + 700));
}
