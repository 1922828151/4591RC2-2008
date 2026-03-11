/*
 * func-name: sub_10178DA0
 * func-address: 0x10178da0
 * callers: 0x10178e50
 * callees: 0x10178b10, 0x1017b990
 */

float *__thiscall sub_10178DA0(int this, int a2)
{
  float v3; // ecx
  float v4; // edx
  _DWORD *v5; // eax
  float v7; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+Ch] [ebp-10h]
  _BYTE v10[12]; // [esp+10h] [ebp-Ch] BYREF

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
  v5 = (_DWORD *)sub_1017B990(v10, a2, &v7);
  *(_DWORD *)(this + 16) = *v5;
  *(_DWORD *)(this + 20) = v5[1];
  *(_DWORD *)(this + 24) = v5[2];
  *(_DWORD *)(this + 32) = *(_DWORD *)a2;
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 8);
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 48) = 0.0;
  return sub_10178B10((float *)this);
}
