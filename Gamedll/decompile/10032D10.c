/*
 * func-name: ??0DataObject@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10032d10
 * callers: 0x1000f006
 * callees: none
 */

GameClient::DataObject *__thiscall GameClient::DataObject::DataObject(
        GameClient::DataObject *this,
        const struct GameClient::DataObject *a2)
{
  GameClient::DataObject *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return result;
}
