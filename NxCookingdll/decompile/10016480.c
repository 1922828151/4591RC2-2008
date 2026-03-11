/*
 * func-name: sub_10016480
 * func-address: 0x10016480
 * callers: 0x10022c20, 0x100302d0
 * callees: none
 */

int __cdecl sub_10016480(unsigned __int16 *a1, int a2)
{
  int v2; // esi
  int result; // eax
  unsigned __int16 v5; // cx

  v2 = a2;
  result = 0;
  while ( v2 )
  {
    v5 = *a1;
    --v2;
    ++a1;
    if ( v5 > (unsigned __int16)result )
      result = v5;
  }
  return result;
}
