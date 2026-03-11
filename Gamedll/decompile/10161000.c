/*
 * func-name: ?IsUsing@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10161000
 * callers: 0x1000b2fd
 * callees: none
 */

bool __thiscall GameClient::Item::IsUsing(GameClient::Item *this)
{
  return *((_DWORD *)this + 194) != -1;
}
