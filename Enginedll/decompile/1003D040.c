/*
 * func-name: sub_1003D040
 * func-address: 0x1003d040
 * callers: none
 * callees: 0x1003cda0, 0x101a2500, 0x101a2534
 */

int __stdcall sub_1003D040(int a1, const char *Src, float **a3)
{
  float *v3; // esi
  int v5; // edi

  *a3 = 0;
  v3 = (float *)operator new(0x50u);
  if ( v3 )
  {
    v5 = sub_1003CDA0(Src, v3);
    if ( v5 >= 0 )
    {
      v3[15] = 0.0;
      v3[14] = 0.0;
      v3[13] = 0.0;
      v3[12] = 0.0;
      v3[10] = 0.0;
      v3[9] = 0.0;
      v3[8] = 0.0;
      v3[7] = 0.0;
      v3[5] = 0.0;
      v3[4] = 0.0;
      v3[3] = 0.0;
      v3[2] = 0.0;
      v3[16] = 1.0;
      v3[11] = 1.0;
      v3[6] = 1.0;
      v3[1] = 1.0;
      v3[17] = 0.0;
      v3[18] = 0.0;
      v3[19] = 0.0;
      *a3 = v3;
      v3 = 0;
    }
    operator delete(v3);
    return v5;
  }
  else
  {
    operator delete(0);
    return -2147024882;
  }
}
