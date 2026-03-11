/*
 * func-name: sub_100043C0
 * func-address: 0x100043c0
 * callers: 0x10004190, 0x10004430, 0x10007200, 0x10007770
 * callees: none
 */

LONG __stdcall sub_100043C0(LONG a1)
{
  LONG result; // eax
  int v2; // esi

  result = a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    result = InterlockedDecrement((volatile LONG *)(v2 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return result;
}
