/*
 * func-name: sub_1002FC50
 * func-address: 0x1002fc50
 * callers: 0x10024be0
 * callees: 0x10001050, 0x10001160, 0x1000fba0, 0x10013120, 0x10013150, 0x100131a0, 0x10013320, 0x10013370, 0x100133e0, 0x10013570, 0x100135a0, 0x10024570, 0x1002df90, 0x1002e520, 0x1002ecc0, 0x1002f9d0, 0x100313a0
 */

char __thiscall sub_1002FC50(int this, int a2)
{
  char v3; // al
  int *v4; // edi
  char v5; // bp
  char result; // al
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int *v9; // ecx
  unsigned int i; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 *v13; // eax
  unsigned int *v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ecx
  float *v18; // eax
  int v19; // ebx
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // ecx
  int v23; // [esp+24h] [ebp-4h]

  v3 = NxPlatformMismatch(this);
  v4 = (int *)a2;
  LOBYTE(v23) = v3;
  v5 = v3;
  result = sub_100133E0(77, 69, 83, 72, dword_100568DC, v3, a2);
  if ( !result )
    return result;
  v7 = *(_DWORD *)(this + 80) != 0;
  if ( *(_DWORD *)(this + 84) )
    v7 |= 2u;
  if ( (*(_BYTE *)(this + 96) & 4) != 0 )
    v7 |= 4u;
  v8 = 0;
  if ( !*(_DWORD *)(this + 8) )
    goto LABEL_16;
  v9 = (unsigned int *)(*(_DWORD *)(this + 16) + 8);
  a2 = *(_DWORD *)(this + 8);
  do
  {
    if ( *(v9 - 2) > v8 )
      v8 = *(v9 - 2);
    if ( *(v9 - 1) > v8 )
      v8 = *(v9 - 1);
    if ( *v9 > v8 )
      v8 = *v9;
    v9 += 3;
    --a2;
  }
  while ( a2 );
  if ( v8 > 0xFF )
  {
    if ( v8 <= 0xFFFF )
      v7 |= 0x10u;
  }
  else
  {
LABEL_16:
    v7 |= 8u;
  }
  sub_10013150(v7, v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 100)), v23, (int)v4);
  sub_10013150(*(_DWORD *)(this + 176), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 180)), v23, (int)v4);
  sub_10013150(*(_DWORD *)(this + 4), v23, (int)v4);
  sub_10013150(*(_DWORD *)(this + 8), v23, (int)v4);
  sub_10013370(*(float **)(this + 12), 3 * *(_DWORD *)(this + 4), v23, (int)v4);
  if ( (v7 & 8) != 0 )
  {
    a2 = *(_DWORD *)(this + 16);
    for ( i = 0; i < 3 * *(_DWORD *)(this + 8); ++i )
      (*(void (__thiscall **)(int *, _DWORD))(*v4 + 28))(v4, *(unsigned __int8 *)(a2 + 4 * i));
  }
  else
  {
    v11 = *(_DWORD *)(this + 8);
    if ( (v7 & 0x10) != 0 )
    {
      v12 = 0;
      a2 = *(_DWORD *)(this + 16);
      if ( 3 * v11 )
      {
        do
          sub_10013120(*(unsigned __int16 *)(a2 + 4 * v12++), v23, (int)v4);
        while ( v12 < 3 * *(_DWORD *)(this + 8) );
      }
    }
    else
    {
      sub_10013370(*(float **)(this + 16), 3 * v11, v23, (int)v4);
    }
  }
  v13 = *(unsigned __int16 **)(this + 80);
  if ( v13 )
    sub_10013320(v13, *(_DWORD *)(this + 8), v23, (int)v4);
  v14 = *(unsigned int **)(this + 84);
  if ( v14 )
  {
    v15 = sub_10013570(v14, *(_DWORD *)(this + 8));
    sub_10013150(v15, v23, (int)v4);
    sub_100135A0(v15, *(_DWORD *)(this + 8), *(float **)(this + 84), (int)v4, v23);
  }
  sub_10013150(*(_DWORD *)(this + 28), v23, (int)v4);
  sub_10013150(*(_DWORD *)(this + 32), v23, (int)v4);
  if ( *(_DWORD *)(this + 28) )
    sub_10013320(*(unsigned __int16 **)(this + 36), *(_DWORD *)(this + 8), v23, (int)v4);
  v16 = *(_DWORD *)(this + 40);
  if ( *(_DWORD *)(this + 32) >= 0x100u )
  {
    if ( v16 )
    {
      v17 = 2 * *(_DWORD *)(this + 8);
      goto LABEL_39;
    }
  }
  else if ( v16 )
  {
    v17 = *(_DWORD *)(this + 8);
LABEL_39:
    (*(void (__thiscall **)(int *, int, int))(*v4 + 48))(v4, v16, v17);
  }
  sub_1002E520(*(_DWORD *)(this + 48), v23, v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 168)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 152)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 156)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 160)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 164)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 128)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 132)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 136)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 140)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 144)), v23, (int)v4);
  sub_100131A0(COERCE_INT(*(float *)(this + 148)), v23, (int)v4);
  v18 = sub_1002F9D0(this);
  v19 = (int)v18;
  if ( v18 )
  {
    sub_100131A0(COERCE_INT(*v18), v5, (int)v4);
    sub_10013370((float *)(v19 + 4), 9, v23, (int)v4);
    sub_10013370((float *)(v19 + 40), 3, v23, (int)v4);
  }
  else
  {
    sub_100131A0(COERCE_INT(-1.0), v5, (int)v4);
  }
  if ( *(_DWORD *)(this + 44) )
  {
    if ( !*(_DWORD *)(this + 92) )
      sub_1000FBA0((_DWORD *)(this + 4), v23);
    v19 = *(_DWORD *)(this + 92);
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 8) != *(_DWORD *)(this + 8)
        && !byte_1005B483
        && (!dword_100580A4
         || sub_10001160(
              (_DWORD *)dword_100580A4,
              107,
              (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\TriangleMeshBuilder.cpp",
              216,
              &byte_1005B483,
              "EL->GetNbFaces()==mesh.getNumTriangles()",
              0)) )
      {
        __debugbreak();
      }
      v20 = *(_DWORD *)(v19 + 8);
      if ( v20 == *(_DWORD *)(this + 8) )
      {
        v21 = 0;
        if ( v20 )
        {
          a2 = 0;
          do
          {
            v22 = (int *)(a2 + *(_DWORD *)(v19 + 12));
            if ( *v22 < 0 )
              *(_BYTE *)(v21 + *(_DWORD *)(this + 44)) |= 8u;
            if ( v22[1] < 0 )
              *(_BYTE *)(v21 + *(_DWORD *)(this + 44)) |= 0x10u;
            if ( v22[2] < 0 )
              *(_BYTE *)(*(_DWORD *)(this + 44) + v21) |= 0x20u;
            a2 += 12;
            ++v21;
          }
          while ( v21 < *(_DWORD *)(v19 + 8) );
        }
      }
    }
    sub_10013150(*(_DWORD *)(this + 8), v23, (int)v4);
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v4 + 48))(v4, *(_DWORD *)(this + 44), *(_DWORD *)(this + 8));
  }
  else
  {
    sub_10013150(0, v23, (int)v4);
  }
  if ( (*(_BYTE *)(this + 96) & 4) != 0 )
  {
    if ( *(_DWORD *)(this + 176) != 255 )
    {
      unknown_libname_1(this + 4);
      sub_1002ECC0((int **)&a2, v19, v23, (int)v4);
      NxReportCooking();
    }
    sub_100313A0(
      *(_DWORD *)(this + 8),
      *(_DWORD *)(this + 4),
      *(_DWORD *)(this + 16),
      *(_DWORD *)(this + 12),
      *(_DWORD *)(this + 28),
      *(_DWORD *)(this + 32),
      *(_DWORD *)(this + 36),
      *(_DWORD *)(this + 40),
      *(_DWORD *)(this + 40),
      32,
      32,
      0x10000,
      (int)v4);
  }
  return 1;
}
