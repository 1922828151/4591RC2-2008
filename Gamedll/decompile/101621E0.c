/*
 * func-name: sub_101621E0
 * func-address: 0x101621e0
 * callers: 0x1000bb6d
 * callees: 0x100084f4, 0x1000a5a1, 0x1000aff6, 0x10011135, 0x10011905, 0x100142ef, 0x102c9d50
 */

char __thiscall sub_101621E0(_DWORD **this)
{
  _DWORD *v1; // edx
  _DWORD *v2; // ebx
  _DWORD **v3; // ebp
  _BYTE *v4; // ecx
  int v5; // esi
  void *v6; // esi
  int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  _DWORD *v10; // ecx
  int v11; // edi
  char *v12; // esi
  _DWORD *v13; // ecx
  int v14; // edi
  char *v15; // edx
  _BYTE *v16; // edi
  void *v17; // edi
  unsigned int i; // esi
  void *v19; // ecx
  _DWORD *v20; // eax
  unsigned int *v21; // ebx
  GameClient::FlyweightManager *v22; // eax
  unsigned int v24; // [esp-8h] [ebp-74h]
  unsigned int v25; // [esp-4h] [ebp-70h]
  int v26[2]; // [esp+14h] [ebp-58h] BYREF
  int v27; // [esp+1Ch] [ebp-50h] BYREF
  int v28; // [esp+24h] [ebp-48h] BYREF
  int v29; // [esp+2Ch] [ebp-40h] BYREF
  void *v30; // [esp+30h] [ebp-3Ch]
  _DWORD *v31; // [esp+34h] [ebp-38h]
  int v32; // [esp+38h] [ebp-34h]
  int v33; // [esp+3Ch] [ebp-30h] BYREF
  void *v34; // [esp+40h] [ebp-2Ch]
  void *v35; // [esp+44h] [ebp-28h]
  int v36; // [esp+48h] [ebp-24h]
  int v37; // [esp+4Ch] [ebp-20h] BYREF
  void *v38; // [esp+50h] [ebp-1Ch]
  void *Source; // [esp+54h] [ebp-18h]
  int v40; // [esp+58h] [ebp-14h]
  int v41; // [esp+68h] [ebp-4h]

  v1 = 0;
  v38 = 0;
  Source = 0;
  v40 = 0;
  v41 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v2 = (_DWORD *)*this[3];
  v3 = this + 2;
  v4 = 0;
  v5 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  LOBYTE(v41) = 2;
  while ( v2 != v3[1] )
  {
    if ( v4 && ((char *)v1 - v4) >> 2 < (unsigned int)((v5 - (int)v4) >> 2) )
    {
      *v1++ = v2[3];
      v31 = v1;
    }
    else
    {
      v6 = v1;
      if ( v4 > (_BYTE *)v1 )
        _invalid_parameter_noinfo();
      sub_100142EF((int)v26, (int)&v29, v6, (int)(v2 + 3));
      v1 = v31;
    }
    if ( v2 == v3[1] )
    {
      _invalid_parameter_noinfo();
      v1 = v31;
    }
    v2 = (_DWORD *)*v2;
    v5 = v32;
    v4 = v30;
  }
  v7 = (int)v1;
  if ( v4 > (_BYTE *)v1 )
  {
    _invalid_parameter_noinfo();
    v1 = v31;
    v4 = v30;
  }
  v8 = (int)v4;
  if ( v4 > (_BYTE *)v1 )
    _invalid_parameter_noinfo();
  sub_10011135(v8, v7, (v7 - v8) >> 2, (int)sub_1000154B);
  v9 = 0;
  if ( sub_10011905() )
  {
    do
    {
      v10 = v30;
      if ( !v30 || v9 >= ((char *)v31 - (_BYTE *)v30) >> 2 )
      {
        _invalid_parameter_noinfo();
        v10 = v30;
      }
      v11 = *(_DWORD *)(v10[v9] + 12);
      v12 = (char *)Source;
      v26[0] = v11;
      if ( v38 && ((_BYTE *)Source - (_BYTE *)v38) >> 2 < (unsigned int)((v40 - (int)v38) >> 2) )
      {
        *(_DWORD *)Source = v11;
        Source = v12 + 4;
      }
      else
      {
        if ( v38 > Source )
          _invalid_parameter_noinfo();
        sub_1000A5A1((int)&v27, (int)&v37, v12, (int)v26);
      }
      v13 = v30;
      if ( !v30 || v9 >= ((char *)v31 - (_BYTE *)v30) >> 2 )
      {
        _invalid_parameter_noinfo();
        v13 = v30;
      }
      v14 = *(_DWORD *)(v13[v9] + 4);
      v15 = (char *)v35;
      v26[0] = v14;
      if ( v34 && ((_BYTE *)v35 - (_BYTE *)v34) >> 2 < (unsigned int)((v36 - (int)v34) >> 2) )
      {
        *(_DWORD *)v35 = v14;
        v16 = v15 + 4;
        v35 = v15 + 4;
      }
      else
      {
        v17 = v35;
        if ( v34 > v35 )
          _invalid_parameter_noinfo();
        sub_1000A5A1((int)&v28, (int)&v33, v17, (int)v26);
        v16 = v35;
      }
      ++v9;
    }
    while ( v9 < sub_10011905() );
  }
  else
  {
    v16 = v35;
  }
  for ( i = 0; ; ++i )
  {
    v19 = v38;
    if ( !v38 || i >= ((_BYTE *)Source - (_BYTE *)v38) >> 2 )
      break;
    v20 = v34;
    v21 = (unsigned int *)((char *)v38 + 4 * i);
    if ( !v34 || i >= (v16 - (_BYTE *)v34) >> 2 )
    {
      _invalid_parameter_noinfo();
      v20 = v34;
    }
    v25 = *v21;
    v24 = v20[i];
    v22 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v22, v24, v25);
    v16 = v35;
  }
  if ( v30 )
  {
    operator delete(v30);
    v19 = v38;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( v34 )
  {
    operator delete(v34);
    v19 = v38;
  }
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( v19 )
    operator delete(v19);
  return 1;
}
