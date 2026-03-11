/*
 * func-name: sub_10066E90
 * func-address: 0x10066e90
 * callers: 0x1000f623
 * callees: 0x10018912
 */

int __cdecl sub_10066E90(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_10018912((int)(a2 + 1));
  }
  return result;
}
