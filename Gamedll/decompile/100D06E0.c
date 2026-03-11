/*
 * func-name: sub_100D06E0
 * func-address: 0x100d06e0
 * callers: 0x10003346
 * callees: 0x1000ca54
 */

int __thiscall sub_100D06E0(int this, float a2)
{
  int v3; // ecx
  double v4; // st7
  int v5; // ecx
  void (__thiscall *v6)(int, float *); // edx
  float *v7; // ecx
  double v8; // st6
  int v9; // ecx
  int result; // eax
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  float v14; // [esp+34h] [ebp-B4h]
  float v15; // [esp+34h] [ebp-B4h]
  float v16; // [esp+34h] [ebp-B4h]
  float v17; // [esp+34h] [ebp-B4h]
  float v18; // [esp+34h] [ebp-B4h]
  float v19; // [esp+34h] [ebp-B4h]
  float v20; // [esp+34h] [ebp-B4h]
  float v21; // [esp+34h] [ebp-B4h]
  float v22; // [esp+38h] [ebp-B0h]
  float v23; // [esp+38h] [ebp-B0h]
  float v24; // [esp+38h] [ebp-B0h]
  float v25; // [esp+38h] [ebp-B0h]
  float v26; // [esp+38h] [ebp-B0h]
  float v27; // [esp+38h] [ebp-B0h]
  float v28; // [esp+3Ch] [ebp-ACh] BYREF
  float v29; // [esp+40h] [ebp-A8h]
  float v30; // [esp+44h] [ebp-A4h]
  float v31; // [esp+48h] [ebp-A0h]
  float v32; // [esp+4Ch] [ebp-9Ch]
  float v33; // [esp+50h] [ebp-98h]
  float v34; // [esp+54h] [ebp-94h] BYREF
  float v35; // [esp+58h] [ebp-90h]
  float v36; // [esp+5Ch] [ebp-8Ch]
  float v37; // [esp+60h] [ebp-88h]
  float v38; // [esp+64h] [ebp-84h]
  float v39; // [esp+68h] [ebp-80h]
  float v40; // [esp+6Ch] [ebp-7Ch]
  float v41; // [esp+70h] [ebp-78h]
  float v42; // [esp+74h] [ebp-74h]
  float v43; // [esp+78h] [ebp-70h]
  float v44; // [esp+7Ch] [ebp-6Ch]
  float v45; // [esp+80h] [ebp-68h]
  float v46; // [esp+84h] [ebp-64h] BYREF
  float v47; // [esp+88h] [ebp-60h]
  float v48; // [esp+8Ch] [ebp-5Ch]
  float v49; // [esp+90h] [ebp-58h] BYREF
  float v50; // [esp+94h] [ebp-54h]
  float v51; // [esp+98h] [ebp-50h]
  float v52; // [esp+9Ch] [ebp-4Ch]
  float v53; // [esp+A0h] [ebp-48h]
  float v54; // [esp+A4h] [ebp-44h]
  float v55; // [esp+A8h] [ebp-40h]
  float v56; // [esp+ACh] [ebp-3Ch]
  float v57; // [esp+B0h] [ebp-38h]
  float v58; // [esp+B4h] [ebp-34h]
  _BYTE v59[12]; // [esp+B8h] [ebp-30h] BYREF
  _BYTE v60[36]; // [esp+C4h] [ebp-24h] BYREF

  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 4) + 44))(*(_DWORD *)(this + 4), &v49);
  v3 = *(_DWORD *)(this + 4);
  v4 = v53 * 0.0;
  v22 = v52 * 0.0 + v4 + v54;
  v31 = v22 * *(float *)(this + 244);
  v35 = v4 + v52 + 0.0 * v54;
  v33 = *(float *)(this + 248) * v35;
  v28 = v31;
  v29 = 0.0;
  v30 = -v33;
  (*(void (__thiscall **)(int, float *, _DWORD, int))(*(_DWORD *)v3 + 300))(v3, &v28, 0, 1);
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4) + 160))(*(_DWORD *)(this + 4), v59);
  v23 = *(float *)(this + 268) * v35;
  v28 = -1.0 * v23;
  v24 = v23 * 0.0;
  v29 = v24;
  v30 = v24;
  v31 = v28 * v49 + v24 * v50 + v24 * v51;
  v5 = *(_DWORD *)(this + 4);
  v6 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 232);
  v32 = v52 * v28 + v24 * v53 + v24 * v54;
  v33 = v28 * v55 + v24 * v56 + v24 * v57;
  v6(v5, &v46);
  v7 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4) + 44))(*(_DWORD *)(this + 4), v60);
  v25 = v7[8] * v7[4] - v7[7] * v7[5];
  v58 = v7[7] * v7[2] - v7[1] * v7[8];
  v14 = v7[5] * v7[1] - v7[4] * v7[2];
  v8 = v25;
  v26 = *v7 * v25 + v58 * v7[3] + v14 * v7[6];
  if ( v26 == 0.0 )
  {
    v37 = 1.0;
    v41 = 1.0;
    v45 = 1.0;
    v38 = 0.0;
    v39 = 0.0;
    v40 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    v44 = 0.0;
  }
  else
  {
    v27 = 1.0 / v26;
    v37 = v8 * v27;
    v38 = v58 * v27;
    v39 = v14 * v27;
    v15 = v7[5] * v7[6] - v7[8] * v7[3];
    v40 = v15 * v27;
    v16 = *v7 * v7[8] - v7[6] * v7[2];
    v41 = v16 * v27;
    v17 = v7[3] * v7[2] - *v7 * v7[5];
    v42 = v17 * v27;
    v18 = v7[7] * v7[3] - v7[6] * v7[4];
    v43 = v18 * v27;
    v19 = v7[1] * v7[6] - *v7 * v7[7];
    v44 = v19 * v27;
    v20 = *v7 * v7[4] - v7[1] * v7[3];
    v45 = v27 * v20;
  }
  v9 = *(_DWORD *)(this + 4);
  v28 = v37 * v46 + v47 * v38 + v48 * v39;
  v29 = v40 * v46 + v47 * v41 + v48 * v42;
  v30 = v47 * v44 + v46 * v43 + v48 * v45;
  v46 = v28;
  v47 = v29;
  v48 = v30;
  v34 = *(float *)(this + 272) * -v28;
  v28 = v50 * 0.0 + v34 * v49 + v51 * 0.0;
  v30 = v34 * v55 + v56 * 0.0 + v57 * 0.0;
  v34 = v28 + v31;
  v35 = v32 + 0.0;
  v36 = v30 + v33;
  (*(void (__thiscall **)(int, float *, _BYTE *, _DWORD, int))(*(_DWORD *)v9 + 276))(v9, &v34, v59, 0, 1);
  result = sub_1000CA54(a2);
  if ( *(_DWORD *)(this + 284) == 1 || !*(_BYTE *)(this + 180) && *(_BYTE *)(this + 252) )
  {
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 4))(*(_DWORD *)(this + 4));
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v11 + 24))(v11, &v28);
    v12 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 184))(*(_DWORD *)(this + 4));
    v13 = *(_DWORD *)(this + 4);
    v21 = -v12;
    v28 = v21 * v28;
    v29 = v29 * v21;
    v30 = v21 * v30;
    result = (*(int (__thiscall **)(int, float *, _BYTE *, _DWORD, int))(*(_DWORD *)v13 + 276))(v13, &v28, v59, 0, 1);
  }
  *(_DWORD *)(this + 284) = 0;
  return result;
}
