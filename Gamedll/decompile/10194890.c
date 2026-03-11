/*
 * func-name: ?GetMass@SystemPart@GameClient@@QBEHXZ_0
 * func-address: 0x10194890
 * callers: 0x1000eb10
 * callees: none
 */

int __thiscall GameClient::SystemPart::GetMass(GameClient::SystemPart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 200);
}
