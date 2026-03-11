/*
 * func-name: sub_1005F470
 * func-address: 0x1005f470
 * callers: 0x1005f470, 0x1005f970
 * callees: 0x1005f470, 0x1017a160
 */

int __thiscall sub_1005F470(
        _DWORD *this,
        int a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int (__thiscall ***a7)(_DWORD, int, int),
        int a8)
{
  int v8; // esi
  double v10; // st7
  double v11; // st6
  int v12; // ecx
  char *v13; // esi
  int v14; // eax
  double v15; // st5
  int result; // eax
  double v17; // st7
  double v18; // st6
  int v19; // ecx
  float v20; // [esp+1Ch] [ebp-1Ch]
  float v21; // [esp+20h] [ebp-18h]
  float v22; // [esp+24h] [ebp-14h]
  float v23; // [esp+28h] [ebp-10h]
  float v24[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float v25; // [esp+3Ch] [ebp+4h]
  float v26; // [esp+3Ch] [ebp+4h]
  BOOL v27; // [esp+3Ch] [ebp+4h]

  v8 = a2;
  if ( a2 < 0 )
    return (**a7)(a7, -1 - v8, a8);
  v10 = -0.03125;
  v11 = 0.03125;
  while ( 1 )
  {
    v12 = this[3];
    if ( !v12 || v8 >= (unsigned int)((this[4] - v12) >> 4) )
    {
      invalid_parameter_noinfo();
      v10 = -0.03125;
      v11 = 0.03125;
    }
    v13 = (char *)(this[3] + 16 * v8);
    v14 = 4 * *v13;
    v20 = *(float *)(v14 + a5) - *((float *)v13 + 1);
    v25 = *(float *)(v14 + a6) - *((float *)v13 + 1);
    if ( v20 <= v10 && v25 <= v10 )
    {
      v8 = *((_DWORD *)v13 + 2);
      goto LABEL_12;
    }
    if ( v20 < v11 )
      break;
    v15 = v20;
    if ( v25 < v11 )
      goto LABEL_15;
    v8 = *((_DWORD *)v13 + 3);
LABEL_12:
    if ( v8 < 0 )
      return (**a7)(a7, -1 - v8, a8);
  }
  v15 = v20;
LABEL_15:
  v17 = v15;
  v18 = 0.0;
  v19 = 4 * *v13;
  if ( 0.0 == *(float *)(v19 + a4) )
  {
    v26 = 1.0;
  }
  else
  {
    v26 = (*((float *)v13 + 1) - a3[v19 / 4u]) * *(float *)(v19 + a4);
    sub_1017A160(v26, 0.0, 1.0);
    v17 = v20;
    v18 = 0.0;
  }
  v21 = a3[3] * v26;
  v22 = a3[4] * v26;
  v23 = v26 * a3[5];
  v24[0] = *a3 + v21;
  v24[1] = a3[1] + v22;
  v24[2] = a3[2] + v23;
  v27 = v18 <= v17;
  result = sub_1005F470(*(_DWORD *)&v13[4 * v27 + 8], a3, a4, a5, v24, a7, a8);
  if ( (_BYTE)result )
    return sub_1005F470(*(_DWORD *)&v13[4 * (3 - v27)], a3, a4, v24, a6, a7, a8);
  return result;
}
