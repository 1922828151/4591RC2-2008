/*
 * func-name: sub_10004730
 * func-address: 0x10004730
 * callers: 0x10004810
 * callees: none
 */

int __thiscall sub_10004730(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  int result; // eax

  *this = &Outpop::Utility::Timer_Process_Message::`vftable';
  v2 = this[4];
  if ( v2 && !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
    (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  v3 = this[3];
  if ( v3 && !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  result = -1;
  *this = &Outpop::Utility::Thread_Message::`vftable';
  *this = &Outpop::Utility::Ref_Object::`vftable';
  return result;
}
