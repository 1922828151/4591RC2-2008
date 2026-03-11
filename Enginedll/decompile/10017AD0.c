/*
 * func-name: ?GetBoneName@Mesh@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x10017ad0
 * callers: none
 * callees: none
 */

int __thiscall Mesh::GetBoneName(_DWORD **this, int a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__stdcall **)(_DWORD *, int))(*this[3] + 60))(this[3], a3);
  std::string::string(a2, v3);
  return a2;
}
