/*
 * func-name: ??0Client_Security@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x1000d500
 * callers: 0x1003fba0, 0x10041b20
 * callees: 0x1000d110
 */

Outpop::IONetwork::Client_Security *__thiscall Outpop::IONetwork::Client_Security::Client_Security(
        Outpop::IONetwork::Client_Security *this)
{
  Outpop::IONetwork::Security::Security(this);
  *(_DWORD *)this = &Outpop::IONetwork::Client_Security::`vftable';
  *((_DWORD *)this + 12) = 0;
  return this;
}
