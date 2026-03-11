/*
 * func-name: sub_1005F670
 * func-address: 0x1005f670
 * callers: 0x1005f670, 0x1005f970
 * callees: 0x1005f670, 0x1017a160
 */

char __thiscall sub_1005F670(
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
  int v11; // ecx
  char *v12; // esi
  int v13; // eax
  double v14; // st7
  double v15; // st5
  double v16; // st4
  bool v17; // c0
  double v18; // st4
  double v19; // st6
  double v21; // st7
  int v22; // eax
  double v23; // st5
  double v24; // st7
  double v25; // st6
  double v26; // st5
  int v27; // eax
  int v28; // ebp
  float v29; // [esp+1Ch] [ebp-40h]
  double v30; // [esp+1Ch] [ebp-40h]
  double v31; // [esp+24h] [ebp-38h]
  float v32; // [esp+2Ch] [ebp-30h]
  float v33; // [esp+2Ch] [ebp-30h]
  float v34; // [esp+30h] [ebp-2Ch]
  float v35; // [esp+30h] [ebp-2Ch]
  float v36; // [esp+34h] [ebp-28h]
  float v37; // [esp+34h] [ebp-28h]
  float v38; // [esp+38h] [ebp-24h]
  float v39; // [esp+38h] [ebp-24h]
  float v40; // [esp+3Ch] [ebp-20h]
  float v41; // [esp+3Ch] [ebp-20h]
  float v42; // [esp+40h] [ebp-1Ch]
  float v43; // [esp+40h] [ebp-1Ch]
  _DWORD v44[3]; // [esp+44h] [ebp-18h] BYREF
  _DWORD v45[3]; // [esp+50h] [ebp-Ch] BYREF
  float v46; // [esp+60h] [ebp+4h]
  float v47; // [esp+60h] [ebp+4h]
  int v48; // [esp+60h] [ebp+4h]
  float v49; // [esp+64h] [ebp+8h]
  float v50; // [esp+64h] [ebp+8h]

  v8 = a2;
  if ( a2 < 0 )
    return (**a7)(a7, -1 - v8, a8);
  while ( 1 )
  {
    v11 = this[3];
    if ( !v11 || v8 >= (unsigned int)((this[4] - v11) >> 4) )
      invalid_parameter_noinfo();
    v12 = (char *)(this[3] + 16 * v8);
    v13 = *v12;
    v14 = *((float *)v12 + 1);
    v46 = *(float *)(a5 + 4 * v13) - v14;
    v29 = *(float *)(a6 + 4 * v13) - v14;
    v49 = a3[v13 + 9] + 0.03125;
    v15 = v49;
    v16 = -v49;
    if ( v16 <= v46 )
    {
      v18 = v29;
    }
    else
    {
      v17 = v29 < v16;
      v18 = v29;
      if ( v17 )
      {
        v8 = *((_DWORD *)v12 + 2);
        goto LABEL_12;
      }
    }
    if ( v15 >= v46 )
      break;
    v19 = v18;
    if ( v18 <= v15 )
      goto LABEL_15;
    v8 = *((_DWORD *)v12 + 3);
LABEL_12:
    if ( v8 < 0 )
      return (**a7)(a7, -1 - v8, a8);
  }
  v19 = v18;
LABEL_15:
  v21 = v49;
  v31 = v46;
  v30 = v19;
  if ( v19 == v46 )
  {
    if ( !(unsigned __int8)sub_1005F670(*((_DWORD *)v12 + 2), a3, a4, a5, a6, a7, a8) )
      return 0;
    return sub_1005F670(*((_DWORD *)v12 + 3), a3, a4, a5, a6, a7, a8);
  }
  else
  {
    v22 = 4 * *v12;
    v23 = a3[v22 / 4u];
    v47 = (*((float *)v12 + 1) - v21 - v23) * *(float *)(v22 + a4);
    v50 = (v21 + *((float *)v12 + 1) - v23) * *(float *)(v22 + a4);
    sub_1017A160(v47, 0.0, 1.0);
    sub_1017A160(v50, 0.0, 1.0);
    v32 = a3[3] * v47;
    v34 = a3[4] * v47;
    v36 = v47 * a3[5];
    v24 = *a3;
    v38 = v32 + v24;
    v25 = a3[1];
    *(float *)v44 = v38;
    v40 = v34 + v25;
    v26 = a3[2];
    *(float *)&v44[1] = v40;
    v42 = v36 + v26;
    *(float *)&v44[2] = v42;
    v39 = a3[3] * v50;
    v41 = a3[4] * v50;
    v43 = v50 * a3[5];
    v33 = v24 + v39;
    *(float *)v45 = v33;
    v35 = v25 + v41;
    v37 = v26 + v43;
    *(float *)&v45[1] = v35;
    *(float *)&v45[2] = v37;
    if ( v30 <= v31 )
    {
      v48 = 1;
      v27 = 1;
    }
    else
    {
      v27 = 0;
      v48 = 0;
    }
    v28 = 3 * v27;
    if ( (unsigned __int8)sub_1005F670(*(_DWORD *)&v12[4 * v27 + 8], a3, a4, a5, &v45[-3 * v27], a7, a8) )
      return sub_1005F670(*(_DWORD *)&v12[4 * (3 - v48)], a3, a4, &v44[v28], a6, a7, a8);
    else
      return 0;
  }
}
