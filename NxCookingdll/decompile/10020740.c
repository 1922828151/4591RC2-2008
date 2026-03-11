/*
 * func-name: sub_10020740
 * func-address: 0x10020740
 * callers: 0x10020e00
 * callees: 0x1000ef10, 0x1000f320, 0x1000f330, 0x1000f360, 0x10013710, 0x10014950, 0x100149b0, 0x10014b50, 0x1001fc00, 0x100250d0, 0x10034ca4, 0x10034f10, 0x10035300, 0x10035700
 */

char __cdecl sub_10020740(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  size_t v6; // edi
  int v7; // eax
  void *v9; // esp
  _BYTE *v10; // ebx
  unsigned int i; // esi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // esi
  int v17; // esi
  void *v18; // edi
  int v19; // esi
  unsigned int v20; // esi
  void *v21; // eax
  unsigned int v22; // esi
  const void *v23; // edi
  char v24; // bl
  _BYTE v25[12]; // [esp+0h] [ebp-70h] BYREF
  _DWORD v26[5]; // [esp+Ch] [ebp-64h] BYREF
  float v27; // [esp+20h] [ebp-50h] BYREF
  int v28; // [esp+24h] [ebp-4Ch]
  void *Src; // [esp+28h] [ebp-48h]
  int v30; // [esp+30h] [ebp-40h]
  int v31; // [esp+34h] [ebp-3Ch] BYREF
  unsigned int v32; // [esp+38h] [ebp-38h]
  void *v33; // [esp+3Ch] [ebp-34h]
  unsigned int v34; // [esp+44h] [ebp-2Ch]
  _BYTE *v35; // [esp+48h] [ebp-28h]
  int v36; // [esp+4Ch] [ebp-24h]
  size_t v37; // [esp+50h] [ebp-20h]
  int v38; // [esp+54h] [ebp-1Ch] BYREF
  int v39; // [esp+58h] [ebp-18h]
  int v40; // [esp+5Ch] [ebp-14h] BYREF
  int v41; // [esp+60h] [ebp-10h]
  int v42; // [esp+64h] [ebp-Ch]

  v4 = *(_DWORD **)(a3 + 4);
  v5 = v4[4];
  v6 = v4[1];
  v7 = v4[2];
  *(float *)&v26[4] = 0.0049999999;
  v26[3] = v5;
  v37 = v6;
  v30 = v7;
  v26[0] = v6;
  v26[1] = v7;
  v26[2] = 0;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)&v38);
  if ( sub_1000F360((unsigned int *)&v38, (int)v26)
    && !sub_1000EF10(&v38)
    && (v9 = alloca(v6), v10 = v25, (v35 = v25) != 0) )
  {
    memset(v25, 0, v6);
    *a1 = 0;
    while ( 1 )
    {
      for ( i = 0; i < v6; ++i )
      {
        if ( !v10[i] )
          break;
      }
      if ( i == v6 )
        break;
      sub_10014950((float *)&v31);
      sub_1001FC00(&v31, v39, i, (int)v10);
      sub_10014950((float *)&v40);
      v12 = 0;
      v34 = 0;
      if ( v32 )
      {
        do
        {
          v13 = *((_DWORD *)v33 + v12);
          if ( v30 )
          {
            v14 = *(_DWORD *)(v30 + 12 * v13);
            v15 = *(_DWORD *)(v30 + 12 * v13 + 8);
            v36 = *(_DWORD *)(v30 + 12 * v13 + 4);
          }
          else
          {
            v14 = *(unsigned __int16 *)(6 * v13);
            v15 = *(unsigned __int16 *)(6 * v13 + 4);
            v36 = *(unsigned __int16 *)(6 * v13 + 2);
          }
          v16 = 12 * v13;
          if ( (*(_DWORD *)(12 * v13 + v39) & 0x20000000) != 0 )
          {
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v14;
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v36;
          }
          if ( (*(_DWORD *)(v16 + v39 + 4) & 0x20000000) != 0 )
          {
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v14;
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v15;
          }
          if ( (*(_DWORD *)(v16 + v39 + 8) & 0x20000000) != 0 )
          {
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v36;
            if ( v41 == v40 )
              sub_100149B0(&v40, 1);
            *(_DWORD *)(v42 + 4 * v41++) = v15;
          }
          v12 = ++v34;
        }
        while ( v34 < v32 );
        v10 = v35;
        v6 = v37;
      }
      sub_10014950(&v27);
      if ( !(unsigned __int8)sub_100250D0(&v27, &v40) )
      {
        v24 = sub_10013710(
                0,
                (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexHullBuilder.cpp",
                162);
        sub_10014B50(&v27);
        sub_10014B50((float *)&v40);
        sub_10014B50((float *)&v31);
        sub_1000F330(&v38);
        return v24;
      }
      v17 = v28;
      if ( v28 )
      {
        v18 = Src;
        if ( a2[1] == *a2 )
          sub_100149B0(a2, 1);
        v19 = v17 - 1;
        *(_DWORD *)(a2[2] + 4 * a2[1]++) = v19;
        if ( v18 && v19 )
        {
          if ( (unsigned int)(v19 + a2[1]) > *a2 )
            sub_100149B0(a2, v19);
          memcpy_0((void *)(a2[2] + 4 * a2[1]), v18, 4 * v19);
          a2[1] += v19;
        }
        ++*a1;
        if ( a4 )
        {
          v20 = v32;
          if ( a4[1] == *a4 )
            sub_100149B0(a4, 1);
          *(_DWORD *)(a4[2] + 4 * a4[1]) = v20;
          v21 = v33;
          ++a4[1];
          v22 = v32;
          v23 = v21;
          if ( v21 && v32 )
          {
            if ( v32 + a4[1] > *a4 )
              sub_100149B0(a4, v32);
            memcpy_0((void *)(a4[2] + 4 * a4[1]), v23, 4 * v22);
            a4[1] += v22;
          }
        }
        v6 = v37;
        v10 = v35;
      }
      sub_10014B50(&v27);
      sub_10014B50((float *)&v40);
      sub_10014B50((float *)&v31);
    }
    sub_1000F330(&v38);
    return 1;
  }
  else
  {
    sub_1000F330(&v38);
    return 0;
  }
}
