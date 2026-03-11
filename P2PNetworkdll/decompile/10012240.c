/*
 * func-name: sub_10012240
 * func-address: 0x10012240
 * callers: 0x100135f0
 * callees: 0x10023298, 0x100232ce, 0x100232f7, 0x100234ec
 */

int __usercall sub_10012240@<eax>(_DWORD *a1@<esi>, SOCKET *a2)
{
  unsigned int v3; // kr00_4
  void *v4; // eax
  char *v5; // eax
  _BYTE *v6; // edx
  char v7; // cl
  SOCKET v8; // [esp-Ch] [ebp-24h]
  int namelen; // [esp+0h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+4h] [ebp-14h] BYREF

  v8 = *a2;
  namelen = 16;
  if ( getsockname(v8, &name, &namelen) )
    return -987;
  v3 = strlen(inet_ntoa(*(struct in_addr *)&name.sa_data[2]));
  v4 = malloc(v3 + 1);
  *a1 = v4;
  if ( !v4 )
    return -499;
  v5 = inet_ntoa(*(struct in_addr *)&name.sa_data[2]);
  v6 = (_BYTE *)*a1;
  do
  {
    v7 = *v5;
    *v6++ = *v5++;
  }
  while ( v7 );
  return 0;
}
