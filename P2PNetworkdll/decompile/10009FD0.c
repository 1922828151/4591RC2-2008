/*
 * func-name: sub_10009FD0
 * func-address: 0x10009fd0
 * callers: 0x10008c80, 0x10009400
 * callees: 0x10023bc6
 */

void __cdecl sub_10009FD0(Outpop::Utility::Ref_Object **a1, Outpop::Utility::Ref_Object **a2)
{
  int v2; // ecx
  int v3; // edi
  Outpop::Utility::Ref_Object **v4; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf
  _DWORD v7[6]; // [esp+0h] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[5] = v7;
  v3 = v2;
  v4 = a1;
  v7[4] = a1;
  v8 = 0;
  while ( v3 )
  {
    LOBYTE(v8) = 1;
    if ( v4 )
    {
      v5 = *a2;
      v6 = *a2 == 0;
      *v4 = *a2;
      if ( !v6 )
        Outpop::Utility::Ref_Object::addref(v5);
    }
    --v3;
    ++v4;
    LOBYTE(v8) = 0;
  }
}
