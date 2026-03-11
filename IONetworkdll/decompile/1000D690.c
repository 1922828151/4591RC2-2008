/*
 * func-name: ??0TSocket@IONetwork@Outpop@@QAE@HHH@Z
 * func-address: 0x1000d690
 * callers: 0x10026420, 0x1004ab10
 * callees: 0x1000d890
 */

Outpop::IONetwork::TSocket *__thiscall Outpop::IONetwork::TSocket::TSocket(
        Outpop::IONetwork::TSocket *this,
        int a2,
        int type,
        int protocol)
{
  SOCKET v5; // eax
  int v6; // eax

  v5 = socket(a2, type, protocol);
  *(_DWORD *)this = v5;
  if ( v5 == -1 )
  {
    v6 = sub_1000D890(std::cout, "TSocket::TSocket construct faild!");
    std::ostream::operator<<(v6, std::endl);
  }
  return this;
}
