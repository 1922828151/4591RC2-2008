/*
 * func-name: sub_1001A340
 * func-address: 0x1001a340
 * callers: none
 * callees: none
 */

char __thiscall sub_1001A340(int this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  v2 = *(Outpop::Utility::Ref_Object **)(this + 12);
  v4 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  v5 = 0;
  (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 8) + 4))(
    *(_DWORD *)(this + 8),
    &v4);
  v5 = -1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  return 1;
}
