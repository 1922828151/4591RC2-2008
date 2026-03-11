/*
 * func-name: ?ClearAura@WorldObject@GameClient@@QAEXXZ_0
 * func-address: 0x1019b140
 * callers: 0x10014178
 * callees: 0x100084f4, 0x1000aff6
 */

void __thiscall GameClient::WorldObject::ClearAura(GameClient::WorldObject *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebx
  GameClient::FlyweightManager *v7; // eax
  char *v8; // ebx
  char *v9; // edi
  int v10; // eax
  char *v11; // ebp
  unsigned int v12; // [esp-8h] [ebp-18h]

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 31);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 32) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 31);
    if ( *(_DWORD *)(v4 + 4 * i) )
    {
      if ( !v4 || i >= (*((_DWORD *)this + 32) - v4) >> 2 )
        _invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 31);
      v6 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * i) + 12);
      if ( !v5 || i >= (*((_DWORD *)this + 32) - v5) >> 2 )
        _invalid_parameter_noinfo();
      v12 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 31) + 4 * i) + 4);
      v7 = GameClient::FlyweightManager::Instance();
      GameClient::FlyweightManager::DeleteInstance(v7, v12, v6);
    }
  }
  v8 = (char *)*((_DWORD *)this + 32);
  if ( v3 > (unsigned int)v8 )
    _invalid_parameter_noinfo();
  v9 = (char *)*((_DWORD *)this + 31);
  if ( (unsigned int)v9 > *((_DWORD *)this + 32) )
    _invalid_parameter_noinfo();
  if ( v9 != v8 )
  {
    v10 = (*((_DWORD *)this + 32) - (int)v8) >> 2;
    v11 = &v9[4 * v10];
    if ( v10 > 0 )
      memmove_s(v9, 4 * v10, v8, 4 * v10);
    *((_DWORD *)this + 32) = v11;
  }
}
