/*
 * func-name: ??OUtility@Outpop@@YAHABVTime_Value@01@0@Z
 * func-address: 0x100015d0
 * callers: none
 * callees: none
 */

BOOL __cdecl Outpop::Utility::operator>(_DWORD *a1, _DWORD *a2)
{
  return *a1 > *a2 || *a1 == *a2 && a1[1] > a2[1];
}
