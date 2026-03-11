/*
 * func-name: sub_1003CF90
 * func-address: 0x1003cf90
 * callers: none
 * callees: 0x101a2500, 0x101a253a
 */

int __stdcall sub_1003CF90(int a1, void **a2)
{
  if ( *a2 )
  {
    operator delete[](*a2);
    *a2 = 0;
  }
  operator delete(a2);
  return 0;
}
