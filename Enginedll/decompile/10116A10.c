/*
 * func-name: ?Clone@PrefabInstance@@UAEXPAVActor@@_N@Z
 * func-address: 0x10116a10
 * callers: none
 * callees: 0x1004f2e0
 */

void __thiscall PrefabInstance::Clone(PrefabInstance *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, 0);
  std::string::operator=((char *)a2 + 1172, (char *)this + 1172);
}
