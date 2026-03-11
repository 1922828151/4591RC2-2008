/*
 * func-name: ?_filterPacket@AsyncLoader@@IAEXAAUAsyncPacket@@ABU2@@Z
 * func-address: 0x10171950
 * callers: 0x10174d80
 * callees: 0x10015410, 0x100ee890, 0x100f2c20, 0x10137000
 */

void __thiscall AsyncLoader::_filterPacket(AsyncLoader *this, struct AsyncPacket *a2, const struct AsyncPacket *a3)
{
  unsigned int v3; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int j; // ebp
  int v12; // eax
  struct TextureManager *v13; // ebx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  int k; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax

  v3 = 0;
  for ( i = 0; ; i += 84 )
  {
    v5 = *((_DWORD *)a3 + 19);
    if ( !v5 || v3 >= (*((_DWORD *)a3 + 20) - v5) / 84 )
      break;
    v6 = *((_DWORD *)a3 + 19);
    if ( !v6 || v3 >= (*((_DWORD *)a3 + 20) - v6) / 84 )
      invalid_parameter_noinfo();
    v7 = i + *((_DWORD *)a3 + 19);
    if ( *(_DWORD *)(v7 + 24) < 0x10u )
      v8 = (const char *)(v7 + 4);
    else
      v8 = *(const char **)(v7 + 4);
    if ( !StaticModel::FindModelFromCache(v8) )
    {
      v9 = *((_DWORD *)a3 + 19);
      if ( !v9 || v3 >= (*((_DWORD *)a3 + 20) - v9) / 84 )
        invalid_parameter_noinfo();
      sub_10015410((int *)a2 + 18, i + *((_DWORD *)a3 + 19));
    }
    ++v3;
  }
  v10 = 0;
  for ( j = 0; ; j += 84 )
  {
    v12 = *((_DWORD *)a3 + 15);
    if ( !v12 || v10 >= (*((_DWORD *)a3 + 16) - v12) / 84 )
      break;
    v13 = TextureManager::Instance();
    v14 = *((_DWORD *)a3 + 15);
    if ( !v14 || v10 >= (*((_DWORD *)a3 + 16) - v14) / 84 )
      invalid_parameter_noinfo();
    if ( !(**(unsigned __int8 (__thiscall ***)(struct TextureManager *, int))v13)(v13, j + *((_DWORD *)a3 + 15)) )
    {
      v15 = *((_DWORD *)a3 + 15);
      if ( !v15 || v10 >= (*((_DWORD *)a3 + 16) - v15) / 84 )
        invalid_parameter_noinfo();
      sub_10015410((int *)a2 + 14, j + *((_DWORD *)a3 + 15));
    }
    ++v10;
  }
  v16 = 0;
  for ( k = 0; ; k += 84 )
  {
    v18 = *((_DWORD *)a3 + 27);
    if ( !v18 || v16 >= (*((_DWORD *)a3 + 28) - v18) / 84 )
      break;
    v19 = *((_DWORD *)a3 + 27);
    if ( !v19 || v16 >= (*((_DWORD *)a3 + 28) - v19) / 84 )
      invalid_parameter_noinfo();
    if ( !AnimationSet::FindAnimFromCache(k + *((_DWORD *)a3 + 27)) )
    {
      v20 = *((_DWORD *)a3 + 27);
      if ( !v20 || v16 >= (*((_DWORD *)a3 + 28) - v20) / 84 )
        invalid_parameter_noinfo();
      sub_10015410((int *)a2 + 26, k + *((_DWORD *)a3 + 27));
    }
    ++v16;
  }
}
