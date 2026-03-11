/*
 * func-name: sub_10023A90
 * func-address: 0x10023a90
 * callers: 0x100247c0
 * callees: 0x1000d700, 0x10023610, 0x10024560, 0x10036680
 */

char __thiscall sub_10023A90(int this, float a2)
{
  int *v3; // eax
  int v4; // ecx
  double v5; // st7
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // ebp
  unsigned int v9; // edx
  int v10; // eax
  double v11; // st6
  int v12; // eax
  unsigned int v13; // edi
  double v14; // st6
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // edx
  int v19; // eax
  double v20; // st6
  int v21; // eax
  unsigned int v22; // edi
  double v23; // st6
  long double v24; // st7
  double v25; // st6
  double v26; // st7
  int v28; // [esp+0h] [ebp-4h]

  if ( this == -4 )
    return 0;
  v3 = *(int **)(this + 44);
  if ( !v3 )
    return 0;
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v5 = a2;
  v6 = 0;
  *(float *)(v4 + 20) = *(float *)(v4 + 20) * a2;
  *(float *)(v4 + 24) = *(float *)(v4 + 24) * a2;
  *(float *)(v4 + 28) = *(float *)(v4 + 28) * a2;
  v7 = *(_DWORD *)(v4 + 8);
  v8 = *(_DWORD *)(v4 + 12);
  if ( v7 >= 4 )
  {
    v9 = ((unsigned int)(v7 - 4) >> 2) + 1;
    v10 = v8 + 20;
    v6 = 4 * v9;
    do
    {
      v11 = *(float *)(v10 - 20);
      v10 += 48;
      --v9;
      *(float *)(v10 - 68) = v11 * v5;
      *(float *)(v10 - 64) = v5 * *(float *)(v10 - 64);
      *(float *)(v10 - 60) = *(float *)(v10 - 60) * v5;
      *(float *)(v10 - 56) = *(float *)(v10 - 56) * v5;
      *(float *)(v10 - 52) = *(float *)(v10 - 52) * v5;
      *(float *)(v10 - 48) = *(float *)(v10 - 48) * v5;
      *(float *)(v10 - 44) = *(float *)(v10 - 44) * v5;
      *(float *)(v10 - 40) = v5 * *(float *)(v10 - 40);
      *(float *)(v10 - 36) = *(float *)(v10 - 36) * v5;
      *(float *)(v10 - 32) = v5 * *(float *)(v10 - 32);
      *(float *)(v10 - 28) = *(float *)(v10 - 28) * v5;
      *(float *)(v10 - 24) = *(float *)(v10 - 24) * v5;
    }
    while ( v9 );
  }
  if ( v6 < v7 )
  {
    v12 = v8 + 12 * v6 + 8;
    v13 = v7 - v6;
    do
    {
      v14 = *(float *)(v12 - 8);
      v12 += 12;
      --v13;
      *(float *)(v12 - 20) = v14 * v5;
      *(float *)(v12 - 16) = *(float *)(v12 - 16) * v5;
      *(float *)(v12 - 12) = *(float *)(v12 - 12) * v5;
    }
    while ( v13 );
  }
  v15 = *(_DWORD *)(v4 + 32);
  v16 = *(_DWORD *)(v4 + 36);
  v17 = 0;
  if ( v15 >= 4 )
  {
    v18 = ((unsigned int)(v15 - 4) >> 2) + 1;
    v19 = v16 + 96;
    v17 = 4 * v18;
    do
    {
      v20 = *(float *)(v19 - 72);
      v19 += 144;
      --v18;
      *(float *)(v19 - 216) = v20 * v5;
      *(float *)(v19 - 212) = *(float *)(v19 - 212) * v5;
      *(float *)(v19 - 208) = *(float *)(v19 - 208) * v5;
      *(float *)(v19 - 180) = *(float *)(v19 - 180) * v5;
      *(float *)(v19 - 176) = v5 * *(float *)(v19 - 176);
      *(float *)(v19 - 172) = *(float *)(v19 - 172) * v5;
      *(float *)(v19 - 144) = *(float *)(v19 - 144) * v5;
      *(float *)(v19 - 140) = *(float *)(v19 - 140) * v5;
      *(float *)(v19 - 136) = *(float *)(v19 - 136) * v5;
      *(float *)(v19 - 108) = *(float *)(v19 - 108) * v5;
      *(float *)(v19 - 104) = v5 * *(float *)(v19 - 104);
      *(float *)(v19 - 100) = *(float *)(v19 - 100) * v5;
    }
    while ( v18 );
  }
  if ( v17 < v15 )
  {
    v21 = v16 + 36 * v17 + 28;
    v22 = v15 - v17;
    do
    {
      v23 = *(float *)(v21 - 4);
      v21 += 36;
      --v22;
      *(float *)(v21 - 40) = v23 * v5;
      *(float *)(v21 - 36) = *(float *)(v21 - 36) * v5;
      *(float *)(v21 - 32) = *(float *)(v21 - 32) * v5;
    }
    while ( v22 );
  }
  *(float *)(this + 112) = *(float *)(this + 112) * v5;
  *(float *)(this + 116) = *(float *)(this + 116) * v5;
  *(float *)(this + 120) = *(float *)(this + 120) * v5;
  *(float *)(this + 124) = *(float *)(this + 124) * v5;
  *(float *)(this + 128) = *(float *)(this + 128) * v5;
  *(float *)(this + 132) = v5 * *(float *)(this + 132);
  v24 = pow(2.0, -22.0);
  v25 = *(float *)(this + 124);
  *(float *)(this + 152) = *(float *)(this + 124);
  if ( v25 <= *(float *)(this + 128) )
    v25 = *(float *)(this + 128);
  *(float *)(this + 152) = v25;
  if ( v25 <= *(float *)(this + 132) )
    v25 = *(float *)(this + 132);
  *(float *)(this + 152) = v24 * v25;
  *(float *)(this + 136) = *(float *)(this + 136) * a2;
  *(float *)(this + 140) = a2 * *(float *)(this + 140);
  *(float *)(this + 144) = a2 * *(float *)(this + 144);
  *(float *)(this + 148) = a2 * *(float *)(this + 148);
  *(float *)(this + 332) = *(float *)(this + 332) * a2;
  *(float *)(this + 336) = a2 * *(float *)(this + 336);
  *(float *)(this + 340) = a2 * *(float *)(this + 340);
  v26 = a2 * a2;
  *(float *)(this + 296) = v26 * *(float *)(this + 296);
  *(float *)(this + 300) = *(float *)(this + 300) * v26;
  *(float *)(this + 304) = *(float *)(this + 304) * v26;
  *(float *)(this + 308) = *(float *)(this + 308) * v26;
  *(float *)(this + 312) = *(float *)(this + 312) * v26;
  *(float *)(this + 316) = *(float *)(this + 316) * v26;
  *(float *)(this + 320) = *(float *)(this + 320) * v26;
  *(float *)(this + 324) = *(float *)(this + 324) * v26;
  *(float *)(this + 328) = v26 * *(float *)(this + 328);
  if ( *(_BYTE *)(NxGetCookingParams(v16) + 8) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 16))(this + 8) )
    {
      sub_1000D700(
        4,
        (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
        727,
        0,
        "Failed to refit Opcode model.",
        v28);
      return 0;
    }
  }
  else if ( !sub_10023610((int *)this) )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      735,
      0,
      "Failed to rebuild Opcode model.",
      v28);
    return 0;
  }
  return 1;
}
