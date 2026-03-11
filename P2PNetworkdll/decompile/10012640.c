/*
 * func-name: sub_10012640
 * func-address: 0x10012640
 * callers: 0x10012a20
 * callees: 0x100122f0, 0x10012770, 0x10012800, 0x10023292, 0x100232d4, 0x100232e6, 0x100232ec, 0x100232f7
 */

int __usercall sub_10012640@<eax>(char *cp@<ecx>, int *a2@<ebx>)
{
  int result; // eax
  SOCKET *v4; // ebp
  int v5; // esi
  void *Block; // [esp+10h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+14h] [ebp-14h] BYREF

  result = sub_100122F0(&Block);
  if ( !result )
  {
    v4 = (SOCKET *)Block;
    if ( cp )
    {
      *(_DWORD *)&name.sa_data[2] = inet_addr(cp);
      *(_WORD *)name.sa_data = 0;
      name.sa_family = 2;
      if ( bind(*v4, &name, 16) )
        return -1;
    }
    result = sub_10012770(v4);
    if ( !result )
    {
      if ( *a2 < 12 )
      {
        while ( 1 )
        {
          v5 = sub_10012800(v4);
          if ( v5 )
            break;
          if ( ++*a2 >= 12 )
            goto LABEL_13;
        }
        if ( !*a2 )
        {
          closesocket(*v4);
          WSACleanup();
          free(v4);
          (&Str)[*a2] = 0;
          return v5;
        }
        (&Str)[*a2] = 0;
      }
LABEL_13:
      closesocket(*v4);
      WSACleanup();
      free(v4);
      return 0;
    }
  }
  return result;
}
