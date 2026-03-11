/*
 * func-name: ?Load@DynLib@@QAEXXZ
 * func-address: 0x1007e7c0
 * callers: 0x10096b90
 * callees: 0x1007e770, 0x100956d0, 0x100e2550
 */

void __thiscall DynLib::Load(DynLib *this)
{
  const char *v2; // eax
  const CHAR *v3; // eax
  HMODULE LibraryA; // eax
  int Error; // eax
  const char *v6; // eax
  const char *v7; // [esp-4h] [ebp-4Ch]
  _BYTE v8[28]; // [esp+4h] [ebp-44h] BYREF
  _BYTE v9[28]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  v2 = (const char *)std::string::c_str(this);
  LogPrintf("Loading library %s", v2);
  std::string::string(v8, this);
  v10 = 0;
  v3 = (const CHAR *)std::string::c_str(v8);
  LibraryA = LoadLibraryA(v3);
  *((_DWORD *)this + 7) = LibraryA;
  if ( !LibraryA )
  {
    Error = DynLib::GetError((int)v9);
    LOBYTE(v10) = 1;
    v7 = (const char *)std::string::c_str(Error);
    v6 = (const char *)std::string::c_str(this);
    ::Error("Could not load dynamic library %s.  System Error: %s DynLib::load", v6, v7);
    LOBYTE(v10) = 0;
    std::string::~string(v9);
  }
  v10 = -1;
  std::string::~string(v8);
}
