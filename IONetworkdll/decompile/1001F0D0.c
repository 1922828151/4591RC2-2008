/*
 * func-name: sub_1001F0D0
 * func-address: 0x1001f0d0
 * callers: 0x1001dec0
 * callees: 0x1004e861, 0x1004f11e
 */

int __userpurge sub_1001F0D0@<eax>(_DWORD *a1@<esi>, SOCKET s)
{
  size_t v3; // edi
  int namelen; // [esp+0h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+4h] [ebp-14h] BYREF

  namelen = 16;
  if ( getsockname(s, &name, &namelen) < 0 )
    return -1;
  v3 = namelen;
  if ( name.sa_family == 2 )
  {
    if ( namelen > 16 )
      v3 = 16;
    memcpy(a1 + 3, &name, v3);
    a1[2] = v3;
    a1[1] = 2;
  }
  return 0;
}
