/*
 * func-name: sub_1009D250
 * func-address: 0x1009d250
 * callers: none
 * callees: 0x101a2516, 0x101a26c0
 */

float *__stdcall sub_1009D250(float *a1, float *a2, int a3)
{
  unsigned int v4; // ecx
  float *result; // eax
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+10h] [ebp+8h]
  float v8; // [esp+10h] [ebp+8h]
  float v9; // [esp+10h] [ebp+8h]
  float v10; // [esp+10h] [ebp+8h]

  v6 = *a2 - 0.5;
  v7 = a2[2] - 0.5;
  v8 = v7 * v7 + v6 * v6;
  v9 = sqrt(v8);
  v10 = v9 + 0.5;
  if ( v10 > 1.0 )
    v10 = 1.0;
  v4 = ((_DWORD *)&unk_102879F0 - (int)(-256.0 * v10))[-256 * (int)(a2[1] * -256.0)];
  result = a1;
  *a1 = (double)BYTE2(v4) * 0.003921568859368563;
  a1[1] = (double)BYTE1(v4) * 0.003921568859368563;
  a1[2] = (double)(unsigned __int8)v4 * 0.003921568859368563;
  a1[3] = 0.003921568859368563 * (double)HIBYTE(v4);
  return result;
}
