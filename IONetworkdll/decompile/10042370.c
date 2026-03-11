/*
 * func-name: ??4P2P_Channel@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10042370
 * callers: none
 * callees: 0x100054f0, 0x1000e0a0, 0x10024980, 0x100425e0
 */

int __thiscall Outpop::IONetwork::P2P_Channel::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx

  Outpop::IONetwork::Channel::operator=((_DWORD *)this, (_DWORD *)a2);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_WORD *)(this + 184) = *(_WORD *)(a2 + 184);
  *(_WORD *)(this + 186) = *(_WORD *)(a2 + 186);
  *(_WORD *)(this + 188) = *(_WORD *)(a2 + 188);
  *(_WORD *)(this + 190) = *(_WORD *)(a2 + 190);
  *(_WORD *)(this + 192) = *(_WORD *)(a2 + 192);
  *(_WORD *)(this + 194) = *(_WORD *)(a2 + 194);
  *(_WORD *)(this + 196) = *(_WORD *)(a2 + 196);
  *(_BYTE *)(this + 199) = *(_BYTE *)(a2 + 199);
  *(_BYTE *)(this + 200) = *(_BYTE *)(a2 + 200);
  if ( this + 204 != a2 + 204 )
    sub_10024980(this + 204, a2 + 204);
  *(_WORD *)(this + 244) = *(_WORD *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  sub_100425E0();
  Outpop::IONetwork::Sequence_Container::operator=((char *)(this + 428), a2 + 428);
  *(_DWORD *)(this + 604) = *(_DWORD *)(a2 + 604);
  *(_DWORD *)(this + 608) = *(_DWORD *)(a2 + 608);
  *(_BYTE *)(this + 612) = *(_BYTE *)(a2 + 612);
  *(_DWORD *)(this + 616) = *(_DWORD *)(a2 + 616);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 620);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 620);
  *(_DWORD *)(this + 620) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  *(_DWORD *)(this + 624) = *(_DWORD *)(a2 + 624);
  *(_DWORD *)(this + 628) = *(_DWORD *)(a2 + 628);
  *(_BYTE *)(this + 632) = *(_BYTE *)(a2 + 632);
  std::string::operator=(a2 + 636);
  std::string::operator=(a2 + 664);
  v5 = *(Outpop::Utility::Ref_Object **)(this + 692);
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  v6 = *(Outpop::Utility::Ref_Object **)(a2 + 692);
  *(_DWORD *)(this + 692) = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  v7 = *(Outpop::Utility::Ref_Object **)(this + 696);
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = *(Outpop::Utility::Ref_Object **)(a2 + 696);
  *(_DWORD *)(this + 696) = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  *(_BYTE *)(this + 700) = *(_BYTE *)(a2 + 700);
  *(_DWORD *)(this + 704) = *(_DWORD *)(a2 + 704);
  *(_DWORD *)(this + 708) = *(_DWORD *)(a2 + 708);
  return this;
}
