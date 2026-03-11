/*
 * func-name: ?start@Peer@P2P@Outpop@@QAEXXZ
 * func-address: 0x10003100
 * callers: 0x10005230, 0x100054c0
 * callees: 0x10001050, 0x100014f0
 */

void __thiscall Outpop::P2P::Peer::start(Outpop::P2P::Peer *this)
{
  int v2; // eax
  Outpop::Utility::Ref_Object **sap; // eax
  Outpop::Utility::Ref_Object *v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  if ( !(unsigned __int8)std::operator==<char>((char *)this + 32, &unk_10026701) )
  {
    v2 = *((_DWORD *)this + 6);
    *(_DWORD *)(v2 + 8) = sub_10009C30;
    *(_DWORD *)(v2 + 12) = this;
    sap = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v4);
    v5 = 0;
    sub_100014F0(*((_DWORD *)this + 6), (Outpop::IONetwork::INET_Addr *)&unk_10030AD0, sap);
    v5 = -1;
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
  }
}
