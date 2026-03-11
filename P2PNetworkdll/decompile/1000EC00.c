/*
 * func-name: sub_1000EC00
 * func-address: 0x1000ec00
 * callers: 0x10008500, 0x100099e0
 * callees: none
 */

_DWORD *__usercall sub_1000EC00@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>)
{
  for ( ; a3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = *a3;
      result[1] = a3[1];
    }
    a3 += 2;
  }
  return result;
}
