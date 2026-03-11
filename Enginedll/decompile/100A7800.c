/*
 * func-name: ?setWorldName@C3DModel@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100a7800
 * callers: none
 * callees: none
 */

int __thiscall C3DModel::setWorldName(char *this, int a2)
{
  return std::string::operator=(this + 956, a2);
}
