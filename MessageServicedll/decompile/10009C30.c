/*
 * func-name: sub_10009C30
 * func-address: 0x10009c30
 * callers: 0x100072f0, 0x10012ad0
 * callees: 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__cdecl sub_10009C30()
{
  _DWORD *result; // eax
  _DWORD v1[10]; // [esp+0h] [ebp-28h] BYREF

  v1[6] = v1;
  result = operator new(0x14u);
  v1[5] = result;
  v1[9] = 0;
  if ( result )
    *result = result;
  v1[4] = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
