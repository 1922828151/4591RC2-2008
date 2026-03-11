/*
 * func-name: sub_100231C0
 * func-address: 0x100231c0
 * callers: 0x10022a60
 * callees: 0x10023450
 */

int __usercall sub_100231C0@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  char v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  v7 = 0;
  v6 = 0;
  sub_10023450(a1, v7, v7, v6);
  return a3 - 4 * ((a1 - a2) >> 2);
}
