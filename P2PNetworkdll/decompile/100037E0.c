/*
 * func-name: ?OnReportSucceed@Peer@P2P@Outpop@@IAEXXZ
 * func-address: 0x100037e0
 * callers: 0x10009be0
 * callees: 0x10001050, 0x1000afe0
 */

void __thiscall Outpop::P2P::Peer::OnReportSucceed(Outpop::P2P::Peer *this)
{
  Outpop::Utility::Ref_Object *v1; // [esp+8h] [ebp-10h] BYREF
  int v2; // [esp+14h] [ebp-4h]

  if ( *((_DWORD *)this + 38) )
  {
    sub_1000AFE0();
  }
  else
  {
    Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v1);
    v2 = 0;
    sub_1000AFE0();
    v2 = -1;
    if ( v1 )
      Outpop::Utility::Ref_Object::release(v1);
  }
}
