/*
 * func-name: sub_102A6D60
 * func-address: 0x102a6d60
 * callers: 0x1000669f
 * callees: 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10015eab, 0x10016a4f
 */

void __stdcall sub_102A6D60(Outpop::Utility::Ref_Object *a1, int a2)
{
  int v2; // esi
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]

  v2 = sub_10016A4F((char)a1);
  if ( v2 )
  {
    sub_1000D10C((int)&a1, 15, 15022, 0, 0, 512);
    sub_10015EAB((int)&a2);
    sub_1000E56B(*(_DWORD *)(v2 + 236), (int)&a1);
    sub_10013EB7(v3, v4);
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
}
