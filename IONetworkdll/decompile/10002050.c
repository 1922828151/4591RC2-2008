/*
 * func-name: ?write_to_ini_file@Network_Init@IONetwork@Outpop@@QAEHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10002050
 * callers: 0x10001e20, 0x10007420
 * callees: none
 */

BOOL __stdcall Outpop::IONetwork::Network_Init::write_to_ini_file(
        char a1,
        LPCSTR lpString,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  const CHAR *p_lpString; // eax
  BOOL v8; // esi

  p_lpString = lpString;
  if ( a7 < 0x10 )
    p_lpString = (const CHAR *)&lpString;
  v8 = WriteProfileStringA("outpop", "cryptokey", p_lpString);
  std::string::~string(&a1);
  return v8;
}
