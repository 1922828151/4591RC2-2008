/*
 * func-name: sub_100F7830
 * func-address: 0x100f7830
 * callers: 0x100f4e90
 * callees: 0x10027400, 0x101100e0
 */

_DWORD *__thiscall sub_100F7830(_DWORD *this, unsigned int a2, int *a3)
{
  int v3; // edx
  unsigned int v5; // edi
  bool v6; // cc
  unsigned int v7; // ebx
  _DWORD *v8; // edi
  int v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-8h] BYREF

  v3 = a3[1];
  v5 = this[2];
  v6 = this[1] <= v5;
  v10[0] = *a3;
  v10[1] = v3;
  if ( !v6 )
    invalid_parameter_noinfo();
  v7 = this[1];
  if ( v7 > this[2] )
    invalid_parameter_noinfo();
  sub_101100E0(v11, this, v7, this, v5);
  v8 = (_DWORD *)this[1];
  if ( (unsigned int)v8 > this[2] )
    invalid_parameter_noinfo();
  return sub_10027400(this, (int)this, v8, a2, v10);
}
