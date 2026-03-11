/*
 * func-name: sub_102B5430
 * func-address: 0x102b5430
 * callers: 0x10002d10
 * callees: none
 */

int __cdecl sub_102B5430(int a1, int a2, int a3)
{
  int v3; // esi

  v3 = a1;
  if ( a1 == a2 )
    return a1;
  do
  {
    if ( (unsigned __int8)std::operator==<char>(v3, a3) )
      break;
    v3 += 28;
  }
  while ( v3 != a2 );
  return v3;
}
