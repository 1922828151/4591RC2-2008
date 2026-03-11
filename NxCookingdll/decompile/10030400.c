/*
 * func-name: sub_10030400
 * func-address: 0x10030400
 * callers: 0x10013840
 * callees: 0x10014c10, 0x10014f50, 0x10015020, 0x100150a0, 0x10015220, 0x10035300
 */

char __thiscall sub_10030400(int this, int a2)
{
  int v4; // eax
  int v5; // edx
  bool v6; // zf
  int v7; // ebx
  char *v8; // ebp
  float *v9; // eax
  int v10; // ebp
  double v11; // st7
  float *v12; // ecx
  double v13; // st6
  double v14; // st6
  double v15; // st6
  double v16; // st6
  double v17; // st6
  char *v18; // ebx
  size_t v19; // esi
  int v20; // eax
  char *v21; // eax
  unsigned int i; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v27; // [esp+38h] [ebp-48h]
  int v28; // [esp+3Ch] [ebp-44h]
  float v29; // [esp+40h] [ebp-40h]
  float v30; // [esp+44h] [ebp-3Ch]
  float v31; // [esp+48h] [ebp-38h]
  float v32; // [esp+4Ch] [ebp-34h]
  float v33; // [esp+50h] [ebp-30h]
  int v34[7]; // [esp+58h] [ebp-28h] BYREF
  int v35; // [esp+7Ch] [ebp-4h]
  int v36; // [esp+84h] [ebp+4h]

  *(_DWORD *)(this + 188) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v4 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 8))(24 * *(_DWORD *)(this + 188), 0);
  v5 = *(_DWORD *)(this + 188);
  *(_DWORD *)(this + 192) = v4;
  *(_DWORD *)(this + 196) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_100580A0 + 8))(
                              dword_100580A0,
                              8 * v5,
                              0);
  sub_10014F50((int)v34, (void **)0x1000, 0);
  v6 = *(_DWORD *)(this + 188) == 0;
  v35 = 0;
  v36 = 0;
  if ( v6 )
  {
LABEL_23:
    v19 = sub_10014C10(v34);
    v20 = (*(int (__thiscall **)(int, size_t, _DWORD))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v19 + 32, 0);
    *(_DWORD *)(this + 204) = v20;
    *(_DWORD *)(this + 200) = (v20 + 32) & 0xFFFFFFE0;
    v21 = sub_100150A0((int)v34, 0);
    memcpy_0(*(void **)(this + 200), v21, v19);
    *(_DWORD *)(*(_DWORD *)(this + 196) + 4) = 0;
    for ( i = 1; i < *(_DWORD *)(this + 188); *(_DWORD *)(v25 + 4) = v24 )
    {
      v23 = *(_DWORD *)(this + 196);
      v24 = *(_DWORD *)(v23 + 8 * i - 4) + *(_DWORD *)(v23 + 8 * i - 8);
      v25 = v23 + 8 * i++;
    }
    v35 = -1;
    sub_10015020(v34);
    return 1;
  }
  else
  {
    v27 = 0;
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) == 1346455365 )
    {
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      v7 = 1888 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      v8 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v7, 1);
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 24))(a2, v8, v7);
      sub_10015220(v34, v8, v7);
      if ( v8 )
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v8);
      *(_DWORD *)(*(_DWORD *)(this + 196) + 8 * v36) = v7;
      v9 = (float *)(v27 + *(_DWORD *)(this + 192));
      *v9 = 3.4028235e38;
      v9[1] = 3.4028235e38;
      v9[2] = 3.4028235e38;
      v9[3] = -3.4028235e38;
      v9[4] = -3.4028235e38;
      for ( v9[5] = -3.4028235e38; v28; --v28 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
        v29 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2);
        v30 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2);
        v31 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2);
        v32 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2);
        v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2);
        v33 = v11;
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2);
        v12 = (float *)(v27 + *(_DWORD *)(this + 192));
        v13 = *v12;
        if ( v29 <= v13 )
          v13 = v29;
        *v12 = v13;
        v14 = v12[1];
        if ( v30 <= v14 )
          v14 = v30;
        v12[1] = v14;
        v15 = v12[2];
        if ( v31 <= v15 )
          v15 = v31;
        v12[2] = v15;
        v16 = v12[3];
        if ( v32 > v16 )
          v16 = v32;
        v12[3] = v16;
        v17 = v12[4];
        if ( v33 > v17 )
          v17 = v33;
        v12[4] = v17;
        if ( v12[5] >= v11 )
          v11 = v12[5];
        v12[5] = v11;
        v18 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v10, 1);
        (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)a2 + 24))(a2, v18, v10);
        sub_10014C10(v34);
        sub_10015220(v34, v18, v10);
        if ( v18 )
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v18);
        *(_DWORD *)(*(_DWORD *)(this + 196) + 8 * v36) += v10;
      }
      v27 += 24;
      if ( (unsigned int)++v36 >= *(_DWORD *)(this + 188) )
        goto LABEL_23;
    }
    v35 = -1;
    sub_10015020(v34);
    return 0;
  }
}
