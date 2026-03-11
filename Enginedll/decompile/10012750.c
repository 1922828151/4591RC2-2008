/*
 * func-name: ??4ScriptData@@QAEAAU0@ABU0@@Z
 * func-address: 0x10012750
 * callers: 0x1002dd40, 0x10038ca0, 0x10045740, 0x1004f2e0
 * callees: 0x10011510
 */

_BYTE *__thiscall ScriptData::operator=(_BYTE *this, int a2)
{
  std::string::operator=(this, a2);
  std::string::operator=(this + 28, a2 + 28);
  std::string::operator=(this + 56, a2 + 56);
  std::string::operator=(this + 84, a2 + 84);
  sub_10011510((int)(this + 112), a2 + 112);
  sub_10011510((int)(this + 128), a2 + 128);
  this[144] = *(_BYTE *)(a2 + 144);
  return this;
}
