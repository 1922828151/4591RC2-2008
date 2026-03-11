/*
 * func-name: sub_100108F0
 * func-address: 0x100108f0
 * callers: 0x100103f0, 0x10010480, 0x10013010, 0x10013be0
 * callees: 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__cdecl sub_100108F0()
{
  _DWORD *result; // eax
  _DWORD v1[10]; // [esp+0h] [ebp-28h] BYREF

  v1[6] = v1;
  result = operator new(0x40u);
  v1[5] = result;
  v1[9] = 0;
  if ( result )
    *result = result;
  v1[4] = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
