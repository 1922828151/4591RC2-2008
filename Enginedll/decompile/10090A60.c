/*
 * func-name: sub_10090A60
 * func-address: 0x10090a60
 * callers: 0x10091180
 * callees: 0x1008f770, 0x1008f990, 0x1008faf0, 0x1008fb50, 0x1008fc70, 0x10090130, 0x100901a0, 0x10090680, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10090A60(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int result; // eax
  int v6; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  _DWORD *v22; // ecx
  int v23; // edi
  _DWORD *v24; // [esp-20h] [ebp-54h]
  _DWORD *v25; // [esp-Ch] [ebp-40h]
  int v26; // [esp-8h] [ebp-3Ch]
  int v27; // [esp+0h] [ebp-34h] BYREF
  _DWORD v28[7]; // [esp+Ch] [ebp-28h] BYREF
  int v29; // [esp+30h] [ebp-4h]
  char *v30; // [esp+44h] [ebp+10h]
  _DWORD *v31; // [esp+48h] [ebp+14h]
  _DWORD *v32; // [esp+48h] [ebp+14h]

  result = (int)a5;
  v6 = a5[1];
  v28[0] = *a5;
  v28[2] = a5[2];
  v8 = a5[4];
  v28[1] = v6;
  v9 = a5[3];
  v28[4] = v8;
  v10 = *(_DWORD *)(this + 4);
  v28[3] = v9;
  v11 = a5[5];
  v28[6] = &v27;
  v28[5] = v11;
  if ( v10 )
  {
    result = 715827883 * (*(_DWORD *)(this + 12) - v10);
    v12 = (*(_DWORD *)(this + 12) - v10) / 24;
  }
  else
  {
    v12 = 0;
  }
  if ( a4 )
  {
    if ( v10 )
      v13 = (*(_DWORD *)(this + 8) - v10) / 24;
    else
      v13 = 0;
    if ( 178956970 - v13 < a4 )
      sub_1008F990();
    if ( v10 )
      v14 = (*(_DWORD *)(this + 8) - v10) / 24;
    else
      v14 = 0;
    if ( v12 >= a4 + v14 )
    {
      v22 = *(_DWORD **)(this + 8);
      v32 = v22;
      if ( ((char *)v22 - a3) / 24 >= a4 )
      {
        v23 = 24 * a4;
        v30 = (char *)&v22[-6 * a4];
        *(_DWORD *)(this + 8) = sub_10090680(&v22[v23 / 0xFFFFFFFC], v22, v22);
        sub_10090130(a3, v30, v32);
        return (int)sub_1008FB50(a3, &a3[v23], v28);
      }
      else
      {
        sub_10090680(a3, v22, &a3[24 * a4]);
        v26 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 24;
        v25 = *(_DWORD **)(this + 8);
        v29 = 2;
        sub_100901A0(v25, v26, v28);
        *(_DWORD *)(this + 8) += 24 * a4;
        return (int)sub_1008FB50(a3, (_DWORD *)(*(_DWORD *)(this + 8) - 24 * a4), v28);
      }
    }
    else
    {
      if ( 178956970 - (v12 >> 1) >= v12 )
        v15 = (v12 >> 1) + v12;
      else
        v15 = 0;
      if ( v10 )
        v16 = (*(_DWORD *)(this + 8) - v10) / 24;
      else
        v16 = 0;
      if ( v15 < a4 + v16 )
        v15 = a4 + sub_1008F770((_DWORD *)this);
      v31 = sub_1008FAF0(v15);
      v24 = *(_DWORD **)(this + 4);
      v29 = 0;
      v17 = sub_1008FC70(v24, a3, v31);
      v18 = sub_100901A0(v17, a4, v28);
      sub_1008FC70(a3, *(_DWORD **)(this + 8), v18);
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) / 24;
      else
        v20 = 0;
      v21 = v20 + a4;
      if ( v19 )
        operator delete(*(void **)(this + 4));
      result = (int)v31;
      *(_DWORD *)(this + 12) = &v31[6 * v15];
      *(_DWORD *)(this + 8) = &v31[6 * v21];
      *(_DWORD *)(this + 4) = v31;
    }
  }
  return result;
}
