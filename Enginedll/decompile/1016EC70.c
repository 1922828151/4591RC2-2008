/*
 * func-name: ??1Event@@UAE@XZ
 * func-address: 0x1016ec70
 * callers: 0x100190f0
 * callees: 0x101a253a
 */

void __thiscall Event::~Event(Event *this)
{
  void *v2; // eax
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx

  *(_DWORD *)this = &Event::`vftable';
  v2 = (void *)*((_DWORD *)this + 10);
  *((_DWORD *)this + 9) = &BinStream::`vftable';
  if ( v2 )
  {
    operator delete[](v2);
    *((_DWORD *)this + 10) = 0;
  }
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 8);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 7);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  v5 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 6);
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  v6 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 5);
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
}
