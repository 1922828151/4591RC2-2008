/*
 * func-name: sub_1003C480
 * func-address: 0x1003c480
 * callers: 0x1000a280, 0x1000ac30, 0x10010440, 0x10013cb0, 0x1002d330, 0x1002e210, 0x10030ba0, 0x10032340, 0x1003b8c0, 0x1003bac0, 0x10042eb0, 0x10043720, 0x100447a0
 * callees: 0x1004f112
 */

void __cdecl sub_1003C480(Outpop::Utility::Ref_Object **a1, int a2)
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
