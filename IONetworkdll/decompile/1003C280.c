/*
 * func-name: sub_1003C280
 * func-address: 0x1003c280
 * callers: 0x1000b8d0, 0x10015b70, 0x1003baf0
 * callees: 0x1003c530
 */

int __usercall sub_1003C280@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  char v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  v7 = 0;
  v6 = 0;
  sub_1003C530(a1, v7, v7, v6);
  return a3 - 4 * ((a1 - a2) >> 2);
}
