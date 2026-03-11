/*
 * func-name: ?DeCryptDecrypt@CryptProv@IONetwork@Outpop@@QAE_NKHKPAEPAK@Z
 * func-address: 0x100088f0
 * callers: 0x10040f80
 * callees: none
 */

bool __thiscall Outpop::IONetwork::CryptProv::DeCryptDecrypt(
        Outpop::IONetwork::CryptProv *this,
        HCRYPTHASH hHash,
        BOOL Final,
        DWORD dwFlags,
        BYTE *pbData,
        unsigned int *pdwDataLen)
{
  return CryptDecrypt(*((_DWORD *)this + 2), hHash, Final, dwFlags, pbData, pdwDataLen);
}
