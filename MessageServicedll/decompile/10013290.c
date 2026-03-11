/*
 * func-name: ??1Connector_Manager@Message@Outpop@@UAE@XZ
 * func-address: 0x10013290
 * callers: 0x10003cf0
 * callees: 0x10006f70, 0x1000b210, 0x100294f2
 */

void __thiscall Outpop::Message::Connector_Manager::~Connector_Manager(Outpop::Message::Connector_Manager *this)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Lock *v3; // edi
  int v4; // eax

  *(_DWORD *)this = &Outpop::Message::Connector_Manager::`vftable';
  v2 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  v3 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  *((_BYTE *)this + 124) = 0;
  Outpop::Utility::Lock::unlock(v3);
  if ( *((_DWORD *)this + 28) )
    operator delete(*((void **)this + 28));
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  if ( *((_DWORD *)this + 24) )
    operator delete(*((void **)this + 24));
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  v4 = *((_DWORD *)this + 20);
  if ( v4 )
  {
    sub_1000B210(*((_DWORD *)this + 21), v4);
    operator delete(*((void **)this + 20));
  }
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  Outpop::Utility::Lock::~Lock(v2);
  sub_10006F70((int)this + 8);
  *(_DWORD *)this = Outpop::IONetwork::Connector_Handler::`vftable';
}
