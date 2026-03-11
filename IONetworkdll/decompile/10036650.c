/*
 * func-name: ??0Dgram_Connector@IONetwork@Outpop@@QAE@PAVConnector_Handler@12@PAVWIN32_IoCompletionPort@12@I@Z
 * func-address: 0x10036650
 * callers: none
 * callees: 0x10002600, 0x10004ca0, 0x1002ba30, 0x1004e98e
 */

Outpop::IONetwork::Dgram_Connector *__thiscall Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::Connector_Handler *a2,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a3,
        unsigned int a4)
{
  struct Outpop::IONetwork::Connector_Handler *v5; // eax
  struct Outpop::IONetwork::WIN32_IoCompletionPort *v6; // edx
  struct Outpop::IONetwork::Connector_Handler *v7; // eax
  unsigned int v8; // ecx
  char v10; // [esp+12h] [ebp-16h] BYREF
  char v11; // [esp+13h] [ebp-15h] BYREF
  Outpop::IONetwork::Dgram_Connector *v12; // [esp+14h] [ebp-14h]
  char *v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v12 = this;
  Outpop::IONetwork::Connector::Connector(this);
  v14 = 0;
  v5 = a2;
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Connector::`vftable';
  *((_DWORD *)this + 30) = v5;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Dgram_Connector *)((char *)this + 124));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Dgram_Connector *)((char *)this + 152));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 184));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 208));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Connector *)((char *)this + 232));
  v13 = (char *)this + 256;
  sub_1002BA30((int)this + 256, &a2);
  LOBYTE(v14) = 7;
  a2 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 296);
  sub_1002BA30((int)this + 296, &v10);
  LOBYTE(v14) = 9;
  a2 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 336);
  sub_1002BA30((int)this + 336, &v11);
  LOBYTE(v14) = 11;
  v6 = a3;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_BYTE *)this + 388) = 1;
  *((_DWORD *)this + 2) = v6;
  v7 = (struct Outpop::IONetwork::Connector_Handler *)operator new(4);
  a2 = v7;
  LOBYTE(v14) = 12;
  if ( v7 )
    *(_DWORD *)v7 = -1;
  else
    v7 = 0;
  v8 = a4;
  *((_DWORD *)this + 29) = v7;
  *(_DWORD *)v7 = v8;
  return this;
}
