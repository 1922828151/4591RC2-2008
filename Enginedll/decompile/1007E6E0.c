/*
 * func-name: ??0DynLib@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1007e6e0
 * callers: 0x10096b90
 * callees: none
 */

_DWORD *__thiscall DynLib::DynLib(_DWORD *this, int a2)
{
  std::string::string(this);
  std::string::operator=(this, a2);
  this[7] = 0;
  return this;
}
