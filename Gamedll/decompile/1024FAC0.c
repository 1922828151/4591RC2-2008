/*
 * func-name: sub_1024FAC0
 * func-address: 0x1024fac0
 * callers: 0x10014727
 * callees: none
 */

int __usercall sub_1024FAC0@<eax>(int result@<eax>, int *a2, int a3, int *a4)
{
  int i; // edx
  bool v6; // zf

  for ( i = a3; i; ++a2 )
  {
    if ( a2 )
    {
      result = *a4;
      v6 = *a4 == 0;
      *a2 = *a4;
      if ( !v6 )
        ++*(_DWORD *)(result + 36);
    }
    --i;
  }
  return result;
}
