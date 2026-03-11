/*
 * func-name: ?OnKPError@Peer@P2P@Outpop@@IAEXH@Z
 * func-address: 0x10005230
 * callers: 0x100054c0, 0x10009bb0
 * callees: 0x10001050, 0x10003100, 0x1000a930
 */

void __thiscall Outpop::P2P::Peer::OnKPError(Outpop::P2P::Peer *this, int a2)
{
  Outpop::P2P::Peer *v2; // edi
  Outpop::Utility::Ref_Object *v3; // [esp+Ch] [ebp-10h] BYREF
  int v4; // [esp+18h] [ebp-4h]

  v2 = this;
  if ( *((_DWORD *)this + 25) && *((_DWORD *)this + 26) )
  {
    Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v3);
    v4 = 0;
    sub_1000A930();
    v4 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    *((_DWORD *)v2 + 40) = 0;
    this = v2;
  }
  Outpop::P2P::Peer::start(this);
}
