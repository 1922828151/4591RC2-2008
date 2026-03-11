/*
 * func-name: ?instance@CryptProv@IONetwork@Outpop@@SAPAV123@XZ
 * func-address: 0x10008920
 * callers: 0x10001e20, 0x1003e800, 0x100407c0
 * callees: 0x10007420, 0x1004e98e
 */

struct Outpop::IONetwork::CryptProv *Outpop::IONetwork::CryptProv::instance()
{
  struct Outpop::IONetwork::CryptProv *result; // eax
  HCRYPTPROV *v1; // eax

  result = Outpop::IONetwork::CryptProv::instance_;
  if ( !Outpop::IONetwork::CryptProv::instance_ )
  {
    v1 = (HCRYPTPROV *)operator new(12);
    if ( v1 )
      result = (struct Outpop::IONetwork::CryptProv *)Outpop::IONetwork::CryptProv::CryptProv(v1, "ServerProc6");
    else
      result = 0;
    Outpop::IONetwork::CryptProv::instance_ = result;
  }
  return result;
}
