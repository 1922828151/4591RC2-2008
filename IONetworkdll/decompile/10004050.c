/*
 * func-name: ??0IO_Channel_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004050
 * callers: 0x1001c940, 0x1001d570, 0x100216e0, 0x10022310, 0x1002ad90, 0x1002b250, 0x1003a5b0, 0x1003aa70, 0x1003e760, 0x1003eff0, 0x100406d0, 0x10040f80
 * callees: 0x10002600
 */

Outpop::IONetwork::IO_Channel_Config *__thiscall Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config(
        Outpop::IONetwork::IO_Channel_Config *this)
{
  *(_DWORD *)this = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::IO_Channel_Config *)((char *)this + 8));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::IO_Channel_Config *)((char *)this + 36));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  return this;
}
