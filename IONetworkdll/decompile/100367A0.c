/*
 * func-name: ??1Dgram_Connector@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x100367a0
 * callers: 0x1002cb90
 * callees: 0x10004d20, 0x10019190, 0x1004e870
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::~Dgram_Connector(Outpop::IONetwork::Dgram_Connector *this)
{
  SOCKET *v2; // edi
  SOCKET *v3; // edi

  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Connector::`vftable';
  v2 = (SOCKET *)*((_DWORD *)this + 29);
  if ( v2 )
  {
    if ( *v2 != -1 )
    {
      closesocket(*v2);
      *v2 = -1;
    }
    v3 = (SOCKET *)*((_DWORD *)this + 29);
    if ( v3 )
    {
      if ( *v3 != -1 )
        closesocket(*v3);
      operator delete(v3);
    }
  }
  sub_10019190((_DWORD *)this + 84);
  sub_10019190((_DWORD *)this + 74);
  sub_10019190((_DWORD *)this + 64);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 232));
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 208));
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 184));
  *((_DWORD *)this + 38) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 38) = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 31) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 31) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::IONetwork::Connector::~Connector(this);
}
