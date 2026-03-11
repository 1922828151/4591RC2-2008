/*
 * func-name: sub_102657F0
 * func-address: 0x102657f0
 * callers: 0x10014925
 * callees: 0x10012887
 */

int __cdecl sub_102657F0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_10012887((int)(a2 + 1));
  }
  return result;
}
