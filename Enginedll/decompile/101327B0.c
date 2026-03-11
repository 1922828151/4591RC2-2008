/*
 * func-name: sub_101327B0
 * func-address: 0x101327b0
 * callers: 0x1012f140, 0x1012f200, 0x1012f2c0, 0x1012f450, 0x1012f510
 * callees: 0x101324c0, 0x1014e1e0
 */

_DWORD *__thiscall sub_101327B0(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-34h] BYREF
  _BYTE v8[28]; // [esp+8h] [ebp-2Ch] BYREF
  float v9; // [esp+24h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v10; // [esp+28h] [ebp-Ch]
  void *v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]

  v12 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v11 = &loc_101B3148;
  v10 = ExceptionList;
  v4 = (_DWORD *)sub_1014E1E0(a2);
  if ( !this )
    invalid_parameter_noinfo();
  if ( v4 == (_DWORD *)this[1] || (unsigned __int8)std::operator<<char>(a2, v4 + 3) )
  {
    std::string::string(v8, a2);
    v9 = 0.0;
    v12 = 0;
    v5 = sub_101324C0((int)this, &v7, (int)this, v4, (int)v8);
    this = (_DWORD *)*v5;
    v4 = (_DWORD *)v5[1];
    v12 = -1;
    std::string::~string(v8);
  }
  if ( !this )
    invalid_parameter_noinfo();
  if ( v4 == (_DWORD *)this[1] )
    invalid_parameter_noinfo();
  return v4 + 10;
}
