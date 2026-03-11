/*
 * func-name: ??4VFormat@VertexManager@@QAEAAU01@ABU01@@Z
 * func-address: 0x10017b50
 * callers: none
 * callees: none
 */

_DWORD *__thiscall VertexManager::VFormat::operator=(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  this[1] = a2[1];
  std::string::operator=(this + 2, a2 + 2);
  this[9] = a2[9];
  return this;
}
