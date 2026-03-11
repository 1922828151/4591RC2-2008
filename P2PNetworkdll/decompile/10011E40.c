/*
 * func-name: sub_10011E40
 * func-address: 0x10011e40
 * callers: 0x10012770
 * callees: 0x100232a4, 0x100232b6, 0x100232bc, 0x100232f7, 0x10023bb2
 */

unsigned int __fastcall sub_10011E40(_DWORD *a1, int a2, SOCKET *a3, int a4)
{
  int v5; // esi
  int v6; // edi
  struct hostent *v7; // eax
  int v8; // eax
  struct sockaddr to; // [esp+1Ch] [ebp-18h] BYREF

  memset(to.sa_data, 0, sizeof(to.sa_data));
  v5 = 1;
  v6 = 0;
  to.sa_family = 2;
  v7 = gethostbyname("239.255.255.250");
  if ( !v7 )
    return -992;
  memcpy(&to.sa_data[2], *(const void **)v7->h_addr_list, v7->h_length);
  *(_WORD *)to.sa_data = htons(0x76Cu);
  while ( a2 )
  {
    if ( v5 <= 0 )
      break;
    v8 = sendto(*a3, (const char *)(v6 + a4), a2, 0, &to, 16);
    v5 = v8;
    if ( v8 > 0 )
    {
      a2 -= v8;
      v6 += v8;
    }
  }
  *a1 = v6;
  return v5 > 0 ? 0 : 0xFFFFFC1B;
}
