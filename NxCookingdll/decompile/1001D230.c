/*
 * func-name: sub_1001D230
 * func-address: 0x1001d230
 * callers: 0x1001d650
 * callees: 0x1001bf70
 */

void __thiscall sub_1001D230(int this, __int16 *a2, unsigned int a3)
{
  __int16 *i; // edi
  int v5; // ecx
  double v6; // st7
  int v7; // edx
  double v8; // st6
  int v9; // ebx
  double v10; // st5
  double v11; // st4
  double v12; // st3
  long double v13; // st7
  long double v14; // st2
  double v15; // st6
  long double v16; // st5
  double v17; // rtt
  long double v18; // st3
  double v19; // st5
  unsigned int v20; // ebp
  int v21; // [esp+Ch] [ebp+4h]
  float v22; // [esp+Ch] [ebp+4h]

  for ( i = a2; (unsigned int)i < a3; i += 12 )
  {
    v5 = (unsigned __int16)i[4];
    v6 = (double)*i * *(float *)(this + 108);
    v7 = (unsigned __int16)i[5];
    v8 = (double)i[1] * *(float *)(this + 112);
    v21 = (unsigned __int16)i[3];
    v9 = 1;
    v10 = (double)i[2] * *(float *)(this + 116);
    ++*(_DWORD *)(this + 96);
    v11 = (double)v21 * *(float *)(this + 120);
    v12 = (double)v5 * *(float *)(this + 124);
    v13 = *(float *)(this + 64) - v6;
    if ( *(float *)(this + 40) + v11 < fabs(v13)
      || (v14 = *(float *)(this + 68) - v8,
          v15 = (double)v7 * *(float *)(this + 128),
          *(float *)(this + 44) + v12 < fabs(v14))
      || (v16 = *(float *)(this + 72) - v10, *(float *)(this + 48) + v15 < fabs(v16))
      || *(float *)(this + 48) * v12 + *(float *)(this + 44) * v15 < fabs(
                                                                       v16 * *(float *)(this + 56)
                                                                     - v14 * *(float *)(this + 60))
      || (v17 = v12,
          v18 = v13 * *(float *)(this + 60) - v16 * *(float *)(this + 52),
          v19 = v17,
          fabs(v18) > v15 * *(float *)(this + 40) + *(float *)(this + 48) * v11)
      || (v22 = v14,
          v11 * *(float *)(this + 44) + v19 * *(float *)(this + 40) < fabs(
                                                                        v22 * *(float *)(this + 52)
                                                                      - v13 * *(float *)(this + 56))) )
    {
      v9 = 0;
    }
    v20 = *((_DWORD *)i + 3) & 0x80000000;
    if ( *((int *)i + 3) < 0 )
    {
      if ( !v9 )
        goto LABEL_13;
      sub_1001BF70(this, *((_DWORD *)i + 3) & 0x3FFFFFFF);
      if ( (*(_BYTE *)(this + 4) & 5) == 5 )
        return;
    }
    if ( !v9 )
    {
LABEL_13:
      if ( !v20 )
        i += 12 * *((_DWORD *)i + 5);
    }
  }
}
