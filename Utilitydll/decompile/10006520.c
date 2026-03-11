/*
 * func-name: sub_10006520
 * func-address: 0x10006520
 * callers: 0x10003590, 0x100039e0, 0x10004430, 0x10004660, 0x10004730, 0x10004830, 0x10005100, 0x10007770, 0x10007910, 0x10008120, 0x10008410, 0x10008810, 0x10008890, 0x10008b70, 0x10009030, 0x10009150, 0x10009230, 0x1000aa00, 0x1000aba0, 0x1000b290, 0x1000e830, 0x1000ec50, 0x1000ed80, 0x1000ee90, 0x1000f140, 0x1000f2f0, 0x1000f3d0, 0x1000f490, 0x1000f590, 0x1000f600, 0x1000f6a0, 0x10016d50
 * callees: none
 */

int *__usercall sub_10006520@<eax>(int *result@<eax>)
{
  int v1; // esi

  v1 = *result;
  if ( *result )
  {
    result = (int *)InterlockedDecrement((volatile LONG *)(v1 + 4));
    if ( !result )
    {
      if ( v1 )
        return (int *)(**(int (__thiscall ***)(int, int))v1)(v1, 1);
    }
  }
  return result;
}
