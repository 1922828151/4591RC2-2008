/*
 * func-name: ?UnloadResource@Establishment@GameClient@@UAEXXZ_0
 * func-address: 0x101a48a0
 * callers: 0x10004629
 * callees: 0x10016b58, 0x102c9d50
 */

void __thiscall GameClient::Establishment::UnloadResource(GameClient::Establishment *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int j; // edi
  unsigned int v8; // ecx
  int v9; // ecx
  void *v10; // ebx
  int v11; // ecx
  char *v12; // ebx
  char *v13; // edi
  int v14; // eax
  char *v15; // ebp
  int v16; // eax
  int v17; // [esp+0h] [ebp-10h]
  int v18; // [esp+4h] [ebp-Ch]

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 95);
    if ( !v3 || i >= (*((_DWORD *)this + 96) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*((_DWORD *)this + 95) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  v5 = *((_DWORD *)this + 75);
  if ( v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 1);
    *((_DWORD *)this + 75) = 0;
  }
  v6 = *((_DWORD *)this + 77);
  if ( v6 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
    *((_DWORD *)this + 77) = 0;
  }
  std::vector<ModelFrame *>::clear((char *)this + 208);
  std::vector<ModelFrame *>::clear((char *)this + 224);
  for ( j = 0; ; ++j )
  {
    v8 = *((_DWORD *)this + 61);
    if ( !v8 || j >= (int)(*((_DWORD *)this + 62) - v8) >> 2 )
      break;
    v9 = *((_DWORD *)this + 61);
    if ( *(_DWORD *)(v9 + 4 * j) )
    {
      if ( !v9 || j >= (*((_DWORD *)this + 62) - v9) >> 2 )
        _invalid_parameter_noinfo();
      v10 = *(void **)(*((_DWORD *)this + 61) + 4 * j);
      if ( v10 )
      {
        sub_10016B58(v17, v18);
        operator delete(v10);
      }
      v11 = *((_DWORD *)this + 61);
      if ( !v11 || j >= (*((_DWORD *)this + 62) - v11) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 61) + 4 * j) = 0;
    }
  }
  v12 = (char *)*((_DWORD *)this + 62);
  if ( v8 > (unsigned int)v12 )
    _invalid_parameter_noinfo();
  v13 = (char *)*((_DWORD *)this + 61);
  if ( (unsigned int)v13 > *((_DWORD *)this + 62) )
    _invalid_parameter_noinfo();
  if ( v13 != v12 )
  {
    v14 = (*((_DWORD *)this + 62) - (int)v12) >> 2;
    v15 = &v13[4 * v14];
    if ( v14 > 0 )
      memmove_s(v13, 4 * v14, v12, 4 * v14);
    *((_DWORD *)this + 62) = v15;
  }
  if ( *((_DWORD *)this + 99) )
  {
    v16 = AudioDevice::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 20))(v16, *((_DWORD *)this + 99));
  }
  GameClient::WorldObject::UnloadResource(this);
}
