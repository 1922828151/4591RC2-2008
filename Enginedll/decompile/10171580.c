/*
 * func-name: ?GetPacket@AsyncLoader@@QAEPAUAsyncPacket@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10171580
 * callers: 0x10005d50, 0x10044cf0
 * callees: 0x1010fd40
 */

int __thiscall AsyncLoader::GetPacket(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1010FD40(this + 16, &v8, a2);
  v3 = this[18];
  v4 = this + 17;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    invalid_parameter_noinfo();
  if ( v6 == v5[1] )
    invalid_parameter_noinfo();
  return v6 + 36;
}
