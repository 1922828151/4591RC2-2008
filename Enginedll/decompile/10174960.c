/*
 * func-name: ?CreatePacket@AsyncLoader@@QAEPAUAsyncPacket@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10174960
 * callers: 0x10006780, 0x10045740
 * callees: 0x10031ec0, 0x10032240, 0x1010fd40, 0x10176a10, 0x10177070, 0x101779b0
 */

int __thiscall AsyncLoader::CreatePacket(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // edi
  _DWORD *v12; // [esp+0h] [ebp-124h] BYREF
  int v13; // [esp+4h] [ebp-120h]
  int v14[30]; // [esp+Ch] [ebp-118h] BYREF
  int v15[39]; // [esp+84h] [ebp-A0h] BYREF
  int v16; // [esp+120h] [ebp-4h]

  v16 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v15[38] = (int)&loc_101B6F91;
  v15[37] = (int)ExceptionList;
  v4 = this + 16;
  sub_1010FD40(this + 16, &v12, a2);
  v5 = this[18];
  v6 = this + 17;
  v7 = v12;
  if ( !v12 || v12 != v6 )
    invalid_parameter_noinfo();
  if ( v13 == v5 )
  {
    sub_10176A10(v14);
    v16 = 0;
    std::string::operator=(v14, a2);
    v9 = sub_10177070(a2, v14);
    LOBYTE(v16) = 1;
    sub_101779B0(&v12, v9);
    LOBYTE(v16) = 0;
    sub_10032240(v15);
    sub_1010FD40(v4, &v12, a2);
    v10 = v12;
    if ( !v12 )
      invalid_parameter_noinfo();
    v11 = v13;
    if ( v13 == v10[1] )
      invalid_parameter_noinfo();
    v16 = -1;
    sub_10031EC0(v14);
    return v11 + 36;
  }
  else
  {
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v13 == v7[1] )
      invalid_parameter_noinfo();
    return v13 + 36;
  }
}
