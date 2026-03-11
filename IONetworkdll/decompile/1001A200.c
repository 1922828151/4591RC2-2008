/*
 * func-name: sub_1001A200
 * func-address: 0x1001a200
 * callers: none
 * callees: 0x1001b1b0
 */

int __thiscall sub_1001A200(
        Outpop::Utility::Ref_Object *this,
        Outpop::Utility::Ref_Object *a2,
        int a3,
        Outpop::Utility::Ref_Object **a4)
{
  int v5; // ebp
  Outpop::Utility::Ref_Object *v7; // [esp-8h] [ebp-28h] BYREF
  Outpop::Utility::Ref_Object **v8; // [esp-4h] [ebp-24h]
  Outpop::Utility::Ref_Object *v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-4h]

  v5 = 0;
  v10 = 0;
  v9 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v10) = 1;
  v8 = a4;
  a4 = &v7;
  v7 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v10) = 1;
  if ( sub_1001B1B0((char *)this + 136, &a2, a3, v7, v8) == -1 )
    v5 = -1;
  LOBYTE(v10) = 0;
  if ( this )
    Outpop::Utility::Ref_Object::release(this);
  v10 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return v5;
}
