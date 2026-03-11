/*
 * func-name: sub_1017E9E8
 * func-address: 0x1017e9e8
 * callers: none
 * callees: none
 */

int __stdcall sub_1017E9E8(_BYTE *a1, int a2, _BYTE *a3)
{
  int result; // eax

  result = 0;
  if ( !a2 )
    return -2147024809;
  do
  {
    if ( !*a3 )
      break;
    *a1++ = *a3++;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    --a1;
    result = -2147024774;
  }
  *a1 = 0;
  return result;
}
