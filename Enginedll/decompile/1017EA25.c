/*
 * func-name: sub_1017EA25
 * func-address: 0x1017ea25
 * callers: none
 * callees: none
 */

int __stdcall sub_1017EA25(_WORD *a1, int a2, _WORD *a3)
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
