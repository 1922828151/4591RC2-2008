/*
 * func-name: sub_102020B0
 * func-address: 0x102020b0
 * callers: 0x1000332d
 * callees: 0x10015da2, 0x100168ba
 */

int __thiscall sub_102020B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  _DWORD *v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch]
  char v10[4]; // [esp+1Ch] [ebp-18h] BYREF
  int v11; // [esp+20h] [ebp-14h]
  int v12; // [esp+30h] [ebp-4h]

  sub_100168BA((int)&v8, (int)a2);
  v3 = v8;
  v11 = this[2];
  if ( !v8 || v8 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v9;
  if ( v9 == v11 )
  {
    v5 = (_DWORD *)*a2;
    v12 = 1;
    v8 = v5;
    v9 = 0;
    v6 = (_DWORD *)sub_10015DA2((int)v10, (int)&v8);
    v3 = (_DWORD *)*v6;
    v4 = v6[1];
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
