/*
 * func-name: sub_1002DB30
 * func-address: 0x1002db30
 * callers: 0x10020b00, 0x1002e590
 * callees: 0x10014910, 0x100149b0, 0x1002c060, 0x1002c730, 0x1002c850, 0x1002cc30, 0x1002d0c0, 0x1002d920, 0x10034f10
 */

char __thiscall sub_1002DB30(int this, int a2)
{
  unsigned int v3; // ebx
  int (__stdcall ***v5)(size_t, int); // eax
  void *v6; // eax
  int v7; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ebp
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ebp
  int v16; // eax
  _DWORD *v17; // ebp
  int *v18; // ebp
  int (__stdcall ***v19)(size_t, int); // eax
  int v20; // ebx
  unsigned int i; // eax
  unsigned int j; // ecx
  int v23; // eax
  int (__stdcall ***v24)(size_t, int); // eax
  unsigned int v25; // eax
  char v26; // bl
  int v27; // ecx
  int v28; // [esp+8h] [ebp-2Ch]
  int v29; // [esp+Ch] [ebp-28h]
  int v30; // [esp+10h] [ebp-24h]
  _DWORD *v31; // [esp+14h] [ebp-20h]
  int v32; // [esp+18h] [ebp-1Ch]
  int v33; // [esp+1Ch] [ebp-18h]
  unsigned int v34; // [esp+20h] [ebp-14h]
  int v35; // [esp+24h] [ebp-10h]
  int v36; // [esp+28h] [ebp-Ch]
  int v37; // [esp+2Ch] [ebp-8h]
  int v38; // [esp+30h] [ebp-4h]
  int v39; // [esp+38h] [ebp+4h]

  v3 = 0;
  if ( !*(_DWORD *)(this + 224) )
    return 0;
  v5 = sub_10014910();
  v6 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v5)(
                 v5,
                 4 * *(_DWORD *)(this + 224),
                 0);
  *(_DWORD *)(this + 256) = v6;
  if ( !v6 )
    return 0;
  memset(v6, 255, 4 * *(_DWORD *)(this + 224));
  *(_DWORD *)(this + 260) = 0;
  if ( !(unsigned __int8)sub_1002D0C0(this)
    || !sub_1002C060(this)
    || !sub_1002C730((_DWORD *)this)
    || !sub_1002C850(this)
    || !sub_1002CC30(this)
    || !sub_1002D920((_DWORD *)this) )
  {
    return 0;
  }
  v7 = *(_DWORD *)(this + 20);
  v38 = *(_DWORD *)(this + 164);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(this + 8);
  v9 = *(_DWORD *)(this + 24);
  *(_DWORD *)(a2 + 16) = v9;
  v37 = v7;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(this + 152);
  v10 = *(_DWORD *)(this + 184);
  *(_DWORD *)(a2 + 24) = v10;
  v36 = v9;
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(this + 40);
  *(_DWORD *)(a2 + 60) = *(_DWORD *)(this + 88);
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(this + 56);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(this + 104);
  *(_BYTE *)(a2 + 84) = *(_BYTE *)(this + 281);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(this + 72);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(this + 120);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(this + 136);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(this + 168);
  v11 = *(_DWORD *)(this + 180) / 5u;
  v12 = -1;
  v34 = v11;
  v39 = -1;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  if ( v11 )
  {
    v13 = (_DWORD *)(v10 + 12);
    v31 = v13;
    do
    {
      v14 = *(v13 - 3);
      v35 = v14;
      if ( v14 != v12 )
      {
        if ( v12 != -1 )
        {
          v15 = (_DWORD *)(this + 192);
          if ( *(_DWORD *)(this + 196) == *(_DWORD *)(this + 192) )
          {
            sub_100149B0((void *)(this + 192), 1);
            v12 = v39;
          }
          *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v12;
          if ( *(_DWORD *)(this + 196) == *v15 )
            sub_100149B0((void *)(this + 192), 1);
          *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v28;
          if ( *(_DWORD *)(this + 196) == *v15 )
            sub_100149B0((void *)(this + 192), 1);
          *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v29;
          if ( *(_DWORD *)(this + 196) == *v15 )
            sub_100149B0((void *)(this + 192), 1);
          *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v30;
          v11 = v34;
          v14 = v35;
          v30 = 0;
          v28 = 0;
          v29 = 0;
        }
        v39 = v14;
      }
      v29 += *v31;
      v33 += *v31;
      v16 = *(_DWORD *)(v36 + 4 * v3);
      v28 += v16;
      v32 += v16;
      ++v30;
      v12 = v39;
      ++v3;
      v13 = v31 + 5;
      v31 += 5;
    }
    while ( v3 < v11 );
  }
  v17 = (_DWORD *)(this + 192);
  if ( *(_DWORD *)(this + 196) == *(_DWORD *)(this + 192) )
  {
    sub_100149B0((void *)(this + 192), 1);
    v12 = v39;
  }
  *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v12;
  if ( *(_DWORD *)(this + 196) == *v17 )
    sub_100149B0((void *)(this + 192), 1);
  *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v28;
  if ( *(_DWORD *)(this + 196) == *v17 )
    sub_100149B0((void *)(this + 192), 1);
  *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v29;
  if ( *(_DWORD *)(this + 196) == *v17 )
    sub_100149B0((void *)(this + 192), 1);
  *(_DWORD *)(*(_DWORD *)(this + 200) + 4 * (*(_DWORD *)(this + 196))++) = v30;
  v18 = *(int **)(a2 + 80);
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(this + 196) >> 2;
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(this + 200);
  *(_DWORD *)a2 = v32;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 208);
  *(_DWORD *)(a2 + 8) = v37;
  *(_DWORD *)(a2 + 44) = v33;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(this + 212);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(this + 216);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(this + 220);
  *(_DWORD *)(a2 + 76) = v38;
  if ( v18 )
  {
    v19 = sub_10014910();
    v20 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v19)(
            v19,
            4 * *(_DWORD *)(this + 224),
            0);
    if ( !v20 )
      return 0;
    for ( i = 0; i < *(_DWORD *)(this + 260); ++i )
      *(_DWORD *)(v20 + 4 * *(_DWORD *)(*(_DWORD *)(this + 256) + 4 * i)) = i;
    for ( j = 0; j < *(_DWORD *)(this + 276); ++j )
    {
      v23 = *v18;
      for ( ++v18; v23; ++v18 )
      {
        --v23;
        *v18 = *(_DWORD *)(v20 + 4 * *v18);
      }
    }
    v24 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v24)[3])(v24, v20);
  }
  v25 = 0;
  v26 = 1;
  if ( !*(_DWORD *)(this + 224) )
    goto LABEL_49;
  v27 = *(_DWORD *)(this + 256);
  do
  {
    *(_DWORD *)(v27 + 4 * v25) = *(_DWORD *)(48 * *(_DWORD *)(v27 + 4 * v25) + *(_DWORD *)(this + 248) + 44);
    v27 = *(_DWORD *)(this + 256);
    if ( *(_DWORD *)(v27 + 4 * v25) != v25 )
      v26 = 0;
    ++v25;
  }
  while ( v25 < *(_DWORD *)(this + 224) );
  if ( !v26 )
  {
    *(_DWORD *)(a2 + 28) = v27;
    return 1;
  }
  else
  {
LABEL_49:
    *(_DWORD *)(a2 + 28) = 0;
    return 1;
  }
}
