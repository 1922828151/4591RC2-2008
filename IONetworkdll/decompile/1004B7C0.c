/*
 * func-name: ?initialize@P2PUdpBuilder@IONetwork@Outpop@@QAEXAAUP2P_Config@23@@Z
 * func-address: 0x1004b7c0
 * callers: none
 * callees: 0x10002880, 0x10004960
 */

u_short __thiscall Outpop::IONetwork::P2PUdpBuilder::initialize(
        Outpop::IONetwork::P2PUdpBuilder *this,
        struct Outpop::IONetwork::P2P_Config *a2)
{
  u_short v3; // dx
  u_short result; // ax
  char *v5; // edi

  Outpop::IONetwork::P2P_Config::operator=((int)this + 12, (int)a2);
  if ( (unsigned __int8)std::operator==<char>((char *)a2 + 44, "any") )
  {
    v3 = *((_WORD *)this + 42);
    if ( *((_DWORD *)this + 30) == 2 )
    {
      *((_DWORD *)this + 30) = 2;
      *((_WORD *)this + 64) = 2;
      *((_DWORD *)this + 31) = 16;
      *((_DWORD *)this + 33) = 0;
    }
    result = htons(v3);
    *((_WORD *)this + 65) = result;
  }
  else
  {
    if ( *((_DWORD *)a2 + 17) < 0x10u )
      v5 = (char *)a2 + 48;
    else
      v5 = (char *)*((_DWORD *)a2 + 12);
    return Outpop::IONetwork::INET_Addr::set(
             (Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 116),
             *((_WORD *)this + 42),
             v5,
             1,
             0);
  }
  return result;
}
