/*
 * func-name: sub_102A6700
 * func-address: 0x102a6700
 * callers: 0x10012760
 * callees: 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10016a4f
 */

void __stdcall sub_102A6700(Outpop::Utility::Ref_Object *a1)
{
  int v1; // esi
  int v2; // [esp-8h] [ebp-1Ch]
  int v3; // [esp-4h] [ebp-18h]

  v1 = sub_10016A4F((char)a1);
  if ( v1 )
  {
    sub_1000D10C((int)&a1, 18, 18004, 0, 0, 512);
    sub_1000E56B(*(_DWORD *)(v1 + 236), (int)&a1);
    sub_10013EB7(v2, v3);
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
}
