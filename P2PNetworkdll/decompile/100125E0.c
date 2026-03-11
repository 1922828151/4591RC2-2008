/*
 * func-name: sub_100125E0
 * func-address: 0x100125e0
 * callers: 0x10012390
 * callees: 0x100232a4, 0x100232bc, 0x10023bb2
 */

int __usercall sub_100125E0@<eax>(int a1@<esi>, struct hostent **a2, char *name, u_short hostshort)
{
  struct hostent *v4; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)a1 = 2;
  v4 = gethostbyname(name);
  *a2 = v4;
  if ( !v4 )
    return -992;
  memcpy((void *)(a1 + 4), *(const void **)v4->h_addr_list, v4->h_length);
  *(_WORD *)(a1 + 2) = htons(hostshort);
  return 0;
}
