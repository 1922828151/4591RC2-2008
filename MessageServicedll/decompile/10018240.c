/*
 * func-name: sub_10018240
 * func-address: 0x10018240
 * callers: 0x10017620
 * callees: 0x10018c00, 0x10018ce0, 0x100194b0
 */

int __usercall sub_10018240@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF
  void *v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  sub_10018CE0(&v6, a2);
  v3 = v9;
  v4 = v8;
  sub_100194B0(v6, v7, v8, v9);
  sub_10018C00(a1, (int)&v6, v6, v7, v4, v3);
  return 0;
}
