/*
 * func-name: sub_10008A40
 * func-address: 0x10008a40
 * callers: 0x10003910, 0x10005b50, 0x10005bc0, 0x10007450, 0x1000ae20, 0x1000b210, 0x1000b290, 0x1000b640
 * callees: none
 */

LONG __usercall sub_10008A40@<eax>(LONG result@<eax>, int *a2@<ebx>)
{
  int *i; // edi
  int v3; // esi

  for ( i = (int *)result; i != a2; ++i )
  {
    v3 = *i;
    if ( *i )
    {
      result = InterlockedDecrement((volatile LONG *)(v3 + 4));
      if ( !result )
      {
        if ( v3 )
          result = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
      }
    }
  }
  return result;
}
