/*
 * func-name: sub_100122F0
 * func-address: 0x100122f0
 * callers: 0x10012640
 * callees: 0x10012520, 0x10023286, 0x100232d4, 0x100232e0, 0x100234ec
 */

int __usercall sub_100122F0@<eax>(void **a1@<esi>)
{
  void *v1; // eax
  int v3; // edi
  SOCKET v4; // eax
  u_long argp; // [esp+8h] [ebp-4h] BYREF

  argp = 1;
  v1 = malloc(4u);
  *a1 = v1;
  if ( !v1 )
    return -499;
  v3 = sub_10012520();
  if ( v3 )
  {
    free(*a1);
    return v3;
  }
  else
  {
    v4 = socket(2, 2, 0);
    *(_DWORD *)*a1 = v4;
    if ( v4 == -1 )
    {
      WSACleanup();
      free(*a1);
      return -991;
    }
    else if ( ioctlsocket(v4, -2147195266, &argp) )
    {
      WSACleanup();
      return -990;
    }
    else
    {
      return 0;
    }
  }
}
