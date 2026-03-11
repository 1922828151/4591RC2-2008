/*
 * func-name: sub_10135320
 * func-address: 0x10135320
 * callers: 0x10076580
 * callees: 0x1017b990
 */

void __thiscall sub_10135320(_DWORD *this)
{
  double v1; // st7
  unsigned int v3; // ebp
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  float *v7; // ecx
  unsigned int v8; // edi
  int v9; // ecx
  float *v10; // ecx
  int v11; // eax
  double v12; // st7
  double v13; // st7
  float *v14; // eax
  bool v15; // cf
  float *v16; // esi
  float v17; // [esp+10h] [ebp-5Ch]
  int v18; // [esp+10h] [ebp-5Ch]
  int v19; // [esp+10h] [ebp-5Ch]
  float v20; // [esp+14h] [ebp-58h]
  float v21; // [esp+14h] [ebp-58h]
  float v22; // [esp+14h] [ebp-58h]
  float v23; // [esp+14h] [ebp-58h]
  float v24; // [esp+14h] [ebp-58h]
  float v25; // [esp+14h] [ebp-58h]
  float v26; // [esp+14h] [ebp-58h]
  float v27; // [esp+18h] [ebp-54h]
  float v28; // [esp+1Ch] [ebp-50h]
  float v29; // [esp+20h] [ebp-4Ch]
  float v30; // [esp+24h] [ebp-48h] BYREF
  float v31; // [esp+28h] [ebp-44h]
  float v32; // [esp+2Ch] [ebp-40h]
  float v33; // [esp+30h] [ebp-3Ch] BYREF
  float v34; // [esp+34h] [ebp-38h]
  float v35; // [esp+38h] [ebp-34h]
  float v36; // [esp+3Ch] [ebp-30h]
  float v37; // [esp+40h] [ebp-2Ch]
  float v38; // [esp+44h] [ebp-28h]
  float v39; // [esp+48h] [ebp-24h]
  float v40; // [esp+4Ch] [ebp-20h]
  float v41; // [esp+50h] [ebp-1Ch]
  float v42; // [esp+54h] [ebp-18h]
  float v43; // [esp+58h] [ebp-14h]
  float v44; // [esp+5Ch] [ebp-10h]
  _BYTE v45[12]; // [esp+60h] [ebp-Ch] BYREF

  v1 = 0.0;
  v3 = 0;
  while ( 1 )
  {
    v4 = this[4];
    if ( !v4 || v3 >= (this[5] - v4) >> 2 )
      break;
    v27 = v1;
    v5 = *(_DWORD **)(this[4] + 4 * v3);
    v28 = v1;
    v29 = v1;
    v33 = v1;
    v34 = v1;
    v35 = v1;
    v6 = v5[6];
    if ( !v6 || !((v5[7] - v6) >> 3) )
    {
      invalid_parameter_noinfo();
      v1 = 0.0;
    }
    v7 = **(float ***)v5[6];
    v8 = 1;
    v17 = v7[1] - *(float *)(*v5 + 4);
    v20 = v7[2] - *(float *)(*v5 + 8);
    v30 = *v7 - *(float *)*v5;
    v31 = v17;
    v32 = v20;
    if ( v5[9] > 1u )
    {
      do
      {
        v33 = v30;
        v34 = v31;
        v35 = v32;
        v9 = v5[6];
        if ( !v9 || v8 >= (v5[7] - v9) >> 3 )
          invalid_parameter_noinfo();
        v10 = **(float ***)(v5[6] + 8 * v8);
        v11 = *v5;
        v36 = *v10 - *(float *)*v5;
        v37 = v10[1] - *(float *)(v11 + 4);
        v12 = v10[2] - *(float *)(v11 + 8);
        v30 = v36;
        v31 = v37;
        v38 = v12;
        v32 = v38;
        v21 = v38 * v38 + v37 * v37 + v36 * v36;
        v13 = v21;
        v22 = v35 * v35 + v34 * v34 + v33 * v33;
        *(float *)&v18 = v13 * v22;
        v23 = *(float *)&v18 * 0.5;
        v24 = (1.5 - v23 * COERCE_FLOAT(1597463007 - (v18 >> 1)) * COERCE_FLOAT(1597463007 - (v18 >> 1)))
            * COERCE_FLOAT(1597463007 - (v18 >> 1));
        v14 = (float *)sub_1017B990(v45, &v33, &v30);
        v39 = *v14 * v24;
        v15 = ++v8 < v5[9];
        v40 = v14[1] * v24;
        v41 = v24 * v14[2];
        v27 = v39 + v27;
        v28 = v40 + v28;
        v29 = v41 + v29;
      }
      while ( v15 );
      v1 = 0.0;
    }
    v16 = (float *)v5[1];
    *(float *)&v19 = v29 * v29 + v27 * v27 + v28 * v28;
    v25 = *(float *)&v19 * 0.5;
    ++v3;
    v26 = (1.5 - v25 * COERCE_FLOAT(1597463007 - (v19 >> 1)) * COERCE_FLOAT(1597463007 - (v19 >> 1)))
        * COERCE_FLOAT(1597463007 - (v19 >> 1));
    v42 = v27 * v26;
    *v16 = v42;
    v43 = v28 * v26;
    v16[1] = v43;
    v44 = v26 * v29;
    v16[2] = v44;
  }
}
