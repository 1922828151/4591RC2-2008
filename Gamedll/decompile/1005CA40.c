/*
 * func-name: sub_1005CA40
 * func-address: 0x1005ca40
 * callers: 0x10008e45
 * callees: 0x1000b50a
 */

int __cdecl sub_1005CA40(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_1000B50A((int)(a2 + 1));
  }
  return result;
}
