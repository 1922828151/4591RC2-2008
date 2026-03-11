/*
 * func-name: sub_100D82D0
 * func-address: 0x100d82d0
 * callers: 0x1000ed4a
 * callees: 0x10019a7e, 0x102ca08c, 0x102ca092
 */

int __userpurge sub_100D82D0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  NxPhysics *v5; // eax
  struct NxScene *Scene; // eax
  int v7; // eax
  double v8; // st7
  float *v9; // ecx
  double v10; // st5
  _DWORD *v11; // ebx
  void (__thiscall **v12)(_DWORD *, float *, int); // edi
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  int v16; // eax
  double v17; // st6
  bool v18; // zf
  int v20; // [esp+24h] [ebp-E0h]
  float v21; // [esp+28h] [ebp-DCh]
  float v22; // [esp+28h] [ebp-DCh]
  float v23; // [esp+28h] [ebp-DCh]
  float v24; // [esp+28h] [ebp-DCh]
  float v25; // [esp+28h] [ebp-DCh]
  float v26; // [esp+28h] [ebp-DCh]
  float v27; // [esp+28h] [ebp-DCh]
  float v28; // [esp+28h] [ebp-DCh]
  float v29; // [esp+28h] [ebp-DCh]
  float v30; // [esp+28h] [ebp-DCh]
  float v31; // [esp+28h] [ebp-DCh]
  float v32; // [esp+28h] [ebp-DCh]
  float v33; // [esp+2Ch] [ebp-D8h]
  float v34; // [esp+2Ch] [ebp-D8h]
  float v35; // [esp+2Ch] [ebp-D8h]
  float v36; // [esp+2Ch] [ebp-D8h]
  float v37; // [esp+2Ch] [ebp-D8h]
  float v38; // [esp+30h] [ebp-D4h]
  float v39; // [esp+30h] [ebp-D4h]
  float v40; // [esp+30h] [ebp-D4h]
  float v41; // [esp+34h] [ebp-D0h] BYREF
  float v42; // [esp+38h] [ebp-CCh]
  float v43; // [esp+3Ch] [ebp-C8h] BYREF
  float v44; // [esp+40h] [ebp-C4h]
  float v45; // [esp+44h] [ebp-C0h]
  float v46; // [esp+48h] [ebp-BCh]
  float v47; // [esp+4Ch] [ebp-B8h]
  float v48; // [esp+50h] [ebp-B4h]
  float v49; // [esp+54h] [ebp-B0h]
  float v50; // [esp+58h] [ebp-ACh]
  float v51; // [esp+5Ch] [ebp-A8h]
  float v52; // [esp+60h] [ebp-A4h]
  float v53; // [esp+64h] [ebp-A0h] BYREF
  float v54; // [esp+68h] [ebp-9Ch]
  float v55; // [esp+6Ch] [ebp-98h] BYREF
  float v56; // [esp+70h] [ebp-94h]
  float v57; // [esp+74h] [ebp-90h]
  float v58; // [esp+78h] [ebp-8Ch]
  float v59[3]; // [esp+7Ch] [ebp-88h] BYREF
  _BYTE v60[48]; // [esp+88h] [ebp-7Ch] BYREF
  _BYTE v61[72]; // [esp+B8h] [ebp-4Ch] BYREF
  float v62; // [esp+100h] [ebp-4h]

  v33 = *(float *)(a1 + 196);
  v38 = cos(v33);
  v21 = v38;
  v39 = sin(v33);
  v50 = -v39;
  v41 = v39 + v21 * 0.0 + 0.0 * 0.0;
  v42 = 0.0 * 0.0 + 0.0 + 0.0;
  v43 = v21 + 0.0 * v50 + 0.0 * 0.0;
  v59[0] = v41;
  v59[1] = v42;
  v59[2] = v43;
  v5 = (NxPhysics *)NxPhysics::Instance(v20, LODWORD(v21), LODWORD(v33), LODWORD(v39), LODWORD(v41));
  Scene = NxPhysics::GetScene(v5);
  v7 = (*(int (__thiscall **)(struct NxScene *, _DWORD))(*(_DWORD *)Scene + 320))(Scene, *(unsigned __int16 *)(a1 + 84));
  if ( v7 )
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v7 + 60))(v7, v59);
  if ( 0.0 == *(float *)(a1 + 200) )
  {
    v9 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), v60);
    v40 = v9[8] * v9[4] - v9[7] * v9[5];
    v23 = v9[7] * v9[2] - v9[1] * v9[8];
    v34 = v9[5] * v9[1] - v9[4] * v9[2];
    v10 = v34;
    v35 = v9[6] * v34 + *v9 * v40 + v9[3] * v23;
    if ( v35 == 0.0 )
    {
      v44 = 1.0;
      v48 = 1.0;
      v52 = 1.0;
      v45 = 0.0;
      v46 = 0.0;
      v47 = 0.0;
      v49 = 0.0;
      v50 = 0.0;
      v51 = 0.0;
    }
    else
    {
      v36 = 1.0 / v35;
      v44 = v40 * v36;
      v45 = v23 * v36;
      v46 = v10 * v36;
      v24 = v9[5] * v9[6] - v9[8] * v9[3];
      v47 = v24 * v36;
      v25 = *v9 * v9[8] - v9[6] * v9[2];
      v48 = v25 * v36;
      v26 = v9[3] * v9[2] - v9[5] * *v9;
      v49 = v26 * v36;
      v27 = v9[7] * v9[3] - v9[6] * v9[4];
      v50 = v27 * v36;
      v28 = v9[1] * v9[6] - v9[7] * *v9;
      v51 = v28 * v36;
      v29 = *v9 * v9[4] - v9[1] * v9[3];
      v52 = v36 * v29;
    }
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 8) + 4))(*(_DWORD *)(a1 + 8), a3, a2);
    v12 = (void (__thiscall **)(_DWORD *, float *, int))(*v11 + 312);
    v13 = (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 8) + 44))(*(_DWORD *)(a1 + 8), &v55);
    (*v12)(v11, &v43, v13);
    v56 = v42 * v45 + v41 * v44 + v43 * v46;
    v57 = v42 * v48 + v47 * v41 + v43 * v49;
    v58 = v42 * v51 + v41 * v50 + v43 * v52;
    v30 = *(float *)(a1 + 36) * 6.283185482025146;
    v31 = 1.0 / v30;
    v53 = v56 * v31;
    v54 = v57 * v31;
    v55 = v31 * v58;
    v41 = v53;
    v42 = v54;
    v43 = v55;
    v32 = *(float *)(NxHelper::ToVector(&v53, &v41) + 8) * GDeltaTime;
    v8 = v32;
  }
  else
  {
    v22 = *(float *)(a1 + 40) * *(float *)(a1 + 200) * GDeltaTime;
    v8 = v22;
  }
  v14 = *(_DWORD *)(a1 + 8);
  *(float *)(a1 + 180) = v8;
  *(float *)(a1 + 88) = v8 + *(float *)(a1 + 88);
  *(float *)(a1 + 92) = *(float *)(a1 + 196);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 248))(v14, v61);
  v37 = v62 - *(float *)(a1 + 32);
  if ( v37 <= 0.0 )
    v15 = v37;
  else
    v15 = (float)0.0;
  if ( -*(float *)(a1 + 32) < v15 )
    *(float *)(a1 + 120) = v15 * *(float *)(a1 + 44);
  v16 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 8) + 40))(*(_DWORD *)(a1 + 8), v60);
  v17 = *(float *)(a1 + 120);
  if ( *(float *)(v16 + 36) > 0.0 )
    v17 = -v17;
  v18 = *(_BYTE *)(a1 + 140) == 0;
  *(float *)(a1 + 96) = v17;
  if ( v18 )
  {
    *(float *)(a1 + 120) = 0.0;
    *(float *)(a1 + 96) = 0.0;
  }
  return sub_10019A7E(a4);
}
