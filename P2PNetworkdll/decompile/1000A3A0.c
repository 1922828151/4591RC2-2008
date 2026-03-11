/*
 * func-name: sub_1000A3A0
 * func-address: 0x1000a3a0
 * callers: 0x10009400, 0x10009a10
 * callees: 0x10023bc6
 */

Outpop::Utility::Ref_Object **__cdecl sub_1000A3A0(Outpop::Utility::Ref_Object **a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object **v2; // ecx
  Outpop::Utility::Ref_Object **v3; // esi
  Outpop::Utility::Ref_Object **v4; // edi
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf
  _DWORD v8[6]; // [esp+0h] [ebp-24h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  v8[5] = v8;
  v3 = a2;
  v4 = v2;
  v9 = 0;
  v8[4] = a2;
  while ( v4 != a1 )
  {
    LOBYTE(v9) = 1;
    if ( v3 )
    {
      v5 = *v4;
      v6 = *v4 == 0;
      *v3 = *v4;
      if ( !v6 )
        Outpop::Utility::Ref_Object::addref(v5);
    }
    ++v3;
    LOBYTE(v9) = 0;
    ++v4;
  }
  return v3;
}
