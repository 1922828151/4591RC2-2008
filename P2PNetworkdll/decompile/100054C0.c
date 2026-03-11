/*
 * func-name: ?interal_change_peer_id@Peer@P2P@Outpop@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100054c0
 * callers: 0x10002d30
 * callees: 0x10001050, 0x10003100, 0x10005230
 */

void __thiscall Outpop::P2P::Peer::interal_change_peer_id(Outpop::P2P::Peer *this, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v3; // edi
  bool v4; // bl
  Outpop::Utility::Ref_Object **sap; // eax
  Outpop::Utility::Ref_Object *v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v3 = a2;
  std::string::operator=((char *)this + 32, a2);
  v4 = *Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &a2) != 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  if ( v4 )
  {
    sap = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v6);
    v7 = 0;
    std::string::operator=((char *)*sap + 68, v3);
    v7 = -1;
    if ( v6 )
      Outpop::Utility::Ref_Object::release(v6);
    Outpop::P2P::Peer::OnKPError(this, 0);
  }
  else
  {
    Outpop::P2P::Peer::start(this);
  }
}
