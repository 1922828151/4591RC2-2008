/*
 * func-name: ??0PrefabInstance@@QAE@ABV0@@Z
 * func-address: 0x10090f70
 * callers: none
 * callees: 0x1002a570
 */

PrefabInstance *__thiscall PrefabInstance::PrefabInstance(PrefabInstance *this, const struct PrefabInstance *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &PrefabInstance::`vftable';
  std::string::string((char *)this + 1172, (char *)a2 + 1172);
  return this;
}
