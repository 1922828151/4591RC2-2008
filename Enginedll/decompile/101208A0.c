/*
 * func-name: ?GetString@Shader@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBD@Z
 * func-address: 0x101208a0
 * callers: 0x100e2980, 0x100e4db0, 0x100e5360, 0x100e5d70, 0x101279c0
 * callees: none
 */

int __thiscall Shader::GetString(_DWORD **this, int a2, int a3)
{
  (*(void (__stdcall **)(_DWORD *, int, int *))(*this[4] + 204))(this[4], a3, &a3);
  std::string::string(a2, a3);
  return a2;
}
