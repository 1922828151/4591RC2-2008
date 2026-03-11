/*
 * func-name: sub_100233A0
 * func-address: 0x100233a0
 * callers: 0x100228c0, 0x10023160
 * callees: 0x10029d92
 */

Outpop::Utility::Ref_Object **__cdecl sub_100233A0(
        Outpop::Utility::Ref_Object **a1,
        Outpop::Utility::Ref_Object **a2,
        Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object **v3; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  _DWORD v7[6]; // [esp+0h] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[5] = v7;
  v3 = a3;
  v7[4] = a3;
  v8 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v8) = 1;
    if ( v3 )
    {
      v5 = *a1;
      *v3 = *a1;
      if ( v5 )
        Outpop::Utility::Ref_Object::addref(v5);
    }
    LOBYTE(v8) = 0;
    ++v3;
    ++a1;
  }
  return v3;
}
