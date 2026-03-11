/*
 * func-name: ?FindStrongestLight@World@@QAEPAVLight@@AAVVector@@_N1@Z
 * func-address: 0x10137d50
 * callers: none
 * callees: none
 */

struct Light *__thiscall World::FindStrongestLight(World *this, struct Vector *a2, bool a3, bool a4)
{
  int v5; // ebx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  double v11; // st6
  double v12; // st6
  double v13; // st5
  double v14; // st6
  double v15; // st6
  float v17; // [esp+8h] [ebp-14h]
  float v18; // [esp+Ch] [ebp-10h]
  float v19; // [esp+10h] [ebp-Ch]
  float v20; // [esp+14h] [ebp-8h]
  float v21; // [esp+18h] [ebp-4h]
  float v22; // [esp+20h] [ebp+4h]
  float v23; // [esp+20h] [ebp+4h]
  float v24; // [esp+20h] [ebp+4h]
  float v25; // [esp+20h] [ebp+4h]
  float v26; // [esp+20h] [ebp+4h]

  v18 = 999.0;
  v5 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 810);
    if ( !v8 || v7 >= (*((_DWORD *)this + 811) - v8) >> 2 )
      return (struct Light *)v5;
    v9 = *(_DWORD *)(*((_DWORD *)this + 810) + 4 * v7);
    if ( *(_BYTE *)(v9 + 1420)
      || -1.0 != *(float *)(v9 + 820)
      || *(_BYTE *)(v9 + 422) != a4 && *(_BYTE *)(v9 + 421) != a3 )
    {
      goto LABEL_17;
    }
    if ( *(_DWORD *)(v9 + 1428) == 4 )
      return *(struct Light **)(*((_DWORD *)this + 810) + 4 * v7);
    v10 = 2;
    v17 = *(float *)(v9 + 1136);
    v22 = 1.0;
    while ( 1 )
    {
      v11 = v17;
      if ( (v10 & 1) != 0 )
        v22 = v22 * v11;
      v10 >>= 1;
      if ( !v10 )
        break;
      v17 = v11 * v11;
    }
    v12 = v22;
    v19 = *(float *)(v9 + 856) - *(float *)a2;
    v20 = *(float *)(v9 + 860) - *((float *)a2 + 1);
    v21 = *(float *)(v9 + 864) - *((float *)a2 + 2);
    v23 = v19 * v19 + v20 * v20 + v21 * v21;
    v13 = v12;
    v14 = v23;
    v24 = v13;
    v25 = v14 / v24;
    if ( v25 >= 1.0 )
      goto LABEL_17;
    v15 = v25;
    v26 = v25 / *(float *)(v9 + 1092);
    if ( v18 > (double)v26 )
    {
      v18 = v15 / *(float *)(v9 + 1092);
      v5 = *(_DWORD *)(*((_DWORD *)this + 810) + 4 * v7++);
    }
    else
    {
LABEL_17:
      ++v7;
    }
  }
}
