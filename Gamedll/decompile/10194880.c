/*
 * func-name: ?GetSystemPartType@SystemPart@GameClient@@QBEHXZ_0
 * func-address: 0x10194880
 * callers: 0x1000f1ff
 * callees: none
 */

int __thiscall GameClient::SystemPart::GetSystemPartType(GameClient::SystemPart *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 196);
}
