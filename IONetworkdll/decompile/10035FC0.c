/*
 * func-name: sub_10035FC0
 * func-address: 0x10035fc0
 * callers: 0x10035d20
 * callees: 0x1004f112
 */

_DWORD *__usercall sub_10035FC0@<eax>(_DWORD *a1@<edx>, _DWORD *a2, _DWORD *a3)
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
