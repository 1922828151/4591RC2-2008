/*
 * func-name: ??0Peer@P2P@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10002d60
 * callers: none
 * callees: 0x100013b0, 0x10007310, 0x100076e0, 0x10007ba0, 0x1000a7c0, 0x100234ce
 */

int __thiscall Outpop::P2P::Peer::Peer(int this, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v3; // eax
  int v4; // eax
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Ref_Object *v6; // edi
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // eax
  Outpop::Utility::Ref_Object *v9; // edi
  Outpop::Utility::Ref_Object *v11; // [esp-4h] [ebp-28h]

  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)this);
  *(_DWORD *)(this + 8) = Outpop::IONetwork::P2P_Acceptor_Handler::`vftable';
  *(_DWORD *)(this + 12) = Outpop::IONetwork::Channel_Handler::`vftable';
  *(_DWORD *)this = &Outpop::P2P::Peer::`vftable'{for `Outpop::Utility::Ref_Object'};
  *(_DWORD *)(this + 8) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::P2P_Acceptor_Handler'};
  *(_DWORD *)(this + 12) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  *(_DWORD *)(this + 16) = &Outpop::P2P::Peer::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  std::string::string(this + 32);
  sub_100076E0(this + 60, &a2);
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  sub_10007BA0(this + 112, &a2);
  *(_DWORD *)(this + 152) = 0;
  v11 = a2;
  *(_BYTE *)(this + 156) = 0;
  std::string::operator=(this + 32, v11);
  v3 = (Outpop::Utility::Ref_Object *)operator new(0x70u);
  a2 = v3;
  if ( v3 )
    v4 = sub_10007310(v3);
  else
    v4 = 0;
  *(_DWORD *)(this + 20) = v4;
  dword_10030AA4 = v4;
  v5 = (Outpop::Utility::Ref_Object *)operator new(0x70u);
  a2 = v5;
  if ( v5 )
    v6 = (Outpop::Utility::Ref_Object *)sub_100013B0((int)v5);
  else
    v6 = 0;
  a2 = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  v7 = *(Outpop::Utility::Ref_Object **)(this + 24);
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  *(_DWORD *)(this + 24) = v6;
  if ( v6 )
  {
    Outpop::Utility::Ref_Object::addref(v6);
    Outpop::Utility::Ref_Object::release(v6);
  }
  v8 = (Outpop::Utility::Ref_Object *)operator new(0xD0u);
  a2 = v8;
  if ( v8 )
    v9 = (Outpop::Utility::Ref_Object *)sub_1000A7C0(v8, this + 32);
  else
    v9 = 0;
  a2 = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  *((_DWORD *)v9 + 5) = sub_10009B90;
  *((_DWORD *)v9 + 6) = this;
  *((_DWORD *)v9 + 9) = sub_10009BB0;
  *((_DWORD *)v9 + 10) = this;
  *((_DWORD *)v9 + 13) = sub_10009BC0;
  *((_DWORD *)v9 + 14) = this;
  *((_DWORD *)v9 + 15) = sub_10009BE0;
  *((_DWORD *)v9 + 16) = this;
  *((_DWORD *)v9 + 7) = sub_10009BF0;
  *((_DWORD *)v9 + 8) = this;
  *((_DWORD *)v9 + 11) = sub_10009C10;
  *((_DWORD *)v9 + 12) = this;
  if ( dword_10030AEC )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)dword_10030AEC);
  dword_10030AEC = (int)v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  *(_DWORD *)(this + 160) = 0;
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  return this;
}
