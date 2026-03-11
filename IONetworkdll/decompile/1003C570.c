/*
 * func-name: sub_1003C570
 * func-address: 0x1003c570
 * callers: 0x100147d0, 0x10016130, 0x1003c250
 * callees: 0x1004f112
 */

Outpop::Utility::Ref_Object **__cdecl sub_1003C570(
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
