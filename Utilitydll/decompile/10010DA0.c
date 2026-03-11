/*
 * func-name: sub_10010DA0
 * func-address: 0x10010da0
 * callers: 0x10010b60
 * callees: 0x10019586
 */

_DWORD *__usercall sub_10010DA0@<eax>(_DWORD *a1@<edx>, _DWORD *a2, _DWORD *a3)
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
