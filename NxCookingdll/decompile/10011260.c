/*
 * func-name: sub_10011260
 * func-address: 0x10011260
 * callers: 0x100126b0, 0x10014090, 0x100140f0
 * callees: 0x1000fdd0, 0x1000fe90, 0x10014950, 0x100149b0, 0x10014b50, 0x10014c40, 0x10014f50, 0x10015020, 0x10015160, 0x10015320, 0x10015980, 0x100159a0, 0x10015a80
 */

char __thiscall sub_10011260(unsigned int *this, char *FileName, _BYTE *a3)
{
  int v4; // edi
  unsigned int v5; // eax
  _BYTE *v6; // esi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // ebp
  int v10; // eax
  char v11; // al
  bool v12; // zf
  unsigned int v13; // edi
  char v14; // cl
  char v15; // al
  int v16; // edi
  char v17; // al
  char v18; // al
  unsigned int v19; // edi
  char v20; // cl
  char v21; // al
  unsigned int v22; // edi
  char v23; // cl
  char v24; // al
  unsigned int j; // edi
  int v26; // eax
  char v27; // cl
  char v28; // cl
  unsigned int v30; // [esp-Ch] [ebp-68h]
  char v31; // [esp-Ch] [ebp-68h]
  char v32; // [esp-Ch] [ebp-68h]
  char v33; // [esp-8h] [ebp-64h]
  unsigned int v34; // [esp+8h] [ebp-54h]
  int v35; // [esp+Ch] [ebp-50h]
  int i; // [esp+10h] [ebp-4Ch]
  int v37; // [esp+14h] [ebp-48h]
  int v38; // [esp+18h] [ebp-44h] BYREF
  int v39; // [esp+1Ch] [ebp-40h]
  int v40; // [esp+20h] [ebp-3Ch]
  _BYTE v41[24]; // [esp+28h] [ebp-34h] BYREF
  _BYTE v42[28]; // [esp+40h] [ebp-1Ch] BYREF
  int v43; // [esp+64h] [ebp+8h]

  sub_1000FDD0();
  v4 = (*(int (__stdcall **)(unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(4 * this[26], 1);
  v5 = 0;
  for ( i = v4; v5 < this[26]; ++v5 )
    *(_DWORD *)(v4 + 4 * v5) = *(_DWORD *)(this[27] + 4 * v5) & 0x3FFFFFFF;
  sub_10015980(v41);
  v35 = *(_DWORD *)(sub_10015A80(v4, this[26], 1) + 4);
  sub_10014950(&v38);
  sub_10014F50(0x1000u, 0);
  v6 = a3;
  if ( !a3 )
    v6 = v42;
  v30 = this[22];
  sub_10014C40(80);
  sub_10014C40(77);
  sub_10014C40(65);
  sub_10014C40(80);
  sub_10015160(4);
  sub_10015160(v30);
  v7 = 0;
  v8 = 0;
  v9 = 0x3FFFFFFF;
  v43 = 0;
  v34 = 0;
  if ( !this[26] )
    goto LABEL_30;
  do
  {
    v10 = *(_DWORD *)(v4 + 4 * *(_DWORD *)(v35 + 4 * v8));
    v37 = v10;
    if ( v10 != 0x3FFFFFFF )
    {
      if ( v10 != v9 )
      {
        if ( v9 != 0x3FFFFFFF )
        {
          ++v6[24];
          if ( v9 == v7 )
          {
            v11 = (2 * v6[25]) | 1;
            v12 = v6[24] == 8;
            v6[25] = v11;
            if ( v12 )
            {
              v6[24] = 0;
              sub_10014C40(v11);
            }
          }
          else
          {
            v6[25] *= 2;
            if ( v6[24] == 8 )
            {
              v31 = v6[25];
              v6[24] = 0;
              sub_10014C40(v31);
            }
            v13 = 0x80000000;
            do
            {
              v14 = v6[25];
              ++v6[24];
              v15 = (2 * v14) | ((v13 & v9) != 0);
              v12 = v6[24] == 8;
              v6[25] = v15;
              if ( v12 )
              {
                v6[24] = 0;
                sub_10014C40(v15);
              }
              v13 >>= 1;
            }
            while ( v13 );
            v43 = v9;
          }
          sub_1000FE90((int)&v38, (int)v6, this[22]);
          v8 = v34;
          v10 = v37;
          ++v43;
        }
        if ( v39 )
          v39 = 0;
        v9 = v10;
      }
      v16 = *(_DWORD *)(v35 + 4 * v8);
      if ( v39 == v38 )
      {
        sub_100149B0(1);
        v8 = v34;
      }
      *(_DWORD *)(v40 + 4 * v39++) = v16;
      v4 = i;
      v7 = v43;
    }
    v34 = ++v8;
  }
  while ( v8 < this[26] );
  if ( v9 == v7 )
  {
    v17 = v6[25];
    ++v6[24];
    v18 = (2 * v17) | 1;
    v12 = v6[24] == 8;
    v6[25] = v18;
    if ( v12 )
    {
      v6[24] = 0;
      sub_10014C40(v18);
    }
  }
  else
  {
LABEL_30:
    v6[25] *= 2;
    if ( ++v6[24] == 8 )
    {
      v32 = v6[25];
      v6[24] = 0;
      sub_10014C40(v32);
    }
    v19 = 0x80000000;
    do
    {
      v20 = v6[25];
      ++v6[24];
      v21 = (2 * v20) | ((v19 & v9) != 0);
      v12 = v6[24] == 8;
      v6[25] = v21;
      if ( v12 )
      {
        v6[24] = 0;
        sub_10014C40(v21);
      }
      v19 >>= 1;
    }
    while ( v19 );
  }
  sub_1000FE90((int)&v38, (int)v6, this[22]);
  v6[25] *= 2;
  if ( ++v6[24] == 8 )
  {
    v33 = v6[25];
    v6[24] = 0;
    sub_10014C40(v33);
  }
  v22 = 0x80000000;
  do
  {
    v23 = v6[25];
    ++v6[24];
    v24 = (2 * v23) | (v22 != 0);
    v12 = v6[24] == 8;
    v6[25] = v24;
    if ( v12 )
    {
      v6[24] = 0;
      sub_10014C40(v24);
    }
    v22 >>= 1;
  }
  while ( v22 );
  for ( j = 0; j < this[26]; ++j )
  {
    v26 = *(_DWORD *)(this[27] + 4 * j);
    v27 = v6[25];
    ++v6[24];
    v28 = (v26 >= 0) | (2 * v27);
    v12 = v6[24] == 8;
    v6[25] = v28;
    if ( v12 )
    {
      v6[24] = 0;
      sub_10014C40(v28);
    }
  }
  if ( FileName )
    sub_10015320(FileName, 0);
  if ( i )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, i);
  sub_10015020(v42);
  sub_10014B50(&v38);
  sub_100159A0(v41);
  return 1;
}
