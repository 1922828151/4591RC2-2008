/*
 * func-name: ??4PrefabInstance@@QAEAAV0@ABV0@@Z
 * func-address: 0x10091360
 * callers: none
 * callees: 0x1002e3c0
 */

char *__thiscall PrefabInstance::operator=(char *this, int a2)
{
  Prefab::operator=((int)this, a2);
  std::string::operator=(this + 1172, a2 + 1172);
  return this;
}
