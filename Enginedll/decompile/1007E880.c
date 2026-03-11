/*
 * func-name: ?Unload@DynLib@@QAEXXZ
 * func-address: 0x1007e880
 * callers: 0x10096550
 * callees: 0x1007e770, 0x100956d0, 0x100e2550
 */

void __thiscall DynLib::Unload(HMODULE *this)
{
  const char *v2; // eax
  int Error; // eax
  const char *v4; // eax
  const char *v5; // [esp-4h] [ebp-30h]
  _BYTE v6[28]; // [esp+4h] [ebp-28h] BYREF
  int v7; // [esp+28h] [ebp-4h]

  v2 = (const char *)std::string::c_str(this);
  LogPrintf("Unloading library %s", v2);
  if ( !FreeLibrary(this[7]) )
  {
    Error = DynLib::GetError((int)v6);
    v7 = 0;
    v5 = (const char *)std::string::c_str(Error);
    v4 = (const char *)std::string::c_str(this);
    ::Error("Could not unload dynamic library %s.  System Error: %s DynLib::unload", v4, v5);
    v7 = -1;
    std::string::~string(v6);
  }
}
