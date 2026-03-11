/*
 * func-name: sub_1009D0F0
 * func-address: 0x1009d0f0
 * callers: 0x1009d150
 * callees: none
 */

float *__stdcall sub_1009D0F0(float *a1, int a2, int a3, int a4)
{
  float *result; // eax
  float v5; // edx
  double v6; // st7
  double v7; // st7
  float v8; // [esp+14h] [ebp-18h]
  float v9; // [esp+18h] [ebp-14h]
  float v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)a4 + 4))(a4, v10, a2, a3);
  result = a1;
  v5 = v10[1];
  v6 = v10[2];
  *a1 = v10[0];
  v8 = v6;
  v7 = v10[3];
  a1[1] = v5;
  v9 = v7;
  a1[2] = v8;
  a1[3] = v9;
  return result;
}
