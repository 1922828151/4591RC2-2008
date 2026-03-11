/*
 * func-name: ?get_host_name_i@INET_Addr@IONetwork@Outpop@@AAEHQADI@Z
 * func-address: 0x10003640
 * callers: 0x10003480, 0x100034c0, 0x100035c0
 * callees: 0x1004f11e
 */

int __thiscall Outpop::IONetwork::INET_Addr::get_host_name_i(
        Outpop::IONetwork::INET_Addr *this,
        LPSTR lpBuffer,
        DWORD nSize)
{
  struct hostent *v4; // eax
  const char *h_name; // ecx
  DWORD v6; // esi
  LPSTR v7; // edx
  char v8; // al

  if ( !*((_DWORD *)this + 4) )
    return GetComputerNameA(lpBuffer, &nSize) - 1;
  v4 = gethostbyaddr((const char *)this + 16, 4, *((_DWORD *)this + 1));
  if ( !v4 )
    return -1;
  h_name = v4->h_name;
  if ( !v4->h_name )
    return -1;
  v6 = nSize;
  if ( strlen(v4->h_name) < nSize )
  {
    v7 = lpBuffer;
    do
    {
      v8 = *h_name;
      *v7++ = *h_name++;
    }
    while ( v8 );
    return 0;
  }
  else
  {
    if ( nSize )
    {
      memcpy(lpBuffer, h_name, nSize - 1);
      lpBuffer[v6 - 1] = 0;
    }
    return -2;
  }
}
