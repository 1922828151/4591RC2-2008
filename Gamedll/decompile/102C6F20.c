/*
 * func-name: sub_102C6F20
 * func-address: 0x102c6f20
 * callers: 0x102c4300
 * callees: 0x102c6070, 0x102c6e70
 */

_DWORD *__thiscall sub_102C6F20(int *this, int a2)
{
  _DWORD *v3; // ebx
  int *v5; // [esp-10h] [ebp-2Ch] BYREF
  _DWORD *v6; // [esp-Ch] [ebp-28h]
  int v7; // [esp-8h] [ebp-24h]
  int v8; // [esp-4h] [ebp-20h]
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (_DWORD *)this[2];
  v8 = a2;
  if ( (unsigned int)v3 > this[3] )
    _invalid_parameter_noinfo();
  v5 = 0;
  v6 = v3;
  v7 = 0;
  if ( !this )
    _invalid_parameter_noinfo();
  v5 = this;
  if ( *this )
    sub_102C6070(&v5, *this);
  return sub_102C6E70(this, v9, v5, v6, v7, v8);
}
