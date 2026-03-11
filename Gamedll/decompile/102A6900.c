/*
 * func-name: sub_102A6900
 * func-address: 0x102a6900
 * callers: 0x10018930
 * callees: 0x10001b04, 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10016a4f, 0x10018313
 */

void __stdcall sub_102A6900(char a1)
{
  int v1; // esi
  char v2; // dl
  int v3; // [esp-8h] [ebp-24h]
  int v4; // [esp-4h] [ebp-20h]
  char v5; // [esp+Bh] [ebp-11h] BYREF
  Outpop::Utility::Ref_Object *v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v1 = sub_10016A4F(a1);
  if ( v1 )
  {
    sub_1000D10C((int)&v6, 14, 14004, 0, 0, 512);
    v2 = *(_BYTE *)(v1 + 48);
    v7 = 0;
    v5 = v2;
    sub_10001B04((int)&a1);
    sub_10018313((int)&v5);
    sub_1000E56B(*(_DWORD *)(v1 + 236), (int)&v6);
    sub_10013EB7(v3, v4);
    v7 = -1;
    if ( v6 )
      Outpop::Utility::Ref_Object::release(v6);
  }
}
