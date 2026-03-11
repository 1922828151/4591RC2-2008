/*
 * func-name: sub_100572E0
 * func-address: 0x100572e0
 * callers: 0x10057930
 * callees: none
 */

int __cdecl sub_100572E0(int *a1, int *a2, int *a3, unsigned __int8 (__cdecl *a4)(int, int))
{
  int v4; // eax
  int v5; // eax
  int result; // eax

  if ( a4(*a2, *a1) )
  {
    v4 = *a2;
    *a2 = *a1;
    *a1 = v4;
  }
  if ( a4(*a3, *a2) )
  {
    v5 = *a3;
    *a3 = *a2;
    *a2 = v5;
  }
  result = ((int (__cdecl *)(int, int))a4)(*a2, *a1);
  if ( (_BYTE)result )
  {
    result = *a2;
    *a2 = *a1;
    *a1 = result;
  }
  return result;
}
