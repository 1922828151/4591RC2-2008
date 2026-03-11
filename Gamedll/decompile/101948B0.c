/*
 * func-name: ?GetProductID@SystemPart@GameClient@@UBEKXZ_0
 * func-address: 0x101948b0
 * callers: 0x100018ed
 * callees: none
 */

unsigned int __thiscall GameClient::SystemPart::GetProductID(GameClient::SystemPart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 208);
}
