/*
 * func-name: sub_100039E0
 * func-address: 0x100039e0
 * callers: 0x100038e0
 * callees: none
 */

void __stdcall sub_100039E0(_DWORD *a1)
{
  int v1; // esi
  int v2; // esi

  v1 = a1[10];
  if ( v1 && !InterlockedDecrement((volatile LONG *)(v1 + 4)) )
    (**(void (__thiscall ***)(int, int))v1)(v1, 1);
  v2 = a1[2];
  if ( v2 && !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
    (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  *a1 = &Outpop::Utility::Ref_Object::`vftable';
}
