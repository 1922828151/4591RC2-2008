/*
 * func-name: sub_1000B960
 * func-address: 0x1000b960
 * callers: 0x1000b290
 * callees: none
 */

LONG __usercall sub_1000B960@<eax>(LONG result@<eax>, LONG *a2@<ebx>, LONG *a3)
{
  LONG *i; // edi
  LONG v4; // esi
  bool v5; // zf

  for ( i = (LONG *)result; i != a3; ++i )
  {
    v4 = *i;
    if ( *i && !InterlockedDecrement((volatile LONG *)(v4 + 4)) && v4 )
      (**(void (__thiscall ***)(LONG, int))v4)(v4, 1);
    result = *a2;
    v5 = *a2 == 0;
    *i = *a2;
    if ( !v5 )
      result = InterlockedIncrement((volatile LONG *)(result + 4));
  }
  return result;
}
