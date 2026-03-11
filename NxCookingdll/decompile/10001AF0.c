/*
 * func-name: sub_10001AF0
 * func-address: 0x10001af0
 * callers: none
 * callees: 0x100303b4, 0x100303ba, 0x100303c0, 0x100303c6, 0x100303cc, 0x100303d2, 0x100303d8, 0x100303de, 0x10034ca4, 0x10035300
 */

char __thiscall sub_10001AF0(int this, char *name, u_short hostshort)
{
  struct hostent *v4; // eax
  SOCKET v5; // eax
  int v6; // eax
  SOCKET v7; // edx
  u_long argp; // [esp+8h] [ebp-1Ch] BYREF
  char addr[4]; // [esp+Ch] [ebp-18h] BYREF
  sockaddr v11; // [esp+10h] [ebp-14h] BYREF

  memset(&v11.sa_data[2], 0, 12);
  v11.sa_family = 2;
  *(_WORD *)v11.sa_data = htons(hostshort);
  v4 = gethostbyname(name);
  if ( !v4 )
  {
    *(_DWORD *)addr = inet_addr(name);
    v4 = gethostbyaddr(addr, 4, 2);
    if ( !v4 )
      return 0;
  }
  memcpy_0(&v11.sa_data[2], *(const void **)v4->h_addr_list, v4->h_length);
  v5 = socket(2, 1, 0);
  *(_DWORD *)(this + 32848) = v5;
  if ( v5 == -1 )
    return 0;
  v6 = connect(v5, &v11, 16);
  v7 = *(_DWORD *)(this + 32848);
  if ( v6 == -1 )
  {
    closesocket(*(_DWORD *)(this + 32848));
    return 0;
  }
  argp = *(_BYTE *)(this + 24) == 0;
  ioctlsocket(v7, -2147195266, &argp);
  *(_BYTE *)(this + 32852) = 1;
  return 1;
}
