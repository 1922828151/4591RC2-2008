/*
 * func-name: sub_10023270
 * func-address: 0x10023270
 * callers: 0x10021ae0, 0x10022520
 * callees: 0x10029d92
 */

void __cdecl sub_10023270(Outpop::Utility::Ref_Object **a1, int a2)
{
  Outpop::Utility::Ref_Object **v2; // ecx
  Outpop::Utility::Ref_Object **v3; // ebx
  Outpop::Utility::Ref_Object **v5; // esi
  Outpop::Utility::Ref_Object *v6; // ecx
  _DWORD v7[6]; // [esp+0h] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[5] = v7;
  v3 = v2;
  v5 = a1;
  v7[4] = a1;
  v8 = 0;
  while ( a2 )
  {
    LOBYTE(v8) = 1;
    if ( v5 )
    {
      v6 = *v3;
      *v5 = *v3;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
    }
    LOBYTE(v8) = 0;
    --a2;
    ++v5;
  }
}
