/*
 * func-name: sub_1017EAB6
 * func-address: 0x1017eab6
 * callers: none
 * callees: none
 */

int __stdcall sub_1017EAB6(_WORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int result; // eax

  v3 = a2;
  result = 0;
  if ( !a2 )
    return -2147024809;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
    return -2147024809;
  if ( a3 )
    *a3 = a2 - v3;
  return result;
}
