/*
 * func-name: sub_10092A20
 * func-address: 0x10092a20
 * callers: 0x10094190
 * callees: 0x10092510
 */

float *__thiscall sub_10092A20(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  float *result; // eax
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+4h] [ebp-14h]
  float v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(this + 312);
  v5 = *(_DWORD *)(this + 316);
  v6 = *(_DWORD *)(this + 320);
  v10 = (float)a3;
  *(_DWORD *)(this + 296) = v4;
  v7 = *(_DWORD *)(this + 324);
  *(_DWORD *)(this + 300) = v5;
  v9 = (float)a2;
  *(_DWORD *)(this + 304) = v6;
  *(_BYTE *)(this + 328) = 1;
  *(_DWORD *)(this + 308) = v7;
  result = sub_10092510(this, v11, v9, v10);
  *(float *)(this + 340) = *result;
  *(float *)(this + 344) = result[1];
  *(float *)(this + 348) = result[2];
  return result;
}
