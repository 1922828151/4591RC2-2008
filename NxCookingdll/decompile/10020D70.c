/*
 * func-name: sub_10020D70
 * func-address: 0x10020d70
 * callers: 0x10021fa0
 * callees: 0x1001fca0, 0x1001fda0, 0x10020b00
 */

char __usercall sub_10020D70@<al>(unsigned int *a1@<eax>, int a2@<ebx>, _DWORD *a3@<edi>, unsigned int *a4)
{
  char result; // al
  int v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+4h] [ebp-Ch]

  result = sub_10020B00(a4, a1, v6, v7);
  if ( result )
  {
    sub_1001FCA0(a1, a3, 1);
    sub_1001FDA0(*a4, a2, *a1, a3, 1);
    sub_1001FDA0(*a4, a2, *a1, a3, 1);
    sub_1001FCA0(a1, a3, 1);
    return 1;
  }
  return result;
}
