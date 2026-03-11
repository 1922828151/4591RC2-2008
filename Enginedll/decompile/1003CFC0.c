/*
 * func-name: sub_1003CFC0
 * func-address: 0x1003cfc0
 * callers: none
 * callees: 0x101a2500, 0x101a253a
 */

int __stdcall sub_1003CFC0(int a1, void **a2)
{
  void *v2; // eax
  void *v3; // eax

  if ( *a2 )
  {
    operator delete[](*a2);
    *a2 = 0;
  }
  if ( a2[6] )
  {
    operator delete[](a2[6]);
    a2[6] = 0;
  }
  if ( a2[3] )
  {
    operator delete[](a2[3]);
    a2[3] = 0;
  }
  v2 = a2[2];
  if ( v2 )
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)v2 + 8))(a2[2]);
    a2[2] = 0;
  }
  v3 = a2[7];
  if ( v3 )
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)v3 + 8))(a2[7]);
    a2[7] = 0;
  }
  operator delete(a2);
  return 0;
}
