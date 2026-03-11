/*
 * func-name: ??0GroupManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1007ac40
 * callers: 0x100098b8
 * callees: 0x100028b5, 0x100065e1, 0x1000db4d, 0x1000f786, 0x100131a1, 0x10017251, 0x1001938f
 */

GameClient::GroupManager *__thiscall GameClient::GroupManager::GroupManager(
        GameClient::GroupManager *this,
        const struct GameClient::GroupManager *a2)
{
  *(_DWORD *)this = &GameClient::GroupManager::`vftable';
  sub_10017251((int)a2 + 4);
  sub_1000F786((int)a2 + 44);
  sub_1000DB4D((int)a2 + 84);
  sub_100131A1((int)a2 + 124);
  sub_100065E1((int)a2 + 164);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  std::string::string((char *)this + 196, (char *)a2 + 196);
  sub_1001938F((int)a2 + 224);
  sub_100028B5((int)a2 + 236);
  return this;
}
