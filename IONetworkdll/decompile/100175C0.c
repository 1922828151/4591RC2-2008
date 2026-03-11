/*
 * func-name: ?initialize@Stream_Acceptor@IONetwork@Outpop@@UAEXAAUAcceptor_Config@23@@Z
 * func-address: 0x100175c0
 * callers: none
 * callees: 0x10002880, 0x10004480
 */

u_short __thiscall Outpop::IONetwork::Stream_Acceptor::initialize(
        Outpop::IONetwork::Stream_Acceptor *this,
        struct Outpop::IONetwork::Acceptor_Config *a2)
{
  u_short v3; // cx
  u_short result; // ax
  char *v5; // ebx

  Outpop::IONetwork::Acceptor_Config::operator=((int)this + 8, (int)a2);
  if ( (unsigned __int8)std::operator==<char>((char *)a2 + 44, "any") )
  {
    v3 = *((_WORD *)a2 + 36);
    if ( *((_DWORD *)this + 40) == 2 )
    {
      *((_DWORD *)this + 40) = 2;
      *((_WORD *)this + 84) = 2;
      *((_DWORD *)this + 41) = 16;
      *((_DWORD *)this + 43) = 0;
    }
    result = htons(v3);
    *((_WORD *)this + 85) = result;
  }
  else
  {
    if ( *((_DWORD *)a2 + 17) < 0x10u )
      v5 = (char *)a2 + 48;
    else
      v5 = (char *)*((_DWORD *)a2 + 12);
    return Outpop::IONetwork::INET_Addr::set(
             (Outpop::IONetwork::Stream_Acceptor *)((char *)this + 156),
             *((_WORD *)a2 + 36),
             v5,
             1,
             0);
  }
  return result;
}
