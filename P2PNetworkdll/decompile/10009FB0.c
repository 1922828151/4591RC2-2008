/*
 * func-name: sub_10009FB0
 * func-address: 0x10009fb0
 * callers: 0x10008500, 0x10009360
 * callees: none
 */

_DWORD *__usercall sub_10009FB0@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  for ( ; a3; result += 2 )
  {
    if ( result )
    {
      *result = *a2;
      result[1] = a2[1];
    }
    --a3;
  }
  return result;
}
