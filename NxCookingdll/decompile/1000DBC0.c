/*
 * func-name: sub_1000DBC0
 * func-address: 0x1000dbc0
 * callers: 0x100247c0
 * callees: 0x1000d700, 0x1000d920, 0x1000f700, 0x100130a0, 0x100131e0, 0x100134a0, 0x10014910
 */

char __thiscall sub_1000DBC0(int this, int a2)
{
  int v2; // edi
  unsigned __int8 (__thiscall *v5)(int, void ***); // edx
  double v6; // st7
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  int v12; // eax
  void (__thiscall ***v13)(_DWORD, int); // ecx
  int (__thiscall ***v14)(_DWORD, int, int); // eax
  int v15; // eax
  int v16; // [esp-8h] [ebp-50h]
  int v17; // [esp+4h] [ebp-44h]
  unsigned int v18; // [esp+Ch] [ebp-3Ch] BYREF
  void **v19; // [esp+10h] [ebp-38h] BYREF
  int v20; // [esp+14h] [ebp-34h]
  float v21[12]; // [esp+18h] [ebp-30h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)sub_100134A0(67, 86, 88, 77, &v18, &a2, a2) )
    return 0;
  if ( v18 < dword_100562B0 )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\ConvexMesh.cpp",
      143,
      0,
      "Loading convex mesh failed: Deprecated mesh cooking format. Please install and run the mesh converter tool to conv"
      "ert your mesh to the new cooking format.",
      v17);
    return 0;
  }
  sub_100130A0(a2, v2);
  v5 = *(unsigned __int8 (__thiscall **)(int, void ***))(*(_DWORD *)(this + 156) + 4);
  v19 = &StreamLoad::`vftable';
  v20 = v2;
  if ( !v5(this + 156, &v19) )
    return 0;
  v16 = a2;
  *(_DWORD *)(this + 44) = this + 236;
  sub_100130A0(v16, v2);
  v19 = &StreamLoad::`vftable';
  v20 = v2;
  if ( !(unsigned __int8)sub_1000D920(&v19) )
    return 0;
  sub_100131E0(v21, 12, a2, v2);
  v6 = v21[0];
  *(float *)(this + 152) = v21[0];
  *(float *)(this + 136) = v21[1];
  *(float *)(this + 140) = v21[2];
  *(float *)(this + 144) = v21[3];
  *(float *)(this + 148) = v21[4];
  *(float *)(this + 112) = v21[5];
  *(float *)(this + 116) = v21[6];
  *(float *)(this + 120) = v21[7];
  *(float *)(this + 124) = v21[8];
  *(float *)(this + 128) = v21[9];
  *(float *)(this + 132) = v21[10];
  v7 = *(_DWORD *)(this + 124);
  v8 = *(_DWORD *)(this + 128);
  v9 = *(_DWORD *)(this + 132);
  *(float *)(this + 76) = v6;
  v10 = v21[11];
  *(_DWORD *)(this + 64) = v7;
  v11 = *(_DWORD *)(this + 112);
  *(float *)(this + 292) = v10;
  *(_DWORD *)(this + 68) = v8;
  v12 = *(_DWORD *)(this + 116);
  *(_DWORD *)(this + 52) = v11;
  *(_DWORD *)(this + 56) = v12;
  *(_DWORD *)(this + 72) = v9;
  *(_DWORD *)(this + 60) = *(_DWORD *)(this + 120);
  if ( -1.0 != v10 )
  {
    sub_100131E0(this + 296, 9, a2, v2);
    sub_100131E0(this + 332, 3, a2, v2);
  }
  if ( v18 < 2 || *(_DWORD *)(this + 168) > 0x20u )
  {
    v13 = *(void (__thiscall ****)(_DWORD, int))(this + 288);
    if ( v13 )
    {
      (**v13)(v13, 1);
      *(_DWORD *)(this + 288) = 0;
    }
    v14 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
    if ( (**v14)(v14, 36, 10) )
      v15 = sub_1000F700(this + 156);
    else
      v15 = 0;
    *(_DWORD *)(this + 288) = v15;
    if ( v15 )
    {
      v19 = &StreamLoad::`vftable';
      v20 = v2;
      (*(void (__thiscall **)(int, void ***))(*(_DWORD *)v15 + 4))(v15, &v19);
      *(_DWORD *)(this + 48) = *(_DWORD *)(this + 288) + 16;
    }
  }
  return 1;
}
