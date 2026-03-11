/*
 * func-name: sub_1001C710
 * func-address: 0x1001c710
 * callers: 0x10025440
 * callees: none
 */

_DWORD *__usercall sub_1001C710@<eax>(_DWORD *result@<eax>, int a2, int a3, _DWORD *a4)
{
  int v4; // edx

  v4 = a2;
  if ( a2 != a3 )
  {
    result = (_DWORD *)(a2 + 16);
    do
    {
      *(result - 3) = a4[1];
      *(result - 2) = a4[2];
      *(result - 1) = a4[3];
      *result = a4[4];
      result[1] = a4[5];
      result[2] = a4[6];
      result[3] = a4[7];
      result[4] = a4[8];
      result[5] = a4[9];
      v4 += 40;
      result += 10;
    }
    while ( v4 != a3 );
  }
  return result;
}
