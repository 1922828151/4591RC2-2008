/*
 * func-name: ??0DataObject@GameClient@@QAE@XZ_0
 * func-address: 0x10159120
 * callers: 0x100081ed
 * callees: none
 */

GameClient::DataObject *__thiscall GameClient::DataObject::DataObject(GameClient::DataObject *this)
{
  GameClient::DataObject *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 2) = 0;
  return result;
}
