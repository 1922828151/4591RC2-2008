/*
 * func-name: ?GetProductName@SystemPart@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x101948c0
 * callers: 0x10005056
 * callees: none
 */

void *__thiscall GameClient::SystemPart::GetProductName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[2] + 212));
  return a2;
}
