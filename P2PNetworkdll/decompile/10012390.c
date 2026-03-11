/*
 * func-name: sub_10012390
 * func-address: 0x10012390
 * callers: 0x100116b0, 0x100135f0
 * callees: 0x100121b0, 0x10012520, 0x100125e0, 0x10023286, 0x1002328c, 0x100232d4, 0x100232e0, 0x100232f7, 0x100234ec
 */

int __fastcall sub_10012390(void **a1, char *a2, u_short hostshort, int a4)
{
  void *v6; // eax
  int v8; // ebx
  SOCKET v9; // eax
  int v10; // esi
  u_long argp; // [esp+14h] [ebp-1Ch] BYREF
  int v13; // [esp+18h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+1Ch] [ebp-14h] BYREF

  argp = 1;
  v6 = malloc(4u);
  *a1 = v6;
  if ( !v6 )
    return -499;
  v8 = sub_10012520();
  if ( v8 )
  {
    free(*a1);
    return v8;
  }
  else
  {
    *(_DWORD *)*a1 = socket(2, 1, 0);
    v9 = *(_DWORD *)*a1;
    if ( v9 == -1 )
    {
      WSACleanup();
      free(*a1);
      return -991;
    }
    else if ( ioctlsocket(v9, -2147195266, &argp) )
    {
      WSACleanup();
      return -990;
    }
    else
    {
      v10 = sub_100125E0((int)&v13, a2, hostshort);
      if ( v10 )
      {
        WSACleanup();
        free(*a1);
        return v10;
      }
      else
      {
        connect(*(_DWORD *)*a1, &name, 16);
        if ( sub_100121B0(a4, (SOCKET *)*a1) )
        {
          WSACleanup();
          free(*a1);
          return -999;
        }
        else
        {
          return 0;
        }
      }
    }
  }
}
