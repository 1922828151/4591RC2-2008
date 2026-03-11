/*
 * func-name: ??0Terrain@@QAE@ABV0@@Z
 * func-address: 0x1005e940
 * callers: none
 * callees: 0x1002a570, 0x100589f0, 0x10058bc0, 0x10058da0, 0x10059810, 0x1005e6e0
 */

Terrain *__thiscall Terrain::Terrain(Terrain *this, const struct Terrain *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &Terrain::`vftable';
  *((_DWORD *)this + 293) = *((_DWORD *)a2 + 293);
  sub_10058BC0((_DWORD *)this + 294, (int)a2 + 1176);
  sub_100589F0((_DWORD *)this + 298, (int)a2 + 1192);
  *((_DWORD *)this + 302) = *((_DWORD *)a2 + 302);
  *((_DWORD *)this + 303) = *((_DWORD *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  sub_1005E6E0((_DWORD *)this + 306, (int)a2 + 1224);
  std::string::string((char *)this + 1240, (char *)a2 + 1240);
  std::string::string((char *)this + 1268, (char *)a2 + 1268);
  *((_DWORD *)this + 324) = *((_DWORD *)a2 + 324);
  *((_DWORD *)this + 325) = *((_DWORD *)a2 + 325);
  *((_DWORD *)this + 326) = *((_DWORD *)a2 + 326);
  *((_DWORD *)this + 327) = *((_DWORD *)a2 + 327);
  *((_DWORD *)this + 328) = *((_DWORD *)a2 + 328);
  *((_DWORD *)this + 329) = *((_DWORD *)a2 + 329);
  *((_DWORD *)this + 330) = *((_DWORD *)a2 + 330);
  *((_DWORD *)this + 331) = *((_DWORD *)a2 + 331);
  *((_DWORD *)this + 332) = *((_DWORD *)a2 + 332);
  *((_DWORD *)this + 333) = *((_DWORD *)a2 + 333);
  *((_DWORD *)this + 334) = *((_DWORD *)a2 + 334);
  *((_DWORD *)this + 335) = *((_DWORD *)a2 + 335);
  *((_DWORD *)this + 336) = *((_DWORD *)a2 + 336);
  *((_DWORD *)this + 337) = *((_DWORD *)a2 + 337);
  qmemcpy((char *)this + 1352, (char *)a2 + 1352, 0x20u);
  sub_10059810((_DWORD *)this + 346, (_DWORD *)a2 + 346);
  *((float *)this + 361) = *((float *)a2 + 361);
  *((_BYTE *)this + 1448) = *((_BYTE *)a2 + 1448);
  *((float *)this + 363) = *((float *)a2 + 363);
  *((_BYTE *)this + 1456) = *((_BYTE *)a2 + 1456);
  *((_DWORD *)this + 365) = *((_DWORD *)a2 + 365);
  *((_BYTE *)this + 1464) = *((_BYTE *)a2 + 1464);
  *((_DWORD *)this + 367) = *((_DWORD *)a2 + 367);
  *((_DWORD *)this + 368) = *((_DWORD *)a2 + 368);
  *((_BYTE *)this + 1476) = *((_BYTE *)a2 + 1476);
  std::string::string((char *)this + 1480, (char *)a2 + 1480);
  *((_DWORD *)this + 377) = *((_DWORD *)a2 + 377);
  *((float *)this + 378) = *((float *)a2 + 378);
  *((float *)this + 379) = *((float *)a2 + 379);
  *((_DWORD *)this + 380) = *((_DWORD *)a2 + 380);
  *((_DWORD *)this + 381) = *((_DWORD *)a2 + 381);
  *((_BYTE *)this + 1528) = *((_BYTE *)a2 + 1528);
  *((_DWORD *)this + 383) = *((_DWORD *)a2 + 383);
  *((_DWORD *)this + 384) = *((_DWORD *)a2 + 384);
  *((_DWORD *)this + 385) = *((_DWORD *)a2 + 385);
  *((_DWORD *)this + 386) = *((_DWORD *)a2 + 386);
  *((_DWORD *)this + 387) = *((_DWORD *)a2 + 387);
  *((_DWORD *)this + 388) = *((_DWORD *)a2 + 388);
  *((_DWORD *)this + 389) = *((_DWORD *)a2 + 389);
  *((_DWORD *)this + 390) = *((_DWORD *)a2 + 390);
  *((_DWORD *)this + 391) = *((_DWORD *)a2 + 391);
  *((_DWORD *)this + 392) = *((_DWORD *)a2 + 392);
  *((_DWORD *)this + 393) = *((_DWORD *)a2 + 393);
  *((_DWORD *)this + 394) = *((_DWORD *)a2 + 394);
  *((_DWORD *)this + 395) = *((_DWORD *)a2 + 395);
  *((_DWORD *)this + 396) = *((_DWORD *)a2 + 396);
  *((_DWORD *)this + 397) = *((_DWORD *)a2 + 397);
  std::string::string((char *)this + 1592, (char *)a2 + 1592);
  std::string::string((char *)this + 1620, (char *)a2 + 1620);
  std::string::string((char *)this + 1648, (char *)a2 + 1648);
  std::string::string((char *)this + 1676, (char *)a2 + 1676);
  sub_10058DA0((_DWORD *)this + 426, (int)a2 + 1704);
  *((float *)this + 430) = *((float *)a2 + 430);
  *((_DWORD *)this + 431) = *((_DWORD *)a2 + 431);
  *((_DWORD *)this + 432) = *((_DWORD *)a2 + 432);
  return this;
}
