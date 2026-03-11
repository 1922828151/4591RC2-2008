/*
 * func-name: ??1Bluid_Pakcet@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10008ca0
 * callers: 0x10017730, 0x1001dec0, 0x10027c50, 0x10036c20
 * callees: none
 */

char *__thiscall Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet(Outpop::IONetwork::Bluid_Pakcet *this)
{
  char *result; // eax

  *((_DWORD *)this + 8) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 8) = &Outpop::IONetwork::Addr::`vftable';
  result = (char *)this + 4;
  *((_DWORD *)this + 1) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 1) = &Outpop::IONetwork::Addr::`vftable';
  return result;
}
