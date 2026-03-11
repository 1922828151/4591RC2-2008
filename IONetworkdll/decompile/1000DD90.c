/*
 * func-name: ?socket_init@IONetwork@Outpop@@YAHHH@Z
 * func-address: 0x1000dd90
 * callers: none
 * callees: 0x1000d890, 0x1004e861
 */

int __cdecl Outpop::IONetwork::socket_init(Outpop::IONetwork *this, char a2)
{
  WORD v2; // cx
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  WSAData WSAData; // [esp+8h] [ebp-198h] BYREF

  HIBYTE(v2) = a2;
  LOBYTE(v2) = (_BYTE)this;
  result = WSAStartup(v2, &WSAData);
  v4 = result;
  if ( result )
  {
    v5 = sub_1000D890(std::cout, "ACE_OS::SOCKET_init; WSAStartup failed, ");
    v6 = sub_1000D890(v5, "WSAGetLastError returned n");
    std::ostream::operator<<(v6, std::endl);
    return v4;
  }
  return result;
}
