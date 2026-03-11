/*
 * func-name: sub_100715D0
 * func-address: 0x100715d0
 * callers: 0x10015938
 * callees: 0x100115f9
 */

int __cdecl sub_100715D0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_100115F9((int)(a2 + 1));
  }
  return result;
}
