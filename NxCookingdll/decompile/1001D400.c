/*
 * func-name: sub_1001D400
 * func-address: 0x1001d400
 * callers: 0x1001d650
 * callees: 0x1001b780
 */

void __thiscall sub_1001D400(int this, __int16 *a2, unsigned int a3)
{
  __int16 *v3; // edi
  int v5; // ecx
  double v6; // st7
  int v7; // edx
  double v8; // st6
  int v9; // ebx
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st2
  double v14; // rt0
  double v15; // st2
  double v16; // st7
  double v17; // st1
  bool v18; // c0
  bool v19; // c3
  double v20; // st1
  double v21; // rt1
  double v22; // st1
  double v23; // st6
  double v24; // rt2
  double v25; // st1
  double v26; // st5
  bool v27; // c0
  double v28; // st6
  unsigned int v29; // ebp
  float v30; // [esp+8h] [ebp-Ch]
  float v31; // [esp+Ch] [ebp-8h]
  float v32; // [esp+10h] [ebp-4h]
  int v33; // [esp+18h] [ebp+4h]
  float v34; // [esp+18h] [ebp+4h]
  float v35; // [esp+18h] [ebp+4h]
  float v36; // [esp+18h] [ebp+4h]

  v3 = a2;
  if ( (unsigned int)a2 < a3 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)v3[4];
      v6 = (double)*v3 * *(float *)(this + 108);
      v7 = (unsigned __int16)v3[5];
      v8 = (double)v3[1] * *(float *)(this + 112);
      v33 = (unsigned __int16)v3[3];
      v9 = 1;
      v10 = (double)v3[2] * *(float *)(this + 116);
      ++*(_DWORD *)(this + 96);
      v11 = (double)v33 * *(float *)(this + 120);
      v30 = v11;
      v12 = (double)v5 * *(float *)(this + 124);
      v31 = v12;
      v13 = (double)v7 * *(float *)(this + 128);
      v32 = v13;
      v14 = v13;
      v15 = *(float *)(this + 16) - v6;
      v16 = v14;
      v34 = v15;
      if ( (LODWORD(v34) & 0x7FFFFFFFu) <= LODWORD(v30) )
      {
        v20 = 0.0;
      }
      else
      {
        v17 = *(float *)(this + 28) * v15;
        v18 = v17 > 0.0;
        v19 = 0.0 == v17;
        v20 = 0.0;
        if ( v18 || v19 )
          break;
      }
      v21 = v20;
      v22 = *(float *)(this + 20) - v8;
      v23 = v21;
      v35 = v22;
      if ( (LODWORD(v35) & 0x7FFFFFFFu) > LODWORD(v31) && *(float *)(this + 32) * v22 >= v23 )
        break;
      v24 = v22;
      v25 = *(float *)(this + 24) - v10;
      v26 = v24;
      v36 = v25;
      if ( (LODWORD(v36) & 0x7FFFFFFFu) <= LODWORD(v32) )
      {
        v28 = v25;
      }
      else
      {
        v27 = *(float *)(this + 36) * v25 < v23;
        v28 = v25;
        if ( !v27 )
          break;
      }
      if ( fabs(*(float *)(this + 32) * v28 - *(float *)(this + 36) * v26) > v16 * *(float *)(this + 44)
                                                                           + v12 * *(float *)(this + 48)
        || fabs(*(float *)(this + 36) * v15 - v28 * *(float *)(this + 28)) > v16 * *(float *)(this + 40)
                                                                           + v11 * *(float *)(this + 48)
        || fabs(v26 * *(float *)(this + 28) - v15 * *(float *)(this + 32)) > *(float *)(this + 40) * v31
                                                                           + v11 * *(float *)(this + 44) )
      {
        break;
      }
LABEL_16:
      v29 = *((_DWORD *)v3 + 3) & 0x80000000;
      if ( *((int *)v3 + 3) < 0 )
      {
        if ( !v9 )
          goto LABEL_20;
        sub_1001B780(this, *((_DWORD *)v3 + 3) & 0x3FFFFFFF);
        if ( (*(_BYTE *)(this + 4) & 5) == 5 )
          return;
      }
      if ( !v9 )
      {
LABEL_20:
        if ( !v29 )
          v3 += 12 * *((_DWORD *)v3 + 5);
      }
      v3 += 12;
      if ( (unsigned int)v3 >= a3 )
        return;
    }
    v9 = 0;
    goto LABEL_16;
  }
}
