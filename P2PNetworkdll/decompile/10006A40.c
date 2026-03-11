/*
 * func-name: sub_10006A40
 * func-address: 0x10006a40
 * callers: 0x10005fe0
 * callees: 0x10007760, 0x10007840, 0x10009c80
 */

int __usercall sub_10006A40@<eax>(int a1@<eax>, int a2@<esi>)
{
  int v2; // edi
  int v4; // [esp+10h] [ebp-10h] BYREF
  void *v5; // [esp+14h] [ebp-Ch]
  int v6; // [esp+18h] [ebp-8h]
  int v7; // [esp+1Ch] [ebp-4h]

  sub_10007840(&v4, a1);
  v2 = v7;
  sub_10009C80(v4, v5, v6, v7);
  sub_10007760(a2, (int)&v4, v4, v5, v6, v2);
  return 0;
}
