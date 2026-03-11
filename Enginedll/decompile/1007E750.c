/*
 * func-name: ?GetSymbol@DynLib@@QBEPAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1007e750
 * callers: 0x10096550, 0x10096b90
 * callees: none
 */

FARPROC __thiscall DynLib::GetSymbol(HMODULE *this, int a2)
{
  const CHAR *v3; // eax

  v3 = (const CHAR *)std::string::c_str(a2);
  return GetProcAddress(this[7], v3);
}
