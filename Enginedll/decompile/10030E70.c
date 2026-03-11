/*
 * func-name: ?AddMaterial@MaterialLibrary@@QAEXPAVMaterial@@@Z
 * func-address: 0x10030e70
 * callers: none
 * callees: 0x10012aa0
 */

void __thiscall MaterialLibrary::AddMaterial(MaterialLibrary *this, struct Material *a2)
{
  std::vector<Material *>::push_back(this, (int *)&a2);
}
