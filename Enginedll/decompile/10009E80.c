/*
 * func-name: ?GetFilename@Shader@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10009e80
 * callers: 0x100028f0, 0x1003ea30, 0x100405a0, 0x100e2c10
 * callees: none
 */

int __thiscall Shader::GetFilename(char *this, int a2)
{
  std::string::string(a2, this + 188);
  return a2;
}
