/*
 * func-name: ??1IO_Channel_Config@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x100040d0
 * callers: 0x1001c940, 0x1001d570, 0x100216e0, 0x10022310, 0x1002ad90, 0x1002b250, 0x1003a5b0, 0x1003aa70, 0x1003e760, 0x1003eff0, 0x100406d0, 0x10040f80
 * callees: none
 */

char *__thiscall Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config(Outpop::IONetwork::IO_Channel_Config *this)
{
  char *result; // eax

  *((_DWORD *)this + 9) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 9) = &Outpop::IONetwork::Addr::`vftable';
  result = (char *)this + 8;
  *((_DWORD *)this + 2) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 2) = &Outpop::IONetwork::Addr::`vftable';
  return result;
}
