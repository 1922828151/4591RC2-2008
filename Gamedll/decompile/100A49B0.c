/*
 * func-name: sub_100A49B0
 * func-address: 0x100a49b0
 * callers: 0x10003dd7
 * callees: 0x10018fe3
 */

_DWORD *__thiscall sub_100A49B0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // edi
  bool v5; // zf
  int *v6; // ecx
  int v7; // edx
  _DWORD *result; // eax
  int v9; // ecx
  _DWORD v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[2]; // [esp+14h] [ebp-8h] BYREF

  v4 = sub_10018FE3(a3);
  v10[1] = v4;
  if ( !this )
    _invalid_parameter_noinfo();
  v5 = v4 == this[1];
  v10[0] = this;
  if ( v5 || (unsigned __int8)std::operator<<char>(a3, v4 + 12) )
  {
    v11[1] = this[1];
    v11[0] = this;
    v6 = v11;
  }
  else
  {
    v6 = v10;
  }
  v7 = *v6;
  result = a2;
  v9 = v6[1];
  *a2 = v7;
  a2[1] = v9;
  return result;
}
