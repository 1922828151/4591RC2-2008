/*
 * func-name: ?OnUPNPMapSucceed@Peer@P2P@Outpop@@IAEXW4EUPNPState@23@GPAVTSocket@IONetwork@3@@Z
 * func-address: 0x10003ae0
 * callers: 0x10009c60
 * callees: 0x10001050, 0x10002610, 0x1000ac90
 */

void __thiscall Outpop::P2P::Peer::OnUPNPMapSucceed(_DWORD *this, Outpop::Utility::Ref_Object *a2, int a3, int a4)
{
  Outpop::Utility::Ref_Object **sap; // eax
  int v6; // esi
  Outpop::Utility::Ref_Object *v7; // ebp
  unsigned int v8; // eax
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
  unsigned int ip_address; // [esp-8h] [ebp-34h]
  int port_number; // [esp-4h] [ebp-30h]
  Outpop::Utility::Ref_Object *v21; // [esp+14h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v22; // [esp+18h] [ebp-14h] BYREF
  Outpop::Utility::Ref_Object *v23; // [esp+1Ch] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-4h]

  if ( a2 == (Outpop::Utility::Ref_Object *)4 )
  {
    word_10030AF0 = a3;
    sap = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &a2);
    v24 = 0;
    v6 = this[6];
    v7 = *sap;
    port_number = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v6 + 44));
    ip_address = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v6 + 44));
    v8 = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v6 + 72));
    sub_1000AC90(v7, v8, ip_address, port_number);
    v24 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    v9 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    v24 = 1;
    *((_DWORD *)*sub_10002610(*v9, &a2) + 28) = this + 2;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    v24 = -1;
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    v10 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v21);
    v24 = 2;
    v11 = sub_10002610(*v10, &a2);
    LOBYTE(v24) = 3;
    v12 = (Outpop::Utility::Ref_Object *)this[25];
    if ( v12 )
      Outpop::Utility::Ref_Object::release(v12);
    v13 = *v11;
    v14 = *v11 == 0;
    this[25] = *v11;
    if ( !v14 )
      Outpop::Utility::Ref_Object::addref(v13);
    LOBYTE(v24) = 2;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    v24 = -1;
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    v15 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v23);
    v24 = 4;
    v16 = sub_10002610(*v15, &v22);
    LOBYTE(v24) = 5;
    v17 = (Outpop::Utility::Ref_Object *)this[26];
    if ( v17 )
      Outpop::Utility::Ref_Object::release(v17);
    v18 = *v16;
    v14 = *v16 == 0;
    this[26] = *v16;
    if ( !v14 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(v24) = 4;
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    v24 = -1;
    if ( v23 )
      Outpop::Utility::Ref_Object::release(v23);
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, a3);
  }
}
