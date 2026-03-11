/*
 * func-name: ??0MaterialLibrary@@QAE@ABV0@@Z
 * func-address: 0x10024660
 * callers: none
 * callees: 0x1000d680
 */

MaterialLibrary *__thiscall MaterialLibrary::MaterialLibrary(MaterialLibrary *this, const struct MaterialLibrary *a2)
{
  std::vector<Material *>::vector<Material *>(this, (int)a2);
  std::string::string((char *)this + 16, (char *)a2 + 16);
  return this;
}
