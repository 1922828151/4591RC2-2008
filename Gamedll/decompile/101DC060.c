/*
 * func-name: sub_101DC060
 * func-address: 0x101dc060
 * callers: 0x1001065e
 * callees: 0x10007f8b
 */

int __cdecl sub_101DC060(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_10007F8B(a2 + 1);
  }
  return result;
}
