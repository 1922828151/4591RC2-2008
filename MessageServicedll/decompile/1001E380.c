/*
 * func-name: sub_1001E380
 * func-address: 0x1001e380
 * callers: 0x100225b0
 * callees: 0x1001e650
 */

int __usercall sub_1001E380@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  char v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  v7 = 0;
  v6 = 0;
  sub_1001E650(a1, v7, v7, v6);
  return a3 - 8 * ((a1 - a2) >> 3);
}
