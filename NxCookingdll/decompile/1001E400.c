/*
 * func-name: sub_1001E400
 * func-address: 0x1001e400
 * callers: 0x10023310
 * callees: 0x1001e290, 0x10021280
 */

char __thiscall sub_1001E400(_DWORD *this, int a2)
{
  char result; // al

  result = sub_10021280(a2);
  if ( result )
    return sub_1001E290(this);
  return result;
}
