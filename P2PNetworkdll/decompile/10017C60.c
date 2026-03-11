/*
 * func-name: sub_10017C60
 * func-address: 0x10017c60
 * callers: none
 * callees: none
 */

_BYTE *__cdecl sub_10017C60(int a1, _BYTE **a2, _BYTE *a3, _DWORD *a4, int a5)
{
  _BYTE *v5; // esi
  _BYTE *result; // eax
  _BYTE *v7; // ecx
  bool v8; // zf

  v5 = (_BYTE *)*a4;
  result = a3;
  v7 = *a2;
  if ( a3 - *a2 > a5 - *a4 )
  {
    result = (_BYTE *)(a5 + v7 - v5);
    v8 = v7 == result;
    if ( v7 >= result )
      goto LABEL_6;
    do
    {
      if ( (*(result - 1) & 0xC0) != 0x80 )
        break;
      --result;
    }
    while ( result > v7 );
  }
  v8 = v7 == result;
LABEL_6:
  if ( v8 )
  {
    *a2 = v7;
    *a4 = v5;
  }
  else
  {
    do
      *v5++ = *v7++;
    while ( v7 != result );
    result = a4;
    *a2 = v7;
    *a4 = v5;
  }
  return result;
}
