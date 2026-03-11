/*
 * func-name: ??0Sequence_Container@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000df50
 * callers: 0x10022aa0, 0x10042140
 * callees: 0x10014a00
 */

Outpop::IONetwork::Sequence_Container *__thiscall Outpop::IONetwork::Sequence_Container::Sequence_Container(
        Outpop::IONetwork::Sequence_Container *this,
        const struct Outpop::IONetwork::Sequence_Container *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_WORD *)this + 14) = *((_WORD *)a2 + 14);
  *((_WORD *)this + 15) = *((_WORD *)a2 + 15);
  *((_WORD *)this + 16) = *((_WORD *)a2 + 16);
  *((_WORD *)this + 17) = *((_WORD *)a2 + 17);
  *((_WORD *)this + 18) = *((_WORD *)a2 + 18);
  *((_WORD *)this + 19) = *((_WORD *)a2 + 19);
  sub_10014A00((char *)this + 40);
  sub_10014A00((char *)this + 80);
  sub_10014A00((char *)this + 120);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 40);
  *((_DWORD *)this + 40) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 41);
  *((_DWORD *)this + 41) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v5 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 42);
  *((_DWORD *)this + 42) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  *((_WORD *)this + 86) = *((_WORD *)a2 + 86);
  return this;
}
