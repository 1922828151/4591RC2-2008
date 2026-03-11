/*
 * func-name: ?GetSceneName@World@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x100182b0
 * callers: none
 * callees: none
 */

int __thiscall World::GetSceneName(char *this, int a2)
{
  std::string::string(a2, this + 596);
  return a2;
}
