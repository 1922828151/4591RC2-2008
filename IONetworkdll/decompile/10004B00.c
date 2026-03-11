/*
 * func-name: ??0Acceptor@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004b00
 * callers: 0x10016ca0, 0x10025eb0
 * callees: 0x100043b0
 */

Outpop::IONetwork::Acceptor *__thiscall Outpop::IONetwork::Acceptor::Acceptor(
        Outpop::IONetwork::Acceptor *this,
        const struct Outpop::IONetwork::Acceptor *a2)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Acceptor::`vftable';
  Outpop::IONetwork::Acceptor_Config::Acceptor_Config(
    (Outpop::IONetwork::Acceptor *)((char *)this + 8),
    (const struct Outpop::IONetwork::Acceptor *)((char *)a2 + 8));
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  return this;
}
