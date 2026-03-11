/*
 * func-name: ?interal_connect_remote_peer@Peer@P2P@Outpop@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10003f10
 * callers: 0x100029e0
 * callees: 0x10001050, 0x10007d00, 0x1000b090
 */

void __thiscall Outpop::P2P::Peer::interal_connect_remote_peer(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  Outpop::Utility::Ref_Object **sap; // eax
  Outpop::Utility::Ref_Object *v5; // [esp+14h] [ebp-20h] BYREF
  int v6; // [esp+18h] [ebp-1Ch]
  _DWORD *v7; // [esp+1Ch] [ebp-18h] BYREF
  int v8; // [esp+20h] [ebp-14h]
  int v9; // [esp+30h] [ebp-4h]

  sub_10007D00(&v7, a2);
  v3 = v7;
  v6 = this[17];
  if ( !v7 || v7 != this + 16 )
    invalid_parameter_noinfo();
  if ( v8 == v6 )
  {
    sap = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v5);
    v9 = 0;
    sub_1000B090(*sap, a2);
    v9 = -1;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
  }
  else
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v8 == v3[1] )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD *, int))(*this + 12))(this, v8 + 36);
  }
}
