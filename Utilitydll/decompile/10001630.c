/*
 * func-name: ??MUtility@Outpop@@YAHABVTime_Value@01@0@Z
 * func-address: 0x10001630
 * callers: none
 * callees: none
 */

BOOL __cdecl Outpop::Utility::operator<(_DWORD *a1, _DWORD *a2)
{
  return *a2 > *a1 || *a2 == *a1 && a2[1] > a1[1];
}
