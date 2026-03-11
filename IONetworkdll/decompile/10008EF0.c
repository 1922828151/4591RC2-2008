/*
 * func-name: ?set_security_ptr@Bluid_Pakcet@IONetwork@Outpop@@QAEXPAVSecurity@23@@Z
 * func-address: 0x10008ef0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::Security *__thiscall Outpop::IONetwork::Bluid_Pakcet::set_security_ptr(
        Outpop::IONetwork::Bluid_Pakcet *this,
        struct Outpop::IONetwork::Security *a2)
{
  struct Outpop::IONetwork::Security *result; // eax

  result = a2;
  *((_DWORD *)this + 15) = a2;
  return result;
}
