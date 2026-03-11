/*
 * func-name: sub_10012040
 * func-address: 0x10012040
 * callers: 0x100116b0
 * callees: 0x1002329e
 */

unsigned int __usercall sub_10012040@<eax>(int a1@<eax>, int a2@<ebx>, SOCKET *a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edi
  bool v6; // zf
  int v7; // eax

  v4 = a1;
  v5 = 0;
  v6 = a1 == 0;
  v7 = 1;
  if ( !v6 )
  {
    do
    {
      if ( v7 <= 0 )
        break;
      v7 = send(*a3, (const char *)(v5 + a2), v4, 0);
      if ( v7 > 0 )
      {
        v4 -= v7;
        v5 += v7;
      }
    }
    while ( v4 );
  }
  *a4 = v5;
  return v7 > 0 ? 0 : 0xFFFFFC1B;
}
