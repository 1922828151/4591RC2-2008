/*
 * func-name: ?interal_close_peer@Peer@P2P@Outpop@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100041d0
 * callers: 0x10002ae0
 * callees: 0x10001050, 0x10007d00, 0x1000b300
 */

void __thiscall Outpop::P2P::Peer::interal_close_peer(_DWORD *this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  Outpop::Utility::Ref_Object *v6; // esi
  int v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object **sap; // eax
  Outpop::Utility::Ref_Object *v10; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v11; // [esp+14h] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+28h] [ebp-4h]

  sub_10007D00(&v11, a2);
  v3 = this[17];
  v4 = this + 16;
  v5 = v11;
  if ( !v11 || v11 != v4 )
    invalid_parameter_noinfo();
  if ( v12 == v3 )
  {
    sap = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v10);
    v13 = 1;
    sub_1000B300(*sap);
    v13 = -1;
    v8 = v10;
    if ( !v10 )
      return;
  }
  else
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v12 == v5[1] )
      invalid_parameter_noinfo();
    v10 = *(Outpop::Utility::Ref_Object **)(v12 + 36);
    v6 = v10;
    if ( v10 )
      Outpop::Utility::Ref_Object::addref(v10);
    v13 = 0;
    v7 = *((_DWORD *)v10 + 2);
    if ( v7 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 24))(v7);
      *((_DWORD *)v10 + 2) = 0;
    }
    v13 = -1;
    v8 = v6;
  }
  Outpop::Utility::Ref_Object::release(v8);
}
