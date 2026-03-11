/*
 * func-name: sub_10201D40
 * func-address: 0x10201d40
 * callers: 0x1000ccf2
 * callees: 0x100052c7, 0x10019b32
 */

int __thiscall sub_10201D40(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // edx
  unsigned int v5; // edi
  bool v6; // cc
  unsigned int v7; // ebx
  unsigned int v8; // edi
  _DWORD v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-8h] BYREF

  v3 = a3[1];
  v5 = this[2];
  v6 = this[1] <= v5;
  v10[0] = *a3;
  v10[1] = v3;
  if ( !v6 )
    _invalid_parameter_noinfo();
  v7 = this[1];
  if ( v7 > this[2] )
    _invalid_parameter_noinfo();
  sub_100052C7((int)v11, (int)this, v7, (int)this, v5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  return sub_10019B32((int)this, v8, a2, (int)v10);
}
