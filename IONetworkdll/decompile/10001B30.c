/*
 * func-name: ??0Client_Security@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001b30
 * callers: none
 * callees: 0x100019e0
 */

Outpop::IONetwork::Client_Security *__thiscall Outpop::IONetwork::Client_Security::Client_Security(
        Outpop::IONetwork::Client_Security *this,
        const struct Outpop::IONetwork::Client_Security *a2)
{
  Outpop::IONetwork::Security::Security(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Client_Security::`vftable';
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  return this;
}
