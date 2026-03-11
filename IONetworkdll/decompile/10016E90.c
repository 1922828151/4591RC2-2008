/*
 * func-name: ??1Stream_Acceptor@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10016e90
 * callers: 0x10016de0
 * callees: 0x10004a50, 0x10019190, 0x1004e870
 */

void __thiscall Outpop::IONetwork::Stream_Acceptor::~Stream_Acceptor(Outpop::IONetwork::Stream_Acceptor *this)
{
  SOCKET *v2; // edi

  *(_DWORD *)this = &Outpop::IONetwork::Stream_Acceptor::`vftable';
  v2 = (SOCKET *)*((_DWORD *)this + 47);
  if ( v2 )
  {
    if ( *v2 != -1 )
      closesocket(*v2);
    operator delete(v2);
  }
  sub_10019190((char *)this + 192);
  *((_DWORD *)this + 39) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 39) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::IONetwork::Acceptor::~Acceptor(this);
}
