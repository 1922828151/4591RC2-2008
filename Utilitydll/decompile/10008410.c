/*
 * func-name: sub_10008410
 * func-address: 0x10008410
 * callers: 0x10008d60
 * callees: none
 */

LONG __stdcall sub_10008410(LONG a1)
{
  LONG result; // eax
  int v2; // esi

  result = a1;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    result = InterlockedDecrement((volatile LONG *)(v2 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return result;
}
