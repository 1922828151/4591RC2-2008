/*
 * func-name: ??1PrefabInstance@@UAE@XZ
 * func-address: 0x1007e990
 * callers: 0x1007e9e0
 * callees: 0x100518e0
 */

void __thiscall PrefabInstance::~PrefabInstance(PrefabInstance *this)
{
  std::string::~string((char *)this + 1172);
  Prefab::~Prefab(this);
}
