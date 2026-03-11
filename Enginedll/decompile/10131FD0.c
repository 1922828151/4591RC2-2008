/*
 * func-name: sub_10131FD0
 * func-address: 0x10131fd0
 * callers: 0x1012d8d0, 0x1012dbd0, 0x1012f070, 0x1012f380
 * callees: 0x10131ae0
 */

_DWORD *__thiscall sub_10131FD0(_DWORD *this, _DWORD *a2, int a3)
{
  int *v4; // edi
  bool v5; // zf
  int *v6; // ecx
  int v7; // edx
  _DWORD *result; // eax
  int v9; // ecx
  _DWORD v10[2]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[2]; // [esp+14h] [ebp-8h] BYREF

  v4 = sub_10131AE0(this, a3);
  v10[1] = v4;
  if ( !this )
    invalid_parameter_noinfo();
  v5 = v4 == (int *)this[1];
  v10[0] = this;
  if ( v5 || (unsigned __int8)std::operator<<char>(a3, v4 + 3) )
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
