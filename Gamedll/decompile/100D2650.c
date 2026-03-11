/*
 * func-name: sub_100D2650
 * func-address: 0x100d2650
 * callers: 0x10011d6a
 * callees: 0x10019a7e
 */

int __thiscall sub_100D2650(int this, int a2)
{
  double v3; // st7
  float *v4; // ecx
  double v5; // st6
  _DWORD *v6; // ebx
  void (__thiscall **v7)(_DWORD *, float *, int); // edi
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  float *v11; // edi
  float *v12; // eax
  int v13; // ecx
  int v14; // eax
  double v15; // st6
  bool v16; // zf
  float v18; // [esp+28h] [ebp-84h]
  float v19; // [esp+28h] [ebp-84h]
  float v20; // [esp+28h] [ebp-84h]
  float v21; // [esp+28h] [ebp-84h]
  float v22; // [esp+28h] [ebp-84h]
  float v23; // [esp+28h] [ebp-84h]
  float v24; // [esp+28h] [ebp-84h]
  float v25; // [esp+28h] [ebp-84h]
  float v26; // [esp+28h] [ebp-84h]
  float v27; // [esp+28h] [ebp-84h]
  float v28; // [esp+28h] [ebp-84h]
  float v29; // [esp+28h] [ebp-84h]
  float v30; // [esp+2Ch] [ebp-80h]
  float v31; // [esp+2Ch] [ebp-80h]
  float v32; // [esp+2Ch] [ebp-80h]
  float v33; // [esp+2Ch] [ebp-80h]
  float v34; // [esp+30h] [ebp-7Ch]
  float v35; // [esp+34h] [ebp-78h]
  float v36; // [esp+38h] [ebp-74h]
  float v37; // [esp+3Ch] [ebp-70h]
  float v38; // [esp+40h] [ebp-6Ch]
  float v39; // [esp+44h] [ebp-68h]
  float v40; // [esp+48h] [ebp-64h]
  float v41; // [esp+4Ch] [ebp-60h]
  float v42; // [esp+50h] [ebp-5Ch]
  float v43; // [esp+54h] [ebp-58h] BYREF
  float v44; // [esp+58h] [ebp-54h]
  float v45; // [esp+5Ch] [ebp-50h]
  float v46; // [esp+60h] [ebp-4Ch] BYREF
  float v47; // [esp+64h] [ebp-48h]
  float v48; // [esp+68h] [ebp-44h]
  float v49; // [esp+6Ch] [ebp-40h]
  float v50; // [esp+70h] [ebp-3Ch]
  float v51; // [esp+74h] [ebp-38h]
  float v52; // [esp+78h] [ebp-34h]
  _BYTE v53[48]; // [esp+7Ch] [ebp-30h] BYREF

  if ( 0.0 == *(float *)(this + 200) )
  {
    v4 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 8) + 72))(*(_DWORD *)(this + 8), v53);
    v52 = v4[8] * v4[4] - v4[7] * v4[5];
    v31 = v4[7] * v4[2] - v4[1] * v4[8];
    v18 = v4[5] * v4[1] - v4[4] * v4[2];
    v5 = v31;
    v32 = v4[6] * v18 + *v4 * v52 + v4[3] * v31;
    if ( v32 == 0.0 )
    {
      v34 = 1.0;
      v38 = 1.0;
      v42 = 1.0;
      v35 = 0.0;
      v36 = 0.0;
      v37 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
      v41 = 0.0;
    }
    else
    {
      v33 = 1.0 / v32;
      v34 = v52 * v33;
      v35 = v5 * v33;
      v36 = v18 * v33;
      v19 = v4[5] * v4[6] - v4[8] * v4[3];
      v37 = v19 * v33;
      v20 = v4[8] * *v4 - v4[6] * v4[2];
      v38 = v20 * v33;
      v21 = v4[3] * v4[2] - v4[5] * *v4;
      v39 = v21 * v33;
      v22 = v4[7] * v4[3] - v4[6] * v4[4];
      v40 = v22 * v33;
      v23 = v4[1] * v4[6] - v4[7] * *v4;
      v41 = v23 * v33;
      v24 = v4[4] * *v4 - v4[1] * v4[3];
      v42 = v33 * v24;
    }
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 4))(*(_DWORD *)(this + 8));
    v7 = (void (__thiscall **)(_DWORD *, float *, int))(*v6 + 312);
    v8 = (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 8) + 44))(*(_DWORD *)(this + 8), &v43);
    (*v7)(v6, &v46, v8);
    v49 = v47 * v35 + v46 * v34 + v48 * v36;
    v50 = v47 * v38 + v37 * v46 + v48 * v39;
    v51 = v47 * v41 + v46 * v40 + v48 * v42;
    v25 = *(float *)(this + 36) * 6.283185482025146;
    v26 = 1.0 / v25;
    v43 = v49 * v26;
    v44 = v50 * v26;
    v45 = v26 * v51;
    v46 = v43;
    v47 = v44;
    v48 = v45;
    v27 = *(float *)(NxHelper::ToVector(&v43, &v46) + 8) * GDeltaTime;
    v3 = v27;
  }
  else
  {
    v30 = *(float *)(this + 40) * *(float *)(this + 200) * GDeltaTime;
    v3 = v30;
  }
  v9 = *(_DWORD *)(this + 4);
  *(float *)(this + 180) = v3;
  *(float *)(this + 88) = v3 + *(float *)(this + 88);
  v10 = *(_DWORD *)(v9 + 8);
  v11 = (float *)NxHelper::ToNxVec3(&v43, this + 12);
  v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 40))(v10, v53);
  v13 = *(_DWORD *)(this + 8);
  v28 = v11[1] * v12[4] + v12[3] * *v11 + v11[2] * v12[5];
  v29 = v28 + v12[10];
  *(float *)(this + 120) = (v29 - *(float *)(this + 16)) * *(float *)(this + 44);
  v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v13 + 40))(v13, v53);
  v15 = *(float *)(this + 120);
  if ( *(float *)(v14 + 36) <= 0.0 )
    v15 = -v15;
  v16 = *(_BYTE *)(this + 140) == 0;
  *(float *)(this + 96) = v15;
  if ( v16 )
  {
    *(float *)(this + 120) = 0.0;
    *(float *)(this + 96) = 0.0;
  }
  return sub_10019A7E(a2);
}
