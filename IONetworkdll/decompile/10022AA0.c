/*
 * func-name: ??0Dgram_Channel@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10022aa0
 * callers: none
 * callees: 0x10005380, 0x1000acf0, 0x1000df50, 0x10022970, 0x10022fa0
 */

Outpop::IONetwork::Dgram_Channel *__thiscall Outpop::IONetwork::Dgram_Channel::Dgram_Channel(
        Outpop::IONetwork::Dgram_Channel *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  Outpop::IONetwork::Channel::Channel(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Channel::`vftable';
  *((_DWORD *)this + 45) = a2[45];
  *((_DWORD *)this + 46) = a2[46];
  *((_DWORD *)this + 47) = a2[47];
  *((_WORD *)this + 96) = *((_WORD *)a2 + 96);
  *((_DWORD *)this + 49) = a2[49];
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  *((_BYTE *)this + 201) = *((_BYTE *)a2 + 201);
  *((_WORD *)this + 101) = *((_WORD *)a2 + 101);
  *((_WORD *)this + 102) = *((_WORD *)a2 + 102);
  *((_WORD *)this + 103) = *((_WORD *)a2 + 103);
  *((_WORD *)this + 104) = *((_WORD *)a2 + 104);
  *((_WORD *)this + 105) = *((_WORD *)a2 + 105);
  *((_WORD *)this + 106) = *((_WORD *)a2 + 106);
  *((_BYTE *)this + 215) = *((_BYTE *)a2 + 215);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  Outpop::IONetwork::Comminute_Container::Comminute_Container(
    (Outpop::IONetwork::Dgram_Channel *)((char *)this + 220),
    (const struct Outpop::IONetwork::Comminute_Container *)(a2 + 55));
  sub_10022FA0((char *)this + 288);
  Outpop::IONetwork::Sequence_Container::Sequence_Container(
    (Outpop::IONetwork::Dgram_Channel *)((char *)this + 444),
    (const struct Outpop::IONetwork::Sequence_Container *)(a2 + 111));
  *((_BYTE *)this + 620) = *((_BYTE *)a2 + 620);
  *((_DWORD *)this + 156) = a2[156];
  v3 = a2[157];
  *((_DWORD *)this + 157) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_DWORD *)this + 158) = a2[158];
  *((_DWORD *)this + 159) = a2[159];
  *((_BYTE *)this + 640) = *((_BYTE *)a2 + 640);
  sub_1000ACF0((_DWORD *)this + 161);
  *((_DWORD *)this + 166) = a2[166];
  *((_DWORD *)this + 167) = a2[167];
  *((_DWORD *)this + 168) = a2[168];
  *((_DWORD *)this + 169) = a2[169];
  *((_DWORD *)this + 170) = a2[170];
  *((_DWORD *)this + 171) = a2[171];
  *((_DWORD *)this + 172) = a2[172];
  *((_DWORD *)this + 173) = a2[173];
  *((_DWORD *)this + 174) = a2[174];
  *((_DWORD *)this + 175) = a2[175];
  return this;
}
