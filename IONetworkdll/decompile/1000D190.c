/*
 * func-name: ??1Security@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1000d190
 * callers: 0x10001ad0, 0x10001b30, 0x1000d500, 0x1000d560
 * callees: 0x10005e80, 0x1004e938
 */

void __thiscall Outpop::IONetwork::Security::~Security(Outpop::IONetwork::Security *this)
{
  *(_DWORD *)this = &Outpop::IONetwork::Security::`vftable';
  if ( *((_DWORD *)this + 1) )
    operator delete[](*((_DWORD *)this + 1));
  if ( *((_DWORD *)this + 5) )
    operator delete[](*((_DWORD *)this + 5));
  if ( *((_DWORD *)this + 7) )
    operator delete[](*((_DWORD *)this + 7));
  if ( *((_DWORD *)this + 2) )
    operator delete[](*((_DWORD *)this + 2));
  if ( *((_DWORD *)this + 3) )
    operator delete[](*((_DWORD *)this + 3));
  if ( *((_DWORD *)this + 4) )
    operator delete[](*((_DWORD *)this + 4));
  Outpop::IONetwork::Crypto_Aes::~Crypto_Aes((HCRYPTPROV *)this + 10);
  Outpop::IONetwork::Crypto_Aes::~Crypto_Aes((HCRYPTPROV *)this + 8);
}
