/*
 * func-name: sub_10009F70
 * func-address: 0x10009f70
 * callers: 0x10002840, 0x10007640, 0x10007da0, 0x100185e0
 * callees: 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__cdecl sub_10009F70()
{
  _DWORD *result; // eax
  _DWORD v1[10]; // [esp+0h] [ebp-28h] BYREF

  v1[6] = v1;
  result = operator new(0x34u);
  v1[5] = result;
  v1[9] = 0;
  if ( result )
    *result = result;
  v1[4] = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
