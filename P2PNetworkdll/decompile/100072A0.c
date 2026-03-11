/*
 * func-name: sub_100072A0
 * func-address: 0x100072a0
 * callers: 0x10004730
 * callees: 0x10007840, 0x10007c20, 0x10009c80
 */

int __usercall sub_100072A0@<eax>(int a1@<eax>, int a2@<esi>)
{
  int v2; // edi
  int v3; // ebp
  int v5; // [esp+10h] [ebp-14h] BYREF
  void *v6; // [esp+14h] [ebp-10h]
  int v7; // [esp+18h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-8h]

  sub_10007840(&v5, a1);
  v2 = v8;
  v3 = v7;
  sub_10009C80(v5, v6, v7, v8);
  sub_10007C20(a2, (int)&v5, v5, v6, v3, v2);
  return 0;
}
