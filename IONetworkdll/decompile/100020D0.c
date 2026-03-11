/*
 * func-name: ?read_from_ini_file@Network_Init@IONetwork@Outpop@@QAEHPADH@Z
 * func-address: 0x100020d0
 * callers: none
 * callees: none
 */

DWORD __thiscall Outpop::IONetwork::Network_Init::read_from_ini_file(
        Outpop::IONetwork::Network_Init *this,
        LPSTR lpReturnedString,
        DWORD nSize)
{
  return GetProfileStringA("outpop", "cryptokey", &Default, lpReturnedString, nSize);
}
