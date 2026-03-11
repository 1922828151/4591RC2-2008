/*
 * func-name: ??0CombinRobot@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1011de60
 * callers: 0x10010186
 * callees: 0x10001393, 0x1000eb1a, 0x1001093d
 */

GameClient::CombinRobot *__thiscall GameClient::CombinRobot::CombinRobot(
        GameClient::CombinRobot *this,
        const struct GameClient::CombinRobot *a2)
{
  GameClient::CombinActor::CombinActor(this, a2);
  *(_DWORD *)this = &GameClient::CombinRobot::`vftable';
  *((_BYTE *)this + 1392) = *((_BYTE *)a2 + 1392);
  *((_DWORD *)this + 349) = *((_DWORD *)a2 + 349);
  *((_DWORD *)this + 350) = *((_DWORD *)a2 + 350);
  *((_DWORD *)this + 351) = *((_DWORD *)a2 + 351);
  *((_DWORD *)this + 352) = *((_DWORD *)a2 + 352);
  *((_DWORD *)this + 353) = *((_DWORD *)a2 + 353);
  *((_DWORD *)this + 354) = *((_DWORD *)a2 + 354);
  *((_DWORD *)this + 355) = *((_DWORD *)a2 + 355);
  *((_DWORD *)this + 356) = *((_DWORD *)a2 + 356);
  *((_DWORD *)this + 357) = *((_DWORD *)a2 + 357);
  *((_DWORD *)this + 358) = *((_DWORD *)a2 + 358);
  *((_DWORD *)this + 359) = *((_DWORD *)a2 + 359);
  *((_DWORD *)this + 360) = *((_DWORD *)a2 + 360);
  *((_DWORD *)this + 361) = *((_DWORD *)a2 + 361);
  *((_DWORD *)this + 362) = *((_DWORD *)a2 + 362);
  *((_DWORD *)this + 363) = *((_DWORD *)a2 + 363);
  *((_DWORD *)this + 364) = *((_DWORD *)a2 + 364);
  *((_DWORD *)this + 365) = *((_DWORD *)a2 + 365);
  *((_DWORD *)this + 366) = *((_DWORD *)a2 + 366);
  *((_DWORD *)this + 367) = *((_DWORD *)a2 + 367);
  *((_DWORD *)this + 368) = *((_DWORD *)a2 + 368);
  *((_DWORD *)this + 369) = *((_DWORD *)a2 + 369);
  *((_DWORD *)this + 370) = *((_DWORD *)a2 + 370);
  *((_DWORD *)this + 371) = *((_DWORD *)a2 + 371);
  *((_DWORD *)this + 372) = *((_DWORD *)a2 + 372);
  *((_DWORD *)this + 373) = *((_DWORD *)a2 + 373);
  *((_DWORD *)this + 374) = *((_DWORD *)a2 + 374);
  *((_DWORD *)this + 375) = *((_DWORD *)a2 + 375);
  *((_DWORD *)this + 376) = *((_DWORD *)a2 + 376);
  *((_DWORD *)this + 377) = *((_DWORD *)a2 + 377);
  *((_DWORD *)this + 378) = *((_DWORD *)a2 + 378);
  *((_DWORD *)this + 379) = *((_DWORD *)a2 + 379);
  qmemcpy((char *)this + 1520, (char *)a2 + 1520, 0x3Cu);
  qmemcpy((char *)this + 1580, (char *)a2 + 1580, 0x3Cu);
  qmemcpy((char *)this + 1640, (char *)a2 + 1640, 0x20u);
  qmemcpy((char *)this + 1672, (char *)a2 + 1672, 0x20u);
  sub_1001093D((int)a2 + 1704);
  sub_1000EB1A((int)a2 + 1744);
  sub_1001093D((int)a2 + 1760);
  *((_DWORD *)this + 450) = *((_DWORD *)a2 + 450);
  *((_DWORD *)this + 451) = *((_DWORD *)a2 + 451);
  *((_DWORD *)this + 452) = *((_DWORD *)a2 + 452);
  return this;
}
