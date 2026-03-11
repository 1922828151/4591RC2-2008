/*
 * func-name: ??1Peer@P2P@Outpop@@UAE@XZ
 * func-address: 0x10002f90
 * callers: 0x10002870
 * callees: 0x100087a0, 0x1000e470, 0x10023306
 */

void __thiscall Outpop::P2P::Peer::~Peer(Outpop::P2P::Peer *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  int v5; // eax
  Outpop::Utility::Ref_Object *v6; // ecx

  *(_DWORD *)this = &Outpop::P2P::Peer::`vftable'{for `Outpop::Utility::Ref_Object'};
  *((_DWORD *)this + 2) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::P2P_Acceptor_Handler'};
  *((_DWORD *)this + 3) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  *((_DWORD *)this + 4) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 38);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  if ( *((_DWORD *)this + 33) )
    operator delete(*((void **)this + 33));
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  sub_100087A0((char *)this + 116);
  operator delete(*((void **)this + 30));
  *((_DWORD *)this + 30) = 0;
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 26);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 25);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  if ( *((_DWORD *)this + 20) )
    operator delete(*((void **)this + 20));
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  sub_1000E470((char *)this + 64);
  operator delete(*((void **)this + 17));
  *((_DWORD *)this + 17) = 0;
  std::string::~string((char *)this + 32);
  v5 = *((_DWORD *)this + 7);
  if ( v5 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v5 + 76));
  v6 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 6);
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
  *((_DWORD *)this + 4) = Outpop::IONetwork::Channel_Error_Handler::`vftable';
  Outpop::IONetwork::Channel_Handler::~Channel_Handler((Outpop::P2P::Peer *)((char *)this + 12));
  *((_DWORD *)this + 2) = Outpop::IONetwork::P2P_Acceptor_Handler::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object(this);
}
