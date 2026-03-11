/*
 * func-name: ??0Skill@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10161a10
 * callers: 0x10007fae
 * callees: 0x1000b50a, 0x1000b53c, 0x1000cf40
 */

GameClient::Skill *__thiscall GameClient::Skill::Skill(GameClient::Skill *this, const struct GameClient::Skill *a2)
{
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::Skill::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  sub_1000B50A((int)a2 + 24);
  sub_1000B50A((int)a2 + 40);
  *((float *)this + 14) = *((float *)a2 + 14);
  *((float *)this + 15) = *((float *)a2 + 15);
  *((float *)this + 16) = *((float *)a2 + 16);
  sub_1000B53C((char *)a2 + 68);
  sub_1000B53C((char *)a2 + 188);
  sub_1000B53C((char *)a2 + 308);
  sub_1000CF40((char *)a2 + 428);
  sub_1000CF40((char *)a2 + 508);
  sub_1000CF40((char *)a2 + 588);
  return this;
}
