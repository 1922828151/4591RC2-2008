/*
 * func-name: ??0CombinActor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1010f8c0
 * callers: 0x10001393
 * callees: 0x10005c81, 0x10006a87, 0x1000d8d2, 0x1000de8b, 0x10014a88
 */

GameClient::CombinActor *__thiscall GameClient::CombinActor::CombinActor(
        GameClient::CombinActor *this,
        const struct GameClient::CombinActor *a2)
{
  GameClient::AdapterActor::AdapterActor(this, a2);
  *(_DWORD *)this = &GameClient::CombinActor::`vftable';
  sub_1000DE8B((int)a2 + 1272);
  sub_1000D8D2((int)a2 + 1312);
  sub_10006A87((int)a2 + 1352);
  sub_10005C81((int)a2 + 1368);
  *((_DWORD *)this + 346) = *((_DWORD *)a2 + 346);
  *((_BYTE *)this + 1388) = *((_BYTE *)a2 + 1388);
  *((_BYTE *)this + 1389) = *((_BYTE *)a2 + 1389);
  return this;
}
