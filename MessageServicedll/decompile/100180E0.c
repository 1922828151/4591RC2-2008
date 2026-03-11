/*
 * func-name: sub_100180E0
 * func-address: 0x100180e0
 * callers: 0x100175d0
 * callees: 0x100183b0, 0x10018ce0, 0x100194b0
 */

int __usercall sub_100180E0@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v5; // [esp+10h] [ebp-10h] BYREF
  void *v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+18h] [ebp-8h]
  int v8; // [esp+1Ch] [ebp-4h]

  sub_10018CE0(&v5, a2);
  v3 = v8;
  sub_100194B0(v5, v6, v7, v8);
  sub_100183B0(a1, (int)&v5, v5, v6, v7, v3);
  return 0;
}
