/*
 * func-name: ?GetPower@SystemPart@GameClient@@QBEHXZ_0
 * func-address: 0x101948a0
 * callers: 0x10003e6d
 * callees: none
 */

int __thiscall GameClient::SystemPart::GetPower(GameClient::SystemPart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 204);
}
