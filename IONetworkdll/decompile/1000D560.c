/*
 * func-name: ??1Client_Security@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1000d560
 * callers: 0x10001c00
 * callees: 0x10007d00, 0x1000d190, 0x1004e870
 */

void __thiscall Outpop::IONetwork::Client_Security::~Client_Security(Outpop::IONetwork::Client_Security *this)
{
  int v2; // edi

  *(_DWORD *)this = &Outpop::IONetwork::Client_Security::`vftable';
  v2 = *((_DWORD *)this + 12);
  if ( v2 )
  {
    Outpop::IONetwork::CryptProv::~CryptProv(*((HCRYPTPROV **)this + 12));
    operator delete(v2);
  }
  Outpop::IONetwork::Security::~Security(this);
}
