/*
 * func-name: sub_10008810
 * func-address: 0x10008810
 * callers: 0x100081f0
 * callees: 0x10009030
 */

int __usercall sub_10008810@<eax>(int *a1@<edx>, int a2)
{
  int v3; // [esp-8h] [ebp-18h]

  v3 = *a1;
  if ( *a1 )
    InterlockedIncrement((volatile LONG *)(*a1 + 4));
  return sub_10009030(a2, v3);
}
