/*
 * func-name: ??4MaterialLibrary@@QAEAAV0@ABV0@@Z
 * func-address: 0x10020f40
 * callers: none
 * callees: 0x1000ce20
 */

char *__thiscall MaterialLibrary::operator=(char *this, int a2)
{
  std::vector<Material *>::operator=((int)this, a2);
  std::string::operator=(this + 16, a2 + 16);
  return this;
}
