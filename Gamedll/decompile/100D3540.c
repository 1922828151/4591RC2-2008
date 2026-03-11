/*
 * func-name: sub_100D3540
 * func-address: 0x100d3540
 * callers: 0x100094d0
 * callees: 0x102c9d98
 */

char __fastcall sub_100D3540(int a1, int a2, int a3, float *a4)
{
  NxPhysics *v5; // eax
  __int16 v6; // dx
  int v7; // eax
  double v8; // st6
  double v9; // st6
  __int16 v10; // ax
  int v11; // ecx
  _BYTE *v12; // eax
  int v14; // [esp+0h] [ebp-118h]
  struct NxMaterialDesc *v15; // [esp+0h] [ebp-118h]
  int v16; // [esp+4h] [ebp-114h]
  int v17; // [esp+8h] [ebp-110h]
  int v18; // [esp+Ch] [ebp-10Ch]
  float v19[12]; // [esp+14h] [ebp-104h] BYREF
  _DWORD v20[15]; // [esp+44h] [ebp-D4h] BYREF
  __int16 v21; // [esp+80h] [ebp-98h]
  __int16 v22; // [esp+82h] [ebp-96h]
  float v23; // [esp+84h] [ebp-94h]
  float v24; // [esp+88h] [ebp-90h]
  float v25; // [esp+8Ch] [ebp-8Ch]
  float v26; // [esp+90h] [ebp-88h]
  int v27; // [esp+94h] [ebp-84h]
  int v28; // [esp+98h] [ebp-80h]
  int v29; // [esp+9Ch] [ebp-7Ch]
  int v30; // [esp+A0h] [ebp-78h]
  int v31; // [esp+A4h] [ebp-74h]
  int v32; // [esp+A8h] [ebp-70h]
  float v33; // [esp+ACh] [ebp-6Ch]
  float v34; // [esp+B0h] [ebp-68h]
  float v35; // [esp+B4h] [ebp-64h]
  float v36; // [esp+B8h] [ebp-60h]
  float v37; // [esp+BCh] [ebp-5Ch]
  float v38; // [esp+C0h] [ebp-58h]
  void **v39; // [esp+C4h] [ebp-54h]
  float v40; // [esp+C8h] [ebp-50h]
  float v41; // [esp+CCh] [ebp-4Ch]
  float v42; // [esp+D0h] [ebp-48h]
  float v43; // [esp+D4h] [ebp-44h]
  float v44; // [esp+D8h] [ebp-40h]
  void **v45; // [esp+DCh] [ebp-3Ch]
  float v46; // [esp+E0h] [ebp-38h]
  float v47; // [esp+E4h] [ebp-34h]
  float v48; // [esp+E8h] [ebp-30h]
  float v49; // [esp+ECh] [ebp-2Ch]
  float v50; // [esp+F0h] [ebp-28h]
  float v51; // [esp+F4h] [ebp-24h]
  int v52; // [esp+F8h] [ebp-20h]
  float v53; // [esp+FCh] [ebp-1Ch]
  float v54; // [esp+100h] [ebp-18h]
  float v55; // [esp+104h] [ebp-14h]
  int v56; // [esp+108h] [ebp-10h]
  int v57; // [esp+114h] [ebp-4h]

  *(_DWORD *)(a1 + 4) = a3;
  qmemcpy((void *)(a1 + 12), a4, 0x3Cu);
  *(float *)(a1 + 76) = a4[10];
  *(float *)(a1 + 72) = a4[9];
  *(float *)(a1 + 80) = 0.0;
  v19[2] = 0.0;
  v19[1] = a4[12];
  v19[0] = a4[11];
  v19[4] = a4[14];
  v19[3] = a4[13];
  v19[10] = 0.0;
  LODWORD(v19[9]) = 2;
  v19[5] = 0.0;
  LODWORD(v19[8]) = 1;
  v19[6] = 0.0;
  LODWORD(v19[11]) = a1 + 72;
  v19[7] = 1.0;
  v5 = (NxPhysics *)NxPhysics::Instance(v19, v14, v16, v17, v18);
  *(_DWORD *)(a1 + 84) = NxPhysics::CreateMaterial(v5, v15);
  v20[1] = 4;
  v40 = 1.0;
  v20[0] = &NxWheelShapeDesc::`vftable';
  v41 = 0.02;
  v39 = &NxTireFunctionDesc::`vftable';
  v42 = 2.0;
  v43 = 0.0099999998;
  v44 = 1000000.0;
  v46 = 1.0;
  v45 = &NxTireFunctionDesc::`vftable';
  v47 = 0.02;
  v48 = 2.0;
  v49 = 0.0099999998;
  v50 = 1000000.0;
  *(float *)&v20[2] = 1.0;
  v20[14] = 1179656;
  v21 = 0;
  *(float *)&v20[3] = 0.0;
  v23 = 0.0;
  *(float *)&v20[4] = 0.0;
  *(float *)&v20[5] = 0.0;
  *(float *)&v20[7] = 0.0;
  *(float *)&v20[8] = 0.0;
  *(float *)&v20[9] = 0.0;
  *(float *)&v20[6] = 1.0;
  *(float *)&v20[10] = 1.0;
  v26 = -1.0;
  v25 = -1.0;
  v28 = 0;
  v29 = 0;
  v24 = 1.0;
  v30 = 0;
  v51 = 1.0;
  v31 = 0;
  v32 = 0;
  v53 = 0.0;
  v33 = 0.0;
  v54 = 0.0;
  v56 = 0;
  v55 = 0.0;
  v6 = *(_WORD *)(a1 + 84);
  v34 = a4[6];
  v7 = *(_DWORD *)(a1 + 4);
  v8 = a4[5];
  v52 = 32;
  v35 = v8;
  v22 = v6;
  v9 = a4[10];
  v27 = 0;
  v37 = v9;
  v57 = 3;
  v36 = a4[9];
  v38 = 0.0;
  *(float *)&v20[11] = *a4;
  *(float *)&v20[12] = a4[1];
  *(float *)&v20[13] = a4[2];
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 4) + 88))(*(_DWORD *)(v7 + 4));
  v11 = *(_DWORD *)(a1 + 4);
  v21 = v10;
  *(_DWORD *)(a1 + 8) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v11 + 4) + 68))(
                          *(_DWORD *)(v11 + 4),
                          v20);
  v12 = operator new(0x28u);
  if ( v12 )
    *v12 = 0;
  else
    v12 = 0;
  *v12 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) = v12;
  return 1;
}
