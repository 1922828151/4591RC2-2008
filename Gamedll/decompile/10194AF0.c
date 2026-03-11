/*
 * func-name: ?CanBeTakeUp@TransformItem@GameClient@@UAE_NXZ_0
 * func-address: 0x10194af0
 * callers: 0x100020e5
 * callees: none
 */

bool __thiscall GameClient::TransformItem::CanBeTakeUp(GameClient::TransformItem *this)
{
  return *(_BYTE *)(*((_DWORD *)this + 2) + 333) == 0;
}
