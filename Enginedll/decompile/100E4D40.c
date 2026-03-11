/*
 * func-name: ??0MaterialLibrary@@QAE@XZ
 * func-address: 0x100e4d40
 * callers: none
 * callees: 0x100e3ef0, 0x100e8890
 */

MaterialLibrary *__thiscall MaterialLibrary::MaterialLibrary(MaterialLibrary *this)
{
  struct MaterialManager *v2; // eax
  int v4[5]; // [esp+4h] [ebp-14h] BYREF

  v4[1] = (int)this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v4[4] = 1;
  std::string::string((char *)this + 16);
  v4[0] = (int)this;
  v2 = MaterialManager::Instance();
  sub_100E8890((int)v2 + 20, (int)v4);
  return this;
}
