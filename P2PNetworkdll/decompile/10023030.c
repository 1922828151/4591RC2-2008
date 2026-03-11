/*
 * func-name: sub_10023030
 * func-address: 0x10023030
 * callers: 0x1001f4a0, 0x10020130, 0x10020c10, 0x10020f30, 0x10021cd0, 0x10022080, 0x10022290, 0x100223b0, 0x10022690
 * callees: 0x10023100
 */

int __usercall sub_10023030@<eax>(_DWORD *a1@<eax>, int a2@<ebx>, int a3@<edi>, int a4)
{
  _DWORD *v5; // ebp

  v5 = a1 + 3;
  if ( a1[3] || sub_10023100() )
  {
    (*(void (__cdecl **)(int, int *, int, _DWORD *, _DWORD))(a2 + 56))(a2, &a4, a3, v5, a1[2]);
    if ( a4 == a3 )
      return a1[4];
    while ( sub_10023100() )
    {
      (*(void (__cdecl **)(int, int *, int, _DWORD *, _DWORD))(a2 + 56))(a2, &a4, a3, v5, a1[2]);
      if ( a4 == a3 )
        return a1[4];
    }
  }
  return 0;
}
