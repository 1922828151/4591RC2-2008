/*
 * func-name: ?OnDestroy@Seat@GameClient@@UAEXXZ_0
 * func-address: 0x101b1680
 * callers: 0x1000f33a
 * callees: 0x100084f4, 0x1000aff6
 */

void __thiscall GameClient::Seat::OnDestroy(GameClient::Seat *this)
{
  int v2; // eax
  unsigned int v3; // edi
  GameClient::FlyweightManager *v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  GameClient::FlyweightManager *v8; // eax
  char *v9; // ebx
  char *v10; // edi
  int v11; // eax
  char *v12; // ebp
  unsigned int v13; // [esp-8h] [ebp-18h]
  unsigned int v14; // [esp-8h] [ebp-18h]
  unsigned int v15; // [esp-4h] [ebp-14h]

  v2 = *((_DWORD *)this + 87);
  v3 = 0;
  if ( v2 )
  {
    v15 = *(_DWORD *)(v2 + 12);
    v13 = *(_DWORD *)(v2 + 4);
    v4 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v4, v13, v15);
    *((_DWORD *)this + 87) = 0;
  }
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 8);
    if ( !v5 || v3 >= (int)(*((_DWORD *)this + 9) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 4 * v3) + 12);
    v7 = *((_DWORD *)this + 8);
    if ( !v7 || v3 >= (*((_DWORD *)this + 9) - v7) >> 2 )
      _invalid_parameter_noinfo();
    v14 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 4 * v3) + 4);
    v8 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v8, v14, v6);
    ++v3;
  }
  v9 = (char *)*((_DWORD *)this + 9);
  if ( v5 > (unsigned int)v9 )
    _invalid_parameter_noinfo();
  v10 = (char *)*((_DWORD *)this + 8);
  if ( (unsigned int)v10 > *((_DWORD *)this + 9) )
    _invalid_parameter_noinfo();
  if ( v10 != v9 )
  {
    v11 = (*((_DWORD *)this + 9) - (int)v9) >> 2;
    v12 = &v10[4 * v11];
    if ( v11 > 0 )
      memmove_s(v10, 4 * v11, v9, 4 * v11);
    *((_DWORD *)this + 9) = v12;
  }
}
