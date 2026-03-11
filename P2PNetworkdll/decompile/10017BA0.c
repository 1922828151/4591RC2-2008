/*
 * func-name: sub_10017BA0
 * func-address: 0x10017ba0
 * callers: none
 * callees: none
 */

unsigned __int8 *__cdecl sub_10017BA0(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *result; // eax
  unsigned __int8 i; // cl

  result = a2;
  for ( i = *(_BYTE *)(*a2 + a1 + 72); i >= 9u; i = *(_BYTE *)(*++result + a1 + 72) )
  {
    if ( i > 0xAu && i != 21 )
      break;
  }
  return result;
}
