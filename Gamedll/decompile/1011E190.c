/*
 * func-name: ??4CombinRobot@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1011e190
 * callers: 0x10005b28
 * callees: 0x1000254a, 0x1000754a, 0x1000f588
 */

int __thiscall GameClient::CombinRobot::operator=(int this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // edx

  GameClient::CombinActor::operator=(a2);
  *(_BYTE *)(this + 1392) = *(_BYTE *)(a2 + 1392);
  *(_DWORD *)(this + 1396) = *(_DWORD *)(a2 + 1396);
  *(_DWORD *)(this + 1400) = *(_DWORD *)(a2 + 1400);
  *(_DWORD *)(this + 1404) = *(_DWORD *)(a2 + 1404);
  *(_DWORD *)(this + 1408) = *(_DWORD *)(a2 + 1408);
  *(_DWORD *)(this + 1412) = *(_DWORD *)(a2 + 1412);
  *(_DWORD *)(this + 1416) = *(_DWORD *)(a2 + 1416);
  *(_DWORD *)(this + 1420) = *(_DWORD *)(a2 + 1420);
  *(_DWORD *)(this + 1424) = *(_DWORD *)(a2 + 1424);
  *(_DWORD *)(this + 1428) = *(_DWORD *)(a2 + 1428);
  *(_DWORD *)(this + 1432) = *(_DWORD *)(a2 + 1432);
  *(_DWORD *)(this + 1436) = *(_DWORD *)(a2 + 1436);
  *(_DWORD *)(this + 1440) = *(_DWORD *)(a2 + 1440);
  *(_DWORD *)(this + 1444) = *(_DWORD *)(a2 + 1444);
  *(_DWORD *)(this + 1448) = *(_DWORD *)(a2 + 1448);
  *(_DWORD *)(this + 1452) = *(_DWORD *)(a2 + 1452);
  *(_DWORD *)(this + 1456) = *(_DWORD *)(a2 + 1456);
  *(_DWORD *)(this + 1460) = *(_DWORD *)(a2 + 1460);
  *(_DWORD *)(this + 1464) = *(_DWORD *)(a2 + 1464);
  *(_DWORD *)(this + 1468) = *(_DWORD *)(a2 + 1468);
  *(_DWORD *)(this + 1472) = *(_DWORD *)(a2 + 1472);
  *(_DWORD *)(this + 1476) = *(_DWORD *)(a2 + 1476);
  *(_DWORD *)(this + 1480) = *(_DWORD *)(a2 + 1480);
  *(_DWORD *)(this + 1484) = *(_DWORD *)(a2 + 1484);
  *(_DWORD *)(this + 1488) = *(_DWORD *)(a2 + 1488);
  *(_DWORD *)(this + 1492) = *(_DWORD *)(a2 + 1492);
  *(_DWORD *)(this + 1496) = *(_DWORD *)(a2 + 1496);
  *(_DWORD *)(this + 1500) = *(_DWORD *)(a2 + 1500);
  *(_DWORD *)(this + 1504) = *(_DWORD *)(a2 + 1504);
  *(_DWORD *)(this + 1508) = *(_DWORD *)(a2 + 1508);
  *(_DWORD *)(this + 1512) = *(_DWORD *)(a2 + 1512);
  *(_DWORD *)(this + 1516) = *(_DWORD *)(a2 + 1516);
  v3 = (_DWORD *)(this + 1520);
  v4 = a2 - this;
  v5 = 15;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = (_DWORD *)(this + 1580);
  v7 = 15;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v4);
    ++v6;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(this + 1640) = *(_DWORD *)(a2 + 1640);
  *(_DWORD *)(this + 1644) = *(_DWORD *)(a2 + 1644);
  *(_DWORD *)(this + 1648) = *(_DWORD *)(a2 + 1648);
  *(_DWORD *)(this + 1652) = *(_DWORD *)(a2 + 1652);
  *(_DWORD *)(this + 1656) = *(_DWORD *)(a2 + 1656);
  *(_DWORD *)(this + 1660) = *(_DWORD *)(a2 + 1660);
  *(_DWORD *)(this + 1664) = *(_DWORD *)(a2 + 1664);
  *(_DWORD *)(this + 1668) = *(_DWORD *)(a2 + 1668);
  *(_DWORD *)(this + 1672) = *(_DWORD *)(a2 + 1672);
  *(_DWORD *)(this + 1676) = *(_DWORD *)(a2 + 1676);
  *(_DWORD *)(this + 1680) = *(_DWORD *)(a2 + 1680);
  *(_DWORD *)(this + 1684) = *(_DWORD *)(a2 + 1684);
  *(_DWORD *)(this + 1688) = *(_DWORD *)(a2 + 1688);
  *(_DWORD *)(this + 1692) = *(_DWORD *)(a2 + 1692);
  *(_DWORD *)(this + 1696) = *(_DWORD *)(a2 + 1696);
  *(_DWORD *)(this + 1700) = *(_DWORD *)(a2 + 1700);
  if ( this + 1704 != a2 + 1704 )
    sub_1000254A(a2 + 1704);
  sub_1000754A(a2 + 1744);
  if ( this + 1760 != a2 + 1760 )
    sub_1000254A(a2 + 1760);
  *(_DWORD *)(this + 1800) = *(_DWORD *)(a2 + 1800);
  *(_DWORD *)(this + 1804) = *(_DWORD *)(a2 + 1804);
  *(_DWORD *)(this + 1808) = *(_DWORD *)(a2 + 1808);
  return this;
}
