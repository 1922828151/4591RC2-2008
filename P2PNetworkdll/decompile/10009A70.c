/*
 * func-name: sub_10009A70
 * func-address: 0x10009a70
 * callers: 0x10009400
 * callees: 0x1000a360
 */

int __usercall sub_10009A70@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  char v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  v7 = 0;
  v6 = 0;
  sub_1000A360(a1, v7, v7, v6);
  return a3 - 4 * ((a1 - a2) >> 2);
}
