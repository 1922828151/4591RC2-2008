/*
 * func-name: ??0Event@@QAE@ABV0@@Z
 * func-address: 0x1001c560
 * callers: none
 * callees: none
 */

Event *__thiscall Event::Event(Event *this, const struct Event *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx

  *(_DWORD *)this = &Event::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((float *)this + 2) = *((float *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 5);
  *((_DWORD *)this + 5) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 6);
  *((_DWORD *)this + 6) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v5 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 7);
  *((_DWORD *)this + 7) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v6 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 8);
  *((_DWORD *)this + 8) = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  *((_DWORD *)this + 9) = &BinStream::`vftable';
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  return this;
}
