/*
 * func-name: ?GetMaterialList@World@@QAE?AV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@XZ
 * func-address: 0x10138850
 * callers: 0x1004eb00
 * callees: 0x1000d680
 */

_DWORD *__thiscall World::GetMaterialList(void *this, _DWORD *a2)
{
  std::vector<Material *>::vector<Material *>(a2, (int)this + 708);
  return a2;
}
