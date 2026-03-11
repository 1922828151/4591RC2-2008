/*
 * func-name: sub_102C1930
 * func-address: 0x102c1930
 * callers: 0x101486d0, 0x102c19e0
 * callees: 0x102c09f0, 0x102c16a0
 */

float *__thiscall sub_102C1930(int this, int a2)
{
  float v3; // ecx
  float v4; // edx
  float *v5; // eax
  float v7; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+Ch] [ebp-10h]
  float v10[3]; // [esp+10h] [ebp-Ch] BYREF

  v9 = 0.0;
  v7 = -*(float *)(a2 + 4);
  v8 = *(float *)a2;
  if ( 0.0 == v7 && 0.0 == v8 )
    v7 = 1.0;
  v3 = v8;
  v4 = v9;
  *(float *)this = v7;
  *(float *)(this + 4) = v3;
  *(float *)(this + 8) = v4;
  v5 = sub_102C09F0(v10, (float *)a2, &v7);
  *(float *)(this + 16) = *v5;
  *(float *)(this + 20) = v5[1];
  *(float *)(this + 24) = v5[2];
  *(_DWORD *)(this + 32) = *(_DWORD *)a2;
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 8);
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 48) = 0.0;
  return sub_102C16A0((float *)this);
}
