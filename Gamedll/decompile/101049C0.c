/*
 * func-name: ??4CombinPart@GameClient@@QAEAAU01@ABU01@@Z_0
 * func-address: 0x101049c0
 * callers: 0x1001a41a
 * callees: none
 */

_DWORD *__thiscall GameClient::CombinPart::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this, a2);
  this[7] = *(_DWORD *)(a2 + 28);
  std::vector<Model *>::operator=(this + 8, a2 + 32);
  return this;
}
