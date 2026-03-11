/*
 * func-name: ?finit_instance@CryptProv@IONetwork@Outpop@@SAXXZ
 * func-address: 0x100089a0
 * callers: none
 * callees: 0x10007d00, 0x1004e870
 */

int Outpop::IONetwork::CryptProv::finit_instance()
{
  struct Outpop::IONetwork::CryptProv *v0; // esi
  int result; // eax

  if ( Outpop::IONetwork::CryptProv::instance_ )
  {
    v0 = Outpop::IONetwork::CryptProv::instance_;
    Outpop::IONetwork::CryptProv::~CryptProv((HCRYPTPROV *)Outpop::IONetwork::CryptProv::instance_);
    return operator delete(v0);
  }
  return result;
}
