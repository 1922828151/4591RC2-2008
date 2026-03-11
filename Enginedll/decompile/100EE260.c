/*
 * func-name: ?FindMaterial@StaticModel@@QAEPAVMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100ee260
 * callers: 0x1012ffd0
 * callees: 0x1009e0f0
 */

int __thiscall StaticModel::FindMaterial(_DWORD **this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int Mat; // esi

  Mat = ModelFrame::FindMat(this[77], (int)&a2);
  std::string::~string(&a2);
  return Mat;
}
