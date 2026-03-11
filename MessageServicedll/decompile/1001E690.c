/*
 * func-name: sub_1001E690
 * func-address: 0x1001e690
 * callers: 0x1001e320
 * callees: 0x10029d92
 */

_DWORD *__usercall sub_1001E690@<eax>(_DWORD *a1@<edx>, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  result = a3;
  v5[7] = 0;
  while ( a2 != a1 )
  {
    if ( result )
    {
      *result = *a2;
      result[1] = a2[1];
    }
    result += 2;
    a2 += 2;
  }
  return result;
}
