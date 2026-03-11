/*
 * func-name: sub_102A6CB0
 * func-address: 0x102a6cb0
 * callers: 0x100147ef
 * callees: 0x10002842, 0x100068e8, 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10015eab
 */

void __stdcall sub_102A6CB0(int a1, int a2, char a3)
{
  int v3; // eax
  int v4; // [esp-8h] [ebp-1Ch]
  int v5; // [esp-4h] [ebp-18h]
  int v6; // [esp+0h] [ebp-14h]
  Outpop::Utility::Ref_Object *v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  sub_1000D10C((int)&v7, 10, 10000, 0, 0, 512);
  v8 = 0;
  sub_10015EAB((int)&a3);
  sub_10002842(a1);
  sub_10002842(a2);
  v3 = sub_100068E8(v6, (int)v7);
  sub_1000E56B(*(_DWORD *)(v3 + 4), (int)&v7);
  sub_10013EB7(v4, v5);
  v8 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
}
