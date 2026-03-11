/*
 * func-name: ??4Sequence_Container@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1000e0a0
 * callers: 0x10022d00, 0x10042370
 * callees: 0x10014eb0
 */

char *__thiscall Outpop::IONetwork::Sequence_Container::operator=(char *this, int a2)
{
  char *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)this + 6) = *(_DWORD *)(a2 + 24);
  *((_WORD *)this + 14) = *(_WORD *)(a2 + 28);
  *((_WORD *)this + 15) = *(_WORD *)(a2 + 30);
  *((_WORD *)this + 16) = *(_WORD *)(a2 + 32);
  *((_WORD *)this + 17) = *(_WORD *)(a2 + 34);
  *((_WORD *)this + 18) = *(_WORD *)(a2 + 36);
  *((_WORD *)this + 19) = *(_WORD *)(a2 + 38);
  v3 = this + 40;
  if ( v3 != (char *)(a2 + 40) )
    sub_10014EB0(v3, a2 + 40);
  if ( this + 80 != (char *)(a2 + 80) )
    sub_10014EB0(this + 80, a2 + 80);
  if ( this + 120 != (char *)(a2 + 120) )
    sub_10014EB0(this + 120, a2 + 120);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 40);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  v5 = *(Outpop::Utility::Ref_Object **)(a2 + 160);
  *((_DWORD *)this + 40) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v6 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 41);
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
  v7 = *(Outpop::Utility::Ref_Object **)(a2 + 164);
  *((_DWORD *)this + 41) = v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  v8 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 42);
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v9 = *(Outpop::Utility::Ref_Object **)(a2 + 168);
  *((_DWORD *)this + 42) = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  *((_WORD *)this + 86) = *(_WORD *)(a2 + 172);
  return this;
}
