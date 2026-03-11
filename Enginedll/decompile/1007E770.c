/*
 * func-name: ?GetError@DynLib@@IAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x1007e770
 * callers: 0x1007e7c0, 0x1007e880
 * callees: none
 */

int __stdcall DynLib::GetError(int a1)
{
  DWORD LastError; // eax
  CHAR Buffer[4]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)Buffer = 0;
  LastError = GetLastError();
  FormatMessageA(0x1300u, 0, LastError, 0x400u, Buffer, 0, 0);
  std::string::string(a1, *(_DWORD *)Buffer);
  LocalFree(*(HLOCAL *)Buffer);
  return a1;
}
