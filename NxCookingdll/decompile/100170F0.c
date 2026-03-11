/*
 * func-name: sub_100170F0
 * func-address: 0x100170f0
 * callers: 0x100170f0, 0x10017320
 * callees: 0x100170f0
 */

void __cdecl sub_100170F0(unsigned int a1, unsigned __int8 (__cdecl *a2)(unsigned int, _DWORD, int), int a3)
{
  unsigned int v4; // esi

  do
  {
    v4 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
    if ( v4 )
      a1 = v4 + 40;
    else
      a1 = 0;
    if ( v4 && !a2(v4, 0, a3) )
      break;
    if ( a1 && !a2(a1, 0, a3) )
      break;
    if ( v4 )
      sub_100170F0(v4, a2, a3);
  }
  while ( a1 );
}
