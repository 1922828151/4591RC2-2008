/*
 * func-name: sub_10008190
 * func-address: 0x10008190
 * callers: 0x100073a0
 * callees: 0x100089e0, 0x10008ad0, 0x10009c80
 */

int __usercall sub_10008190@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF
  void *v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  sub_10008AD0(&v6, a2);
  v3 = v9;
  v4 = v8;
  sub_10009C80(v6, v7, v8, v9);
  sub_100089E0(a1, (int)&v6, v6, v7, v4, v3);
  return 0;
}
