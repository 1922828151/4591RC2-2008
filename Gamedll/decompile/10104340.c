/*
 * func-name: ??4AEquip@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10104340
 * callers: 0x10002a1d
 * callees: 0x10002a77, 0x1000d5c1, 0x10010497, 0x10012e5e, 0x1001a398
 */

int __thiscall GameClient::AEquip::operator=(int this, int a2)
{
  GameClient::AdapterActor::operator=(a2);
  *(_DWORD *)(this + 1272) = *(_DWORD *)(a2 + 1272);
  std::string::operator=(this + 1276, a2 + 1276);
  std::string::operator=(this + 1304, a2 + 1304);
  sub_10010497(a2 + 1332);
  sub_10002A77(a2 + 1348);
  *(_DWORD *)(this + 1364) = *(_DWORD *)(a2 + 1364);
  *(_BYTE *)(this + 1368) = *(_BYTE *)(a2 + 1368);
  *(_DWORD *)(this + 1372) = *(_DWORD *)(a2 + 1372);
  *(_DWORD *)(this + 1376) = *(_DWORD *)(a2 + 1376);
  *(_DWORD *)(this + 1380) = *(_DWORD *)(a2 + 1380);
  *(_BYTE *)(this + 1384) = *(_BYTE *)(a2 + 1384);
  std::string::operator=(this + 1388, a2 + 1388);
  std::string::operator=(this + 1416, a2 + 1416);
  *(_DWORD *)(this + 1444) = *(_DWORD *)(a2 + 1444);
  std::string::operator=(this + 1448, a2 + 1448);
  std::string::operator=(this + 1476, a2 + 1476);
  *(_DWORD *)(this + 1504) = *(_DWORD *)(a2 + 1504);
  std::string::operator=(this + 1508, a2 + 1508);
  std::string::operator=(this + 1536, a2 + 1536);
  *(_DWORD *)(this + 1564) = *(_DWORD *)(a2 + 1564);
  std::string::operator=(this + 1568, a2 + 1568);
  std::string::operator=(this + 1596, a2 + 1596);
  *(_DWORD *)(this + 1624) = *(_DWORD *)(a2 + 1624);
  *(float *)(this + 1628) = *(float *)(a2 + 1628);
  *(_BYTE *)(this + 1632) = *(_BYTE *)(a2 + 1632);
  *(float *)(this + 1636) = *(float *)(a2 + 1636);
  *(float *)(this + 1640) = *(float *)(a2 + 1640);
  *(float *)(this + 1644) = *(float *)(a2 + 1644);
  std::string::operator=(this + 1648, a2 + 1648);
  std::string::operator=(this + 1676, a2 + 1676);
  *(_DWORD *)(this + 1704) = *(_DWORD *)(a2 + 1704);
  *(float *)(this + 1708) = *(float *)(a2 + 1708);
  *(_BYTE *)(this + 1712) = *(_BYTE *)(a2 + 1712);
  *(float *)(this + 1716) = *(float *)(a2 + 1716);
  *(float *)(this + 1720) = *(float *)(a2 + 1720);
  *(float *)(this + 1724) = *(float *)(a2 + 1724);
  std::string::operator=(this + 1728, a2 + 1728);
  std::string::operator=(this + 1756, a2 + 1756);
  *(_DWORD *)(this + 1784) = *(_DWORD *)(a2 + 1784);
  *(float *)(this + 1788) = *(float *)(a2 + 1788);
  *(_BYTE *)(this + 1792) = *(_BYTE *)(a2 + 1792);
  *(float *)(this + 1796) = *(float *)(a2 + 1796);
  *(float *)(this + 1800) = *(float *)(a2 + 1800);
  *(float *)(this + 1804) = *(float *)(a2 + 1804);
  std::string::operator=(this + 1808, a2 + 1808);
  std::string::operator=(this + 1836, a2 + 1836);
  *(_DWORD *)(this + 1864) = *(_DWORD *)(a2 + 1864);
  *(float *)(this + 1868) = *(float *)(a2 + 1868);
  *(_BYTE *)(this + 1872) = *(_BYTE *)(a2 + 1872);
  *(float *)(this + 1876) = *(float *)(a2 + 1876);
  *(float *)(this + 1880) = *(float *)(a2 + 1880);
  *(float *)(this + 1884) = *(float *)(a2 + 1884);
  std::string::operator=(this + 1888, a2 + 1888);
  std::string::operator=(this + 1916, a2 + 1916);
  *(_DWORD *)(this + 1944) = *(_DWORD *)(a2 + 1944);
  *(float *)(this + 1948) = *(float *)(a2 + 1948);
  *(_BYTE *)(this + 1952) = *(_BYTE *)(a2 + 1952);
  *(float *)(this + 1956) = *(float *)(a2 + 1956);
  *(float *)(this + 1960) = *(float *)(a2 + 1960);
  *(float *)(this + 1964) = *(float *)(a2 + 1964);
  std::string::operator=(this + 1968, a2 + 1968);
  std::string::operator=(this + 1996, a2 + 1996);
  *(_DWORD *)(this + 2024) = *(_DWORD *)(a2 + 2024);
  *(float *)(this + 2028) = *(float *)(a2 + 2028);
  *(_BYTE *)(this + 2032) = *(_BYTE *)(a2 + 2032);
  *(float *)(this + 2036) = *(float *)(a2 + 2036);
  *(float *)(this + 2040) = *(float *)(a2 + 2040);
  *(float *)(this + 2044) = *(float *)(a2 + 2044);
  std::string::operator=(this + 2048, a2 + 2048);
  std::string::operator=(this + 2076, a2 + 2076);
  *(_DWORD *)(this + 2104) = *(_DWORD *)(a2 + 2104);
  *(float *)(this + 2108) = *(float *)(a2 + 2108);
  *(_BYTE *)(this + 2112) = *(_BYTE *)(a2 + 2112);
  *(float *)(this + 2116) = *(float *)(a2 + 2116);
  *(float *)(this + 2120) = *(float *)(a2 + 2120);
  *(float *)(this + 2124) = *(float *)(a2 + 2124);
  *(_DWORD *)(this + 2128) = *(_DWORD *)(a2 + 2128);
  *(_DWORD *)(this + 2132) = *(_DWORD *)(a2 + 2132);
  *(_DWORD *)(this + 2136) = *(_DWORD *)(a2 + 2136);
  if ( this + 2140 != a2 + 2140 )
    sub_10012E5E(a2 + 2140);
  *(_DWORD *)(this + 2180) = *(_DWORD *)(a2 + 2180);
  *(_DWORD *)(this + 2184) = *(_DWORD *)(a2 + 2184);
  *(_DWORD *)(this + 2188) = *(_DWORD *)(a2 + 2188);
  *(_DWORD *)(this + 2192) = *(_DWORD *)(a2 + 2192);
  *(_DWORD *)(this + 2196) = *(_DWORD *)(a2 + 2196);
  *(_DWORD *)(this + 2200) = *(_DWORD *)(a2 + 2200);
  *(_DWORD *)(this + 2204) = *(_DWORD *)(a2 + 2204);
  *(_DWORD *)(this + 2208) = *(_DWORD *)(a2 + 2208);
  *(_DWORD *)(this + 2212) = *(_DWORD *)(a2 + 2212);
  *(_DWORD *)(this + 2216) = *(_DWORD *)(a2 + 2216);
  sub_1000D5C1(a2 + 2220);
  sub_1000D5C1(a2 + 2236);
  sub_1000D5C1(a2 + 2252);
  sub_1000D5C1(a2 + 2268);
  return this;
}
