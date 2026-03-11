/*
 * func-name: ??0IO_Channel_Config@IONetwork@Outpop@@QAE@ABU012@@Z
 * func-address: 0x10004150
 * callers: none
 * callees: 0x10002e10
 */

Outpop::IONetwork::IO_Channel_Config *__thiscall Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config(
        Outpop::IONetwork::IO_Channel_Config *this,
        const struct Outpop::IONetwork::IO_Channel_Config *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::IO_Channel_Config *)((char *)this + 8),
    (const struct Outpop::IONetwork::IO_Channel_Config *)((char *)a2 + 8));
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::IO_Channel_Config *)((char *)this + 36),
    (const struct Outpop::IONetwork::IO_Channel_Config *)((char *)a2 + 36));
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_BYTE *)this + 72) = *((_BYTE *)a2 + 72);
  return this;
}
