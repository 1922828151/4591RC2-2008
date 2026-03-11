/*
 * func-name: sub_102ABF90
 * func-address: 0x102abf90
 * callers: 0x10018e8f
 * callees: 0x102c9d98
 */

void __thiscall sub_102ABF90(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // eax
  Outpop::Utility::Ref_Object *v3; // esi
  Outpop::Utility::Ref_Object *v4; // ecx

  v2 = (Outpop::Utility::Ref_Object *)operator new(0xCu);
  v3 = v2;
  if ( v2 )
  {
    Outpop::Utility::Ref_Object::Ref_Object(v2);
    *(_DWORD *)v3 = &Ping_Manager::Ping_Handler::`vftable';
    *((_DWORD *)v3 + 2) = this;
  }
  else
  {
    v3 = 0;
  }
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v4 = (Outpop::Utility::Ref_Object *)this[3];
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  this[3] = v3;
  if ( v3 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    Outpop::Utility::Ref_Object::release(v3);
  }
}
