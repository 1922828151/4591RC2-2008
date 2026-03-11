/*
 * func-name: sub_10031470
 * func-address: 0x10031470
 * callers: 0x100337a0
 * callees: 0x100313b0, 0x10031410
 */

_DWORD *__thiscall sub_10031470(float *this, _DWORD *a2, float *a3)
{
  float *v4; // esi
  float *v5; // ecx
  _DWORD *result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  float v10[3]; // [esp+Ch] [ebp-18h] BYREF
  float v11[3]; // [esp+18h] [ebp-Ch] BYREF

  v4 = sub_100313B0(this + 3, v10, a3 + 3);
  v5 = sub_10031410(this, v11, a3);
  result = a2;
  *a2 = *(_DWORD *)v5;
  v7 = *((_DWORD *)v5 + 1);
  v8 = *((_DWORD *)v5 + 2);
  a2[1] = v7;
  a2[3] = *(_DWORD *)v4;
  v9 = *((_DWORD *)v4 + 2);
  a2[2] = v8;
  a2[4] = *((_DWORD *)v4 + 1);
  a2[5] = v9;
  return result;
}
