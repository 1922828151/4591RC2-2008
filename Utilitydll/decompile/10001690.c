/*
 * func-name: ??8Utility@Outpop@@YAHABVTime_Value@01@0@Z
 * func-address: 0x10001690
 * callers: none
 * callees: none
 */

BOOL __cdecl Outpop::Utility::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
