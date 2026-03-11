/*
 * func-name: ??4Terrain@@QAEAAV0@ABV0@@Z
 * func-address: 0x1005ed30
 * callers: none
 * callees: 0x1002e3c0, 0x100588c0, 0x10058a90, 0x10058c60, 0x10058e40, 0x1005e7d0
 */

int __thiscall Terrain::operator=(int this, int a2)
{
  Prefab::operator=(this, a2);
  *(_DWORD *)(this + 1172) = *(_DWORD *)(a2 + 1172);
  sub_10058C60(this + 1176, a2 + 1176);
  sub_10058A90(this + 1192, a2 + 1192);
  *(_DWORD *)(this + 1208) = *(_DWORD *)(a2 + 1208);
  *(_DWORD *)(this + 1212) = *(_DWORD *)(a2 + 1212);
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  sub_1005E7D0(this + 1224, (_DWORD *)(a2 + 1224));
  std::string::operator=(this + 1240, a2 + 1240);
  std::string::operator=(this + 1268, a2 + 1268);
  *(_DWORD *)(this + 1296) = *(_DWORD *)(a2 + 1296);
  *(_DWORD *)(this + 1300) = *(_DWORD *)(a2 + 1300);
  *(_DWORD *)(this + 1304) = *(_DWORD *)(a2 + 1304);
  *(_DWORD *)(this + 1308) = *(_DWORD *)(a2 + 1308);
  *(_DWORD *)(this + 1312) = *(_DWORD *)(a2 + 1312);
  *(_DWORD *)(this + 1316) = *(_DWORD *)(a2 + 1316);
  *(_DWORD *)(this + 1320) = *(_DWORD *)(a2 + 1320);
  *(_DWORD *)(this + 1324) = *(_DWORD *)(a2 + 1324);
  *(_DWORD *)(this + 1328) = *(_DWORD *)(a2 + 1328);
  *(_DWORD *)(this + 1332) = *(_DWORD *)(a2 + 1332);
  *(_DWORD *)(this + 1336) = *(_DWORD *)(a2 + 1336);
  *(_DWORD *)(this + 1340) = *(_DWORD *)(a2 + 1340);
  *(_DWORD *)(this + 1344) = *(_DWORD *)(a2 + 1344);
  *(_DWORD *)(this + 1348) = *(_DWORD *)(a2 + 1348);
  qmemcpy((void *)(this + 1352), (const void *)(a2 + 1352), 0x20u);
  sub_100588C0(this + 1384, a2 + 1384);
  std::string::operator=(this + 1400, a2 + 1400);
  *(_DWORD *)(this + 1428) = *(_DWORD *)(a2 + 1428);
  *(_DWORD *)(this + 1432) = *(_DWORD *)(a2 + 1432);
  *(_DWORD *)(this + 1436) = *(_DWORD *)(a2 + 1436);
  *(_DWORD *)(this + 1440) = *(_DWORD *)(a2 + 1440);
  *(float *)(this + 1444) = *(float *)(a2 + 1444);
  *(_BYTE *)(this + 1448) = *(_BYTE *)(a2 + 1448);
  *(float *)(this + 1452) = *(float *)(a2 + 1452);
  *(_BYTE *)(this + 1456) = *(_BYTE *)(a2 + 1456);
  *(_DWORD *)(this + 1460) = *(_DWORD *)(a2 + 1460);
  *(_BYTE *)(this + 1464) = *(_BYTE *)(a2 + 1464);
  *(_DWORD *)(this + 1468) = *(_DWORD *)(a2 + 1468);
  *(_DWORD *)(this + 1472) = *(_DWORD *)(a2 + 1472);
  *(_BYTE *)(this + 1476) = *(_BYTE *)(a2 + 1476);
  std::string::operator=(this + 1480, a2 + 1480);
  *(_DWORD *)(this + 1508) = *(_DWORD *)(a2 + 1508);
  *(float *)(this + 1512) = *(float *)(a2 + 1512);
  *(float *)(this + 1516) = *(float *)(a2 + 1516);
  *(_DWORD *)(this + 1520) = *(_DWORD *)(a2 + 1520);
  *(_DWORD *)(this + 1524) = *(_DWORD *)(a2 + 1524);
  *(_BYTE *)(this + 1528) = *(_BYTE *)(a2 + 1528);
  *(_DWORD *)(this + 1532) = *(_DWORD *)(a2 + 1532);
  *(_DWORD *)(this + 1536) = *(_DWORD *)(a2 + 1536);
  *(_DWORD *)(this + 1540) = *(_DWORD *)(a2 + 1540);
  *(_DWORD *)(this + 1544) = *(_DWORD *)(a2 + 1544);
  *(_DWORD *)(this + 1548) = *(_DWORD *)(a2 + 1548);
  *(_DWORD *)(this + 1552) = *(_DWORD *)(a2 + 1552);
  *(_DWORD *)(this + 1556) = *(_DWORD *)(a2 + 1556);
  *(_DWORD *)(this + 1560) = *(_DWORD *)(a2 + 1560);
  *(_DWORD *)(this + 1564) = *(_DWORD *)(a2 + 1564);
  *(_DWORD *)(this + 1568) = *(_DWORD *)(a2 + 1568);
  *(_DWORD *)(this + 1572) = *(_DWORD *)(a2 + 1572);
  *(_DWORD *)(this + 1576) = *(_DWORD *)(a2 + 1576);
  *(_DWORD *)(this + 1580) = *(_DWORD *)(a2 + 1580);
  *(_DWORD *)(this + 1584) = *(_DWORD *)(a2 + 1584);
  *(_DWORD *)(this + 1588) = *(_DWORD *)(a2 + 1588);
  std::string::operator=(this + 1592, a2 + 1592);
  std::string::operator=(this + 1620, a2 + 1620);
  std::string::operator=(this + 1648, a2 + 1648);
  std::string::operator=(this + 1676, a2 + 1676);
  sub_10058E40(this + 1704, a2 + 1704);
  *(float *)(this + 1720) = *(float *)(a2 + 1720);
  *(_DWORD *)(this + 1724) = *(_DWORD *)(a2 + 1724);
  *(_DWORD *)(this + 1728) = *(_DWORD *)(a2 + 1728);
  return this;
}
