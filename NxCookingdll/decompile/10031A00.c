/*
 * func-name: sub_10031A00
 * func-address: 0x10031a00
 * callers: 0x10031db0
 * callees: none
 */

void __cdecl sub_10031A00(float *a1, float *a2, float *a3)
{
  float v3; // eax
  int v4; // esi
  float v5; // eax
  int v6; // edi
  float v7; // eax
  int v8; // esi

  if ( a1[1] > (double)a2[1] )
  {
    v3 = *a2;
    v4 = *((_DWORD *)a2 + 1);
    *a2 = *a1;
    a2[1] = a1[1];
    *a1 = v3;
    *((_DWORD *)a1 + 1) = v4;
  }
  if ( a2[1] > (double)a3[1] )
  {
    v5 = *a3;
    v6 = *((_DWORD *)a3 + 1);
    *a3 = *a2;
    a3[1] = a2[1];
    *a2 = v5;
    *((_DWORD *)a2 + 1) = v6;
  }
  if ( a1[1] > (double)a2[1] )
  {
    v7 = *a2;
    v8 = *((_DWORD *)a2 + 1);
    *a2 = *a1;
    a2[1] = a1[1];
    *a1 = v7;
    *((_DWORD *)a1 + 1) = v8;
  }
}
