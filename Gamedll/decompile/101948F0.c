/*
 * func-name: ?GetVersionID@SystemPart@GameClient@@UBEKXZ_0
 * func-address: 0x101948f0
 * callers: 0x1000573b
 * callees: none
 */

unsigned int __thiscall GameClient::SystemPart::GetVersionID(GameClient::SystemPart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 240);
}
