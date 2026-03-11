/*
 * func-name: sub_10008890
 * func-address: 0x10008890
 * callers: 0x10005b50
 * callees: 0x10009150
 */

int __usercall sub_10008890@<eax>(int a1@<edx>, int a2)
{
  int v2; // esi
  int v4; // [esp-8h] [ebp-1Ch]

  v2 = a1 - 4;
  v4 = *(_DWORD *)(a1 - 4);
  if ( v4 )
    InterlockedIncrement((volatile LONG *)(v4 + 4));
  return sub_10009150(v2, v4, a2);
}
