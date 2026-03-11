/*
 * func-name: sub_10011F30
 * func-address: 0x10011f30
 * callers: 0x10012800
 * callees: 0x10012120, 0x10023298, 0x100232a4, 0x100232bc, 0x100232c8, 0x100232f7, 0x10023bb2
 */

int __cdecl sub_10011F30(char *buf, int *a2)
{
  SOCKET *v2; // ecx
  SOCKET *v3; // edi
  int v4; // esi
  struct hostent *v5; // eax
  int fromlen; // [esp+18h] [ebp-2Ch] BYREF
  struct sockaddr from; // [esp+1Ch] [ebp-28h] BYREF
  struct sockaddr name; // [esp+2Ch] [ebp-18h] BYREF

  memset(from.sa_data, 0, sizeof(from.sa_data));
  v3 = v2;
  v4 = 0;
  fromlen = 16;
  from.sa_family = 2;
  v5 = gethostbyname("239.255.255.250");
  if ( !v5 )
    return -992;
  memcpy(&from.sa_data[2], *(const void **)v5->h_addr_list, v5->h_length);
  *(_WORD *)from.sa_data = htons(0x76Cu);
  if ( sub_10012120() || (v4 = recvfrom(*v3, buf, 1024, 0, &from, &fromlen), getsockname(*v3, &name, &fromlen), v4 >= 0) )
  {
    *a2 = v4;
    return 0;
  }
  else
  {
    *a2 = 0;
    return -995;
  }
}
