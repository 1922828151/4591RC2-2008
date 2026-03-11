/*
 * func-name: ?CanBeActived@Function@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101cd7c0
 * callers: 0x1000a1aa
 * callees: none
 */

bool __thiscall GameClient::Function::CanBeActived(GameClient::Function *this, struct GameClient::LocalCharacter *a2)
{
  return *((_DWORD *)this + 7) && *((_BYTE *)this + 36) != 0;
}
