/*
 * func-name: ??0Security@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x1000d110
 * callers: 0x1000d500, 0x1003dd30, 0x1003ffb0
 * callees: 0x10005b70
 */

Outpop::IONetwork::Security *__thiscall Outpop::IONetwork::Security::Security(Outpop::IONetwork::Security *this)
{
  *(_DWORD *)this = &Outpop::IONetwork::Security::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  Outpop::IONetwork::Crypto_Aes::Crypto_Aes((HCRYPTPROV *)this + 8);
  Outpop::IONetwork::Crypto_Aes::Crypto_Aes((HCRYPTPROV *)this + 10);
  return this;
}
