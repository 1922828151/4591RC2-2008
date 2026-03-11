/*
 * func-name: sub_100F6E10
 * func-address: 0x100f6e10
 * callers: 0x100f76c0
 * callees: 0x100f5780, 0x100f5b00, 0x100f5cf0, 0x100f5dc0, 0x100f5f70, 0x100f6400, 0x1014df30, 0x1014e0c0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_100F6E10(int this, int a2, char *a3, unsigned int a4, float *a5)
{
  int result; // eax
  double v6; // st7
  int v8; // ecx
  unsigned int v9; // edi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  float *v15; // eax
  float *v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // esi
  float *v20; // ecx
  int v21; // eax
  char *v22; // esi
  float *v23; // [esp-20h] [ebp-80h]
  float *v24; // [esp-Ch] [ebp-6Ch]
  int v25; // [esp-8h] [ebp-68h]
  int v26; // [esp+0h] [ebp-60h] BYREF
  float v27[18]; // [esp+Ch] [ebp-54h] BYREF
  int v28; // [esp+5Ch] [ebp-4h]
  int v29; // [esp+70h] [ebp+10h]
  float *v30; // [esp+74h] [ebp+14h]
  char *v31; // [esp+74h] [ebp+14h]

  result = (int)a5;
  v6 = a5[16];
  qmemcpy(v27, a5, 0x40u);
  v27[16] = v6;
  v8 = *(_DWORD *)(this + 4);
  LODWORD(v27[17]) = &v26;
  if ( v8 )
  {
    result = 2021161081 * (*(_DWORD *)(this + 12) - v8);
    v9 = (*(_DWORD *)(this + 12) - v8) / 68;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    if ( v8 )
      v11 = (*(_DWORD *)(this + 8) - v8) / 68;
    else
      v11 = 0;
    if ( 63161283 - v11 < a4 )
      sub_100F5780();
    if ( v8 )
      v12 = (*(_DWORD *)(this + 8) - v8) / 68;
    else
      v12 = 0;
    if ( v9 >= a4 + v12 )
    {
      v20 = *(float **)(this + 8);
      v29 = (int)v20;
      if ( ((char *)v20 - a3) / 68 >= a4 )
      {
        v21 = 68 * a4;
        v22 = (char *)&v20[-17 * a4];
        v31 = (char *)v21;
        *(_DWORD *)(this + 8) = sub_100F6400(&v20[v21 / 0xFFFFFFFC], v20, v20);
        sub_100F5DC0(a3, v22, v29);
        return (int)sub_100F5CF0(a3, &v31[(_DWORD)a3], v27);
      }
      else
      {
        sub_100F6400((float *)a3, v20, (float *)&a3[68 * a4]);
        v25 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 68;
        v24 = *(float **)(this + 8);
        v28 = 2;
        sub_100F5F70(v24, v25, v27);
        *(_DWORD *)(this + 8) += 68 * a4;
        return (int)sub_100F5CF0(a3, (char *)(*(_DWORD *)(this + 8) - 68 * a4), v27);
      }
    }
    else
    {
      if ( 63161283 - (v9 >> 1) >= v9 )
        v13 = (v9 >> 1) + v9;
      else
        v13 = 0;
      if ( v8 )
        v14 = (*(_DWORD *)(this + 8) - v8) / 68;
      else
        v14 = 0;
      if ( v13 < a4 + v14 )
        v13 = a4 + sub_1014DF30(this);
      v30 = (float *)sub_1014E0C0(v13);
      v23 = *(float **)(this + 4);
      v28 = 0;
      v15 = sub_100F5B00(v23, (float *)a3, v30);
      v16 = sub_100F5F70(v15, a4, v27);
      sub_100F5B00((float *)a3, *(float **)(this + 8), v16);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 68;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
        operator delete(*(void **)(this + 4));
      result = (int)v30;
      *(_DWORD *)(this + 12) = &v30[17 * v13];
      *(_DWORD *)(this + 8) = &v30[17 * v19];
      *(_DWORD *)(this + 4) = v30;
    }
  }
  return result;
}
