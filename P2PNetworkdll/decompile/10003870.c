/*
 * func-name: ?OnUPNPStateChangeResult@Peer@P2P@Outpop@@IAEXW4EUPNPState@23@G@Z
 * func-address: 0x10003870
 * callers: 0x10009c40
 * callees: 0x10001050, 0x10002610, 0x1000ac90, 0x100232f7
 */

void __thiscall Outpop::P2P::Peer::OnUPNPStateChangeResult(_DWORD *this, int a2, int a3)
{
  int *sap; // eax
  Outpop::Utility::Ref_Object **v5; // eax
  int v6; // esi
  Outpop::Utility::Ref_Object *v7; // ebp
  unsigned int ip_address; // eax
  int *v9; // eax
  int *v10; // eax
  Outpop::Utility::Ref_Object **v11; // esi
  Outpop::Utility::Ref_Object *v12; // ecx
  Outpop::Utility::Ref_Object *v13; // ecx
  bool v14; // zf
  int *v15; // eax
  Outpop::Utility::Ref_Object **v16; // esi
  Outpop::Utility::Ref_Object *v17; // ecx
  Outpop::Utility::Ref_Object *v18; // ecx
  int port_number; // [esp-8h] [ebp-58h]
  int v20; // [esp-4h] [ebp-54h]
  Outpop::Utility::Ref_Object *v21; // [esp+14h] [ebp-3Ch] BYREF
  Outpop::Utility::Ref_Object *v22; // [esp+18h] [ebp-38h] BYREF
  Outpop::Utility::Ref_Object *v23; // [esp+1Ch] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v24; // [esp+20h] [ebp-30h] BYREF
  _BYTE v25[40]; // [esp+24h] [ebp-2Ch] BYREF
  int v26; // [esp+4Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, a2, a3);
  if ( a2 != 4 && (a2 == 3 || a2 == 5) )
  {
    sap = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v24);
    v26 = 0;
    sub_10002610(*sap, &v23);
    LOBYTE(v26) = 2;
    if ( v24 )
      Outpop::Utility::Ref_Object::release(v24);
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v25);
    LOBYTE(v26) = 3;
    Outpop::IONetwork::P2PUdpBuilder::get_local_addr(v23, (struct Outpop::IONetwork::INET_Addr *)v25);
    v5 = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    v25[36] = 4;
    v6 = this[6];
    v7 = *v5;
    port_number = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v6 + 44));
    Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v6 + 44));
    Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v6 + 72));
    v21 = (Outpop::Utility::Ref_Object *)Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v6 + 72));
    ip_address = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v6 + 72));
    sub_1000AC90(v7, ip_address, port_number, v20);
    LOBYTE(v26) = 3;
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    v9 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    LOBYTE(v26) = 5;
    *((_DWORD *)*sub_10002610(*v9, &v22) + 28) = this + 2;
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    LOBYTE(v26) = 3;
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    v10 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    LOBYTE(v26) = 6;
    v11 = sub_10002610(*v10, &v22);
    LOBYTE(v26) = 7;
    v12 = (Outpop::Utility::Ref_Object *)this[26];
    if ( v12 )
      Outpop::Utility::Ref_Object::release(v12);
    v13 = *v11;
    v14 = *v11 == 0;
    this[26] = *v11;
    if ( !v14 )
      Outpop::Utility::Ref_Object::addref(v13);
    LOBYTE(v26) = 6;
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    LOBYTE(v26) = 3;
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    v15 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    LOBYTE(v26) = 8;
    v16 = sub_10002610(*v15, &v22);
    LOBYTE(v26) = 9;
    v17 = (Outpop::Utility::Ref_Object *)this[25];
    if ( v17 )
      Outpop::Utility::Ref_Object::release(v17);
    v18 = *v16;
    v14 = *v16 == 0;
    this[25] = *v16;
    if ( !v14 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(v26) = 8;
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    LOBYTE(v26) = 3;
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    LOBYTE(v26) = 2;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v25);
    v26 = -1;
    if ( v23 )
      Outpop::Utility::Ref_Object::release(v23);
  }
}
