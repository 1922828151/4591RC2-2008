/*
 * func-name: ?set_rsa_obj@Client_Security@IONetwork@Outpop@@QAEXPAVCryptProv@23@@Z
 * func-address: 0x1000d5e0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::CryptProv *__thiscall Outpop::IONetwork::Client_Security::set_rsa_obj(
        Outpop::IONetwork::Client_Security *this,
        struct Outpop::IONetwork::CryptProv *a2)
{
  struct Outpop::IONetwork::CryptProv *result; // eax

  result = a2;
  *((_DWORD *)this + 12) = a2;
  return result;
}
