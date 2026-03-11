/*
 * func-name: sub_10013970
 * func-address: 0x10013970
 * callers: 0x100132c0, 0x100134b0, 0x10013690
 * callees: 0x100234da, 0x100234ec
 */

int __cdecl sub_10013970(const char *a1, const char *a2, const char *a3, char **a4)
{
  char *v4; // eax

  v4 = (char *)malloc(strlen(a2) + strlen(a3) + strlen(a2) + strlen(a1) + 264);
  *a4 = v4;
  if ( !v4 )
    return -499;
  sprintf(
    v4,
    "<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n"
    "<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" s:encodingStyle=\"http://schemas.xmlsoap.org/soap/"
    "encoding/\">\r\n"
    "<s:Body>\r\n"
    "<u:%s xmlns:u=\"urn:schemas-upnp-org:service:%s\">\r\n"
    "%s</u:%s>\r\n"
    "</s:Body>\r\n"
    "</s:Envelope>\r\n",
    a2,
    a1,
    a3,
    a2);
  return 0;
}
