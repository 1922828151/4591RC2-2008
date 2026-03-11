/*
 * func-name: sub_10010A60
 * func-address: 0x10010a60
 * callers: 0x10011d80, 0x10011e50, 0x10013a60
 * callees: 0x1000eaf0, 0x1014e1e0
 */

_DWORD *__thiscall sub_10010A60(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v6; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v7[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v8; // [esp+30h] [ebp-10h]
  int v9; // [esp+3Ch] [ebp-4h]

  v3 = (_DWORD *)sub_1014E1E0(a2);
  if ( !this )
    invalid_parameter_noinfo();
  if ( v3 == (_DWORD *)this[1] || (unsigned __int8)std::operator<<char>(a2, v3 + 3) )
  {
    std::string::string(v7, a2);
    v8 = 0;
    v9 = 0;
    v4 = sub_1000EAF0((int)this, &v6, (int)this, v3, (int)v7);
    this = (_DWORD *)*v4;
    v3 = (_DWORD *)v4[1];
    v9 = -1;
    std::string::~string(v7);
  }
  if ( !this )
    invalid_parameter_noinfo();
  if ( v3 == (_DWORD *)this[1] )
    invalid_parameter_noinfo();
  return v3 + 10;
}
