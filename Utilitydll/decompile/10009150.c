/*
 * func-name: sub_10009150
 * func-address: 0x10009150
 * callers: 0x10008890
 * callees: 0x10009340
 */

LONG __usercall sub_10009150@<eax>(int *a1@<ecx>, int *a2@<ebx>, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  bool v8; // zf
  LONG result; // eax

  v6 = *a1;
  if ( *a1 && !InterlockedDecrement((volatile LONG *)(v6 + 4)) && v6 )
    (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  v7 = *a2;
  v8 = *a2 == 0;
  *a1 = *a2;
  if ( !v8 )
    InterlockedIncrement((volatile LONG *)(v7 + 4));
  if ( a4 )
    InterlockedIncrement((volatile LONG *)(a4 + 4));
  result = sub_10009340((a3 - (int)a2) >> 2, a4, a5);
  if ( a4 )
  {
    result = InterlockedDecrement((volatile LONG *)(a4 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))a4)(a4, 1);
  }
  return result;
}
