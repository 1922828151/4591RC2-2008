/*
 * func-name: sub_1000B300
 * func-address: 0x1000b300
 * callers: 0x1000a1e0, 0x1000a4b0, 0x10022e00
 * callees: 0x10029d92
 */

_DWORD *__usercall sub_1000B300@<eax>(_DWORD *a1@<edx>, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  result = a2;
  v5[7] = 0;
  while ( a3 )
  {
    if ( result )
    {
      *result = *a1;
      result[1] = a1[1];
    }
    --a3;
    result += 2;
  }
  return result;
}
