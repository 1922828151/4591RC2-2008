/*
 * func-name: ??0Connector_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004500
 * callers: 0x10004ca0
 * callees: 0x10002600
 */

Outpop::IONetwork::Connector_Config *__thiscall Outpop::IONetwork::Connector_Config::Connector_Config(
        Outpop::IONetwork::Connector_Config *this)
{
  *((_DWORD *)this + 7) = 300;
  *((_DWORD *)this + 9) = 300;
  *((_DWORD *)this + 10) = 100;
  *((_DWORD *)this + 6) = 1500;
  *((_DWORD *)this + 8) = 10000;
  *((_DWORD *)this + 5) = 0xFFFF;
  *((_DWORD *)this + 4) = 0xFFFF;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Connector_Config *)((char *)this + 44));
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 22) = 0x2000000;
  *((_DWORD *)this + 21) = 128;
  *((_BYTE *)this + 72) = 0;
  return this;
}
