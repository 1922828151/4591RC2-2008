/*
 * func-name: sub_102C65B0
 * func-address: 0x102c65b0
 * callers: 0x102c6cd0, 0x102c6da0, 0x102c6e70
 * callees: 0x102c6070
 */

_DWORD *__thiscall sub_102C65B0(int *this, _DWORD *a2, int a3)
{
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v4 = *this == 0;
  v5 = this[1];
  v6 = this[2];
  v12 = v5;
  v13 = v6;
  if ( v4 )
    _invalid_parameter_noinfo();
  v11 = *this;
  sub_102C6070(&v11, a3);
  v7 = v11;
  v4 = v11 == 0;
  v8 = v12;
  v9 = v13;
  *a2 = 0;
  a2[1] = v8;
  a2[2] = v9;
  if ( v4 )
    _invalid_parameter_noinfo();
  *a2 = v7;
  return a2;
}
