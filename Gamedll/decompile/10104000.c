/*
 * func-name: ??0AEquip@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10104000
 * callers: 0x10010109
 * callees: 0x1000a1d2, 0x1000b613, 0x1000cf40, 0x1001078f, 0x10014a88, 0x1001813d
 */

GameClient::AEquip *__thiscall GameClient::AEquip::AEquip(
        GameClient::AEquip *this,
        const struct GameClient::AEquip *a2)
{
  GameClient::AdapterActor::AdapterActor(this, a2);
  *(_DWORD *)this = &GameClient::AEquip::`vftable';
  *((_DWORD *)this + 318) = *((_DWORD *)a2 + 318);
  sub_1001078F((char *)a2 + 1276);
  *((_DWORD *)this + 343) = *((_DWORD *)a2 + 343);
  *((_DWORD *)this + 344) = *((_DWORD *)a2 + 344);
  *((_DWORD *)this + 345) = *((_DWORD *)a2 + 345);
  *((_BYTE *)this + 1384) = *((_BYTE *)a2 + 1384);
  sub_1001813D((char *)a2 + 1388);
  sub_1001813D((char *)a2 + 1448);
  sub_1001813D((char *)a2 + 1508);
  sub_1000CF40((char *)a2 + 1568);
  sub_1000CF40((char *)a2 + 1648);
  sub_1000CF40((char *)a2 + 1728);
  sub_1000CF40((char *)a2 + 1808);
  sub_1000CF40((char *)a2 + 1888);
  sub_1000CF40((char *)a2 + 1968);
  sub_1000CF40((char *)a2 + 2048);
  *((_DWORD *)this + 532) = *((_DWORD *)a2 + 532);
  *((_DWORD *)this + 533) = *((_DWORD *)a2 + 533);
  *((_DWORD *)this + 534) = *((_DWORD *)a2 + 534);
  sub_1000A1D2((int)a2 + 2140);
  *((_DWORD *)this + 545) = *((_DWORD *)a2 + 545);
  *((_DWORD *)this + 546) = *((_DWORD *)a2 + 546);
  *((_DWORD *)this + 547) = *((_DWORD *)a2 + 547);
  *((_DWORD *)this + 548) = *((_DWORD *)a2 + 548);
  *((_DWORD *)this + 549) = *((_DWORD *)a2 + 549);
  *((_DWORD *)this + 550) = *((_DWORD *)a2 + 550);
  *((_DWORD *)this + 551) = *((_DWORD *)a2 + 551);
  *((_DWORD *)this + 552) = *((_DWORD *)a2 + 552);
  *((_DWORD *)this + 553) = *((_DWORD *)a2 + 553);
  *((_DWORD *)this + 554) = *((_DWORD *)a2 + 554);
  sub_1000B613((int)a2 + 2220);
  sub_1000B613((int)a2 + 2236);
  sub_1000B613((int)a2 + 2252);
  sub_1000B613((int)a2 + 2268);
  return this;
}
