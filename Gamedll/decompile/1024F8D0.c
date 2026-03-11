/*
 * func-name: sub_1024F8D0
 * func-address: 0x1024f8d0
 * callers: 0x100132fa
 * callees: none
 */

int *__cdecl sub_1024F8D0(int *a1, int *a2, int *a3)
{
  int *v3; // edx
  int *result; // eax
  int v5; // ecx
  bool v6; // zf

  v3 = a1;
  for ( result = a3; v3 != a2; ++result )
  {
    if ( result )
    {
      v5 = *v3;
      v6 = *v3 == 0;
      *result = *v3;
      if ( !v6 )
        ++*(_DWORD *)(v5 + 36);
    }
    ++v3;
  }
  return result;
}
