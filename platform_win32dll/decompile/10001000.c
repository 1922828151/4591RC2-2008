/*
 * func-name: sub_10001000
 * func-address: 0x10001000
 * callers: none
 * callees: none
 */

int __thiscall sub_10001000(int this)
{
  HANDLE CurrentProcess; // eax

  CurrentProcess = GetCurrentProcess();
  SymCleanup(CurrentProcess);
  CloseHandle(*(HANDLE *)(this + 56));
  FreeLibrary(*(HMODULE *)(this + 64));
  std::string::~string(this + 28);
  return std::string::~string(this);
}
