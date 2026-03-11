/*
 * func-name: sub_100042E0
 * func-address: 0x100042e0
 * callers: 0x100043e0
 * callees: 0x100040f0
 */

float *__cdecl sub_100042E0(float *a1, int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int i; // eax
  double v6; // st7
  unsigned int v7; // edi
  double v8; // st6
  double v9; // st5
  double j; // st4
  float *v11; // eax
  double v12; // st0
  unsigned int k; // eax
  int v14; // ecx
  float *v15; // eax
  float v17[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * a3, 263);
  for ( i = 0; i < a3; a2 += 12 )
    *(_DWORD *)(v3 + 4 * i++) = a2;
  v6 = -0.001;
  v7 = 0;
  v8 = 0.0;
  v9 = 0.0;
  for ( j = 0.0; v7 < a3; ++v7 )
  {
    v11 = *(float **)(v3 + 4 * v7);
    v12 = v11[1] - j;
    if ( (*v11 - v9) * (*v11 - v9) + v12 * v12 + (v11[2] - v8) * (v11[2] - v8) - v6 * v6 > 0.0 )
    {
      for ( k = v7; k; *(_DWORD *)(v3 + 4 * k) = v14 )
      {
        --k;
        v14 = *(_DWORD *)(v3 + 4 * k + 4);
        *(_DWORD *)(v3 + 4 * k + 4) = *(_DWORD *)(v3 + 4 * k);
      }
      v15 = sub_100040F0(v17, v3 + 4, v7, 1);
      v6 = v15[3];
      v8 = v15[2];
      j = v15[1];
      v9 = *v15;
    }
  }
  a1[3] = v6;
  *a1 = v9;
  a1[1] = j;
  a1[2] = v8;
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v3);
  return a1;
}
