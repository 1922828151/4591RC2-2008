/*
 * func-name: sub_10012770
 * func-address: 0x10012770
 * callers: 0x10012640
 * callees: 0x10011e40, 0x100234da, 0x100234ec
 */

int __usercall sub_10012770@<eax>(const char *a1@<eax>, SOCKET *a2)
{
  char *v3; // eax
  char *v4; // esi
  unsigned int v6; // edi
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v3 = (char *)malloc(strlen(a1) + 89);
  v4 = v3;
  if ( !v3 )
    return -499;
  sprintf(
    v3,
    "M-SEARCH * HTTP/1.1\r\nMX: 2\r\nHOST: 239.255.255.250:1900\r\nMAN: \"ssdp:discover\"\r\nST: %s\r\n\r\n",
    a1);
  v6 = sub_10011E40(&v7, strlen(v4), a2, (int)v4);
  free(v4);
  if ( v6 )
    return v6;
  else
    return 0;
}
