/*
 * func-name: ??0Peer@P2P@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10002630
 * callers: none
 * callees: 0x100063d0, 0x10006ab0
 */

Outpop::P2P::Peer *__thiscall Outpop::P2P::Peer::Peer(Outpop::P2P::Peer *this, const struct Outpop::P2P::Peer *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  int v4; // eax
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx

  *(_DWORD *)this = Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = Outpop::IONetwork::P2P_Acceptor_Handler::`vftable';
  *((_DWORD *)this + 3) = Outpop::IONetwork::Channel_Handler::`vftable';
  *(_DWORD *)this = &Outpop::P2P::Peer::`vftable'{for `Outpop::Utility::Ref_Object'};
  *((_DWORD *)this + 2) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::P2P_Acceptor_Handler'};
  *((_DWORD *)this + 3) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  *((_DWORD *)this + 4) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 6);
  *((_DWORD *)this + 6) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v4 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 7) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v4 + 76));
  std::string::string((char *)this + 32, (char *)a2 + 32);
  sub_100063D0((char *)this + 60);
  v5 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 25);
  *((_DWORD *)this + 25) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v6 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 26);
  *((_DWORD *)this + 26) = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  sub_10006AB0((char *)this + 112);
  v7 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 38);
  *((_DWORD *)this + 38) = v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  *((_BYTE *)this + 156) = *((_BYTE *)a2 + 156);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  return this;
}
