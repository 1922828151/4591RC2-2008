/*
 * func-name: ?EnCryptEncrypt@CryptProv@IONetwork@Outpop@@QAE_NKHKPAEPAKK@Z
 * func-address: 0x100088c0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::IONetwork::CryptProv::EnCryptEncrypt(
        Outpop::IONetwork::CryptProv *this,
        HCRYPTHASH hHash,
        BOOL Final,
        DWORD dwFlags,
        BYTE *pbData,
        DWORD *pdwDataLen,
        DWORD dwBufLen)
{
  return CryptEncrypt(*((_DWORD *)this + 2), hHash, Final, dwFlags, pbData, pdwDataLen, dwBufLen);
}
