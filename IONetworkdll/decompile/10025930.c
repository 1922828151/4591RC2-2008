/*
 * func-name: sub_10025930
 * func-address: 0x10025930
 * callers: 0x10015330, 0x10025330
 * callees: 0x1004f112
 */

_DWORD *__usercall sub_10025930@<eax>(_DWORD *a1@<edx>, _DWORD *a2, int a3)
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
