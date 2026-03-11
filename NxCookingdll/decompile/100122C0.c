/*
 * func-name: sub_100122C0
 * func-address: 0x100122c0
 * callers: 0x100126b0
 * callees: 0x1000fdd0, 0x10010c70, 0x10014910, 0x10014950, 0x10014b50, 0x10014d60, 0x10014da0, 0x10014f90, 0x10015020, 0x100358bf, 0x100359ff
 */

char __thiscall sub_100122C0(unsigned int *this, char *FileName, int a3)
{
  FILE *v4; // eax
  unsigned int i; // eax
  int v6; // esi
  int (__thiscall ***v7)(_DWORD, int, int); // eax
  int v9; // edi
  unsigned __int8 v10; // al
  bool v11; // cl
  char v12; // al
  int v13; // ebp
  int v14; // edi
  unsigned __int8 v15; // al
  BOOL v16; // ecx
  int v17; // ebp
  unsigned int v18; // eax
  unsigned int j; // ecx
  int v20; // edx
  unsigned int k; // edi
  unsigned __int8 v22; // al
  bool v23; // cl
  int v24; // eax
  _DWORD v25[4]; // [esp+8h] [ebp-10h] BYREF

  if ( FileName )
  {
    if ( !strlen(FileName) )
      return 0;
    v4 = fopen(FileName, "rb");
    if ( !v4 )
      return 0;
    fclose(v4);
  }
  sub_1000FDD0();
  for ( i = 0; i < this[26]; ++i )
    *(_DWORD *)(this[27] + 4 * i) = -1;
  v6 = a3;
  if ( !a3 )
  {
    v7 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
    if ( (**v7)(v7, 28, 1) )
      v6 = sub_10014F90(FileName);
    else
      v6 = 0;
    sub_10014DA0(0);
  }
  v9 = 0;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v6 + 24) )
    {
      *(_BYTE *)(v6 + 25) = sub_10014D60(v6);
      *(_BYTE *)(v6 + 24) = 0x80;
    }
    v10 = *(_BYTE *)(v6 + 24);
    v11 = (v10 & *(_BYTE *)(v6 + 25)) != 0;
    v12 = v10 >> 1;
    *(_BYTE *)(v6 + 24) = v12;
    if ( !v11 )
    {
      v13 = 32;
      v9 = 0;
      do
      {
        --v13;
        v14 = 2 * v9;
        if ( !v12 )
        {
          *(_BYTE *)(v6 + 25) = sub_10014D60(v6);
          *(_BYTE *)(v6 + 24) = 0x80;
        }
        v15 = *(_BYTE *)(v6 + 24);
        v16 = (v15 & *(_BYTE *)(v6 + 25)) != 0;
        v12 = v15 >> 1;
        v9 = v16 | v14;
        *(_BYTE *)(v6 + 24) = v12;
      }
      while ( v13 );
    }
    v17 = v9++;
    if ( v17 == -1 )
      break;
    sub_10014950(v25);
    v18 = sub_10010C70(v6, v25, this[22]);
    for ( j = 0; j < v18; *(_DWORD *)(this[27] + 4 * v20) = v17 )
      v20 = *(_DWORD *)(v25[2] + 4 * j++);
    sub_10014B50(v25);
  }
  for ( k = 0; k < this[26]; ++k )
  {
    if ( !*(_BYTE *)(v6 + 24) )
    {
      *(_BYTE *)(v6 + 25) = sub_10014D60(v6);
      *(_BYTE *)(v6 + 24) = 0x80;
    }
    v22 = *(_BYTE *)(v6 + 24);
    v23 = (v22 & *(_BYTE *)(v6 + 25)) != 0;
    *(_BYTE *)(v6 + 24) = v22 >> 1;
    if ( !v23 )
      *(_DWORD *)(this[27] + 4 * k) |= 0x80000000;
  }
  if ( !a3 )
  {
    sub_10015020(v6);
    v24 = sub_10014910();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 12))(v24, v6);
  }
  return 1;
}
