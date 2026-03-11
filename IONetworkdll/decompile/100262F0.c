/*
 * func-name: ??1Dgram_Acceptor@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x100262f0
 * callers: 0x10026190
 * callees: 0x10004a50, 0x10019190, 0x1004e870
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::~Dgram_Acceptor(Outpop::IONetwork::Dgram_Acceptor *this)
{
  SOCKET *v2; // edi
  SOCKET *v3; // edi

  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Acceptor::`vftable';
  v2 = (SOCKET *)*((_DWORD *)this + 59);
  if ( v2 )
  {
    if ( *v2 != -1 )
    {
      closesocket(*v2);
      *v2 = -1;
    }
    v3 = (SOCKET *)*((_DWORD *)this + 59);
    if ( v3 )
    {
      if ( *v3 != -1 )
        closesocket(*v3);
      operator delete(v3);
    }
  }
  sub_10019190((_DWORD *)this + 82);
  sub_10019190((_DWORD *)this + 72);
  sub_10019190((_DWORD *)this + 62);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 208));
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184));
  *((_DWORD *)this + 39) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 39) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::IONetwork::Acceptor::~Acceptor(this);
}
