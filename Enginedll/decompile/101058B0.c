/*
 * func-name: sub_101058B0
 * func-address: 0x101058b0
 * callers: 0x10106ce0
 * callees: none
 */

int __cdecl sub_101058B0(unsigned int a1, unsigned int a2, int a3)
{
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st3
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  int v13; // [esp+18h] [ebp+Ch]
  float v14; // [esp+18h] [ebp+Ch]

  if ( !a3 )
    return -2147024809;
  v9 = 1.0 / (double)a1;
  v5 = 0;
  v13 = 0;
  v6 = a3 + 8;
  v7 = v9;
  v10 = (0.0 - 0.5) * v9;
  do
  {
    ++v5;
    *(float *)(v6 - 8) = v10;
    v6 += 16;
    v11 = 1.0 / (double)a2;
    v14 = ((double)v13 - 0.5) * v11;
    v8 = v14;
    v13 = v5;
    *(float *)(v6 - 20) = v8;
    *(float *)(v6 - 12) = v8;
    v12 = v7 * 0.5;
    *(float *)(v6 - 16) = v12;
  }
  while ( v5 < 2 );
  return 0;
}
