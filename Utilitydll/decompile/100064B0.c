/*
 * func-name: sub_100064B0
 * func-address: 0x100064b0
 * callers: 0x10004830
 * callees: 0x10006bf0, 0x10006e40, 0x10008910
 */

int __usercall sub_100064B0@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF
  void *v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  sub_10006E40(&v6, a2);
  v3 = v9;
  v4 = v8;
  sub_10008910(v6, v7, v8, v9);
  sub_10006BF0(a1, (int)&v6, v6, v7, v4, v3);
  return 0;
}
