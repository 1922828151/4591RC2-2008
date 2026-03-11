/*
 * func-name: ??0P2P_Channel@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10042140
 * callers: none
 * callees: 0x10005380, 0x1000df50, 0x10022970, 0x10022fa0
 */

Outpop::IONetwork::P2P_Channel *__thiscall Outpop::IONetwork::P2P_Channel::P2P_Channel(
        Outpop::IONetwork::P2P_Channel *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx

  Outpop::IONetwork::Channel::Channel(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::P2P_Channel::`vftable';
  *((_DWORD *)this + 45) = a2[45];
  *((_WORD *)this + 92) = *((_WORD *)a2 + 92);
  *((_WORD *)this + 93) = *((_WORD *)a2 + 93);
  *((_WORD *)this + 94) = *((_WORD *)a2 + 94);
  *((_WORD *)this + 95) = *((_WORD *)a2 + 95);
  *((_WORD *)this + 96) = *((_WORD *)a2 + 96);
  *((_WORD *)this + 97) = *((_WORD *)a2 + 97);
  *((_WORD *)this + 98) = *((_WORD *)a2 + 98);
  *((_BYTE *)this + 199) = *((_BYTE *)a2 + 199);
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  Outpop::IONetwork::Comminute_Container::Comminute_Container(
    (Outpop::IONetwork::P2P_Channel *)((char *)this + 204),
    (const struct Outpop::IONetwork::Comminute_Container *)(a2 + 51));
  sub_10022FA0((int)(a2 + 68), (int)this + 272);
  Outpop::IONetwork::Sequence_Container::Sequence_Container(
    (Outpop::IONetwork::P2P_Channel *)((char *)this + 428),
    (const struct Outpop::IONetwork::Sequence_Container *)(a2 + 107));
  *((_DWORD *)this + 151) = a2[151];
  *((_DWORD *)this + 152) = a2[152];
  *((_BYTE *)this + 612) = *((_BYTE *)a2 + 612);
  *((_DWORD *)this + 154) = a2[154];
  v3 = a2[155];
  *((_DWORD *)this + 155) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_DWORD *)this + 156) = a2[156];
  *((_DWORD *)this + 157) = a2[157];
  *((_BYTE *)this + 632) = *((_BYTE *)a2 + 632);
  std::string::string(a2 + 159);
  std::string::string(a2 + 166);
  v4 = a2[173];
  *((_DWORD *)this + 173) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v5 = a2[174];
  *((_DWORD *)this + 174) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  *((_BYTE *)this + 700) = *((_BYTE *)a2 + 700);
  *((_DWORD *)this + 176) = a2[176];
  *((_DWORD *)this + 177) = a2[177];
  return this;
}
