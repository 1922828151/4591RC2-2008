/*
 * func-name: sub_100182B0
 * func-address: 0x100182b0
 * callers: 0x10017620
 * callees: 0x10018e70, 0x100194b0, 0x1001daa0
 */

int __usercall sub_100182B0@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF
  void *v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  sub_1001DAA0(&v6, a2);
  v3 = v9;
  v4 = v8;
  sub_100194B0(v6, v7, v8, v9);
  sub_10018E70(a1, (int)&v6, v6, v7, v4, v3);
  return 0;
}
