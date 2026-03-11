/*
 * func-name: sub_102A6650
 * func-address: 0x102a6650
 * callers: 0x10015f91
 * callees: 0x10001b04, 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10016a4f
 */

void __stdcall sub_102A6650(char a1)
{
  int v1; // esi
  int v2; // [esp-8h] [ebp-20h]
  int v3; // [esp-4h] [ebp-1Ch]
  Outpop::Utility::Ref_Object *v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  v1 = sub_10016A4F(a1);
  if ( v1 )
  {
    sub_1000D10C((int)&v4, 18, 18003, 0, 0, 512);
    v5 = 0;
    sub_10001B04((int)&a1);
    sub_1000E56B(*(_DWORD *)(v1 + 236), (int)&v4);
    sub_10013EB7(v2, v3);
    v5 = -1;
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
  }
}
