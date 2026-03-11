/*
 * func-name: ??4Dgram_Channel@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10022d00
 * callers: none
 * callees: 0x100054f0, 0x1000ada0, 0x1000e0a0, 0x10024980, 0x100425e0
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  Outpop::IONetwork::Channel::operator=((_DWORD *)this, (_DWORD *)a2);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_WORD *)(this + 192) = *(_WORD *)(a2 + 192);
  *(_DWORD *)(this + 196) = *(_DWORD *)(a2 + 196);
  *(_BYTE *)(this + 200) = *(_BYTE *)(a2 + 200);
  *(_BYTE *)(this + 201) = *(_BYTE *)(a2 + 201);
  *(_WORD *)(this + 202) = *(_WORD *)(a2 + 202);
  *(_WORD *)(this + 204) = *(_WORD *)(a2 + 204);
  *(_WORD *)(this + 206) = *(_WORD *)(a2 + 206);
  *(_WORD *)(this + 208) = *(_WORD *)(a2 + 208);
  *(_WORD *)(this + 210) = *(_WORD *)(a2 + 210);
  *(_WORD *)(this + 212) = *(_WORD *)(a2 + 212);
  *(_BYTE *)(this + 215) = *(_BYTE *)(a2 + 215);
  *(_BYTE *)(this + 216) = *(_BYTE *)(a2 + 216);
  if ( this + 220 != a2 + 220 )
    sub_10024980(this + 220, a2 + 220);
  *(_WORD *)(this + 260) = *(_WORD *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(this + 276) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(this + 280) = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(this + 284) = *(_DWORD *)(a2 + 284);
  sub_100425E0();
  Outpop::IONetwork::Sequence_Container::operator=((char *)(this + 444), a2 + 444);
  *(_BYTE *)(this + 620) = *(_BYTE *)(a2 + 620);
  *(_DWORD *)(this + 624) = *(_DWORD *)(a2 + 624);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 628);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 628);
  *(_DWORD *)(this + 628) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  *(_DWORD *)(this + 632) = *(_DWORD *)(a2 + 632);
  *(_DWORD *)(this + 636) = *(_DWORD *)(a2 + 636);
  *(_BYTE *)(this + 640) = *(_BYTE *)(a2 + 640);
  sub_1000ADA0(a2 + 644, this + 644);
  *(_DWORD *)(this + 664) = *(_DWORD *)(a2 + 664);
  *(_DWORD *)(this + 668) = *(_DWORD *)(a2 + 668);
  *(_DWORD *)(this + 672) = *(_DWORD *)(a2 + 672);
  *(_DWORD *)(this + 676) = *(_DWORD *)(a2 + 676);
  *(_DWORD *)(this + 680) = *(_DWORD *)(a2 + 680);
  *(_DWORD *)(this + 684) = *(_DWORD *)(a2 + 684);
  *(_DWORD *)(this + 688) = *(_DWORD *)(a2 + 688);
  *(_DWORD *)(this + 692) = *(_DWORD *)(a2 + 692);
  *(_DWORD *)(this + 696) = *(_DWORD *)(a2 + 696);
  *(_DWORD *)(this + 700) = *(_DWORD *)(a2 + 700);
  return this;
}
