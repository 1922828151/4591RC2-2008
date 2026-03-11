/*
 * func-name: ??4FEquip@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1011d830
 * callers: 0x10017cba
 * callees: 0x1000d5c1, 0x100102b7
 */

int __thiscall GameClient::FEquip::operator=(int this, int a2)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // ebp
  int v7; // ebp
  int v8; // ebp
  int v9; // ebp
  float *v10; // ebx
  int v11; // edi
  int result; // eax
  int v13; // [esp+14h] [ebp+4h]
  int v14; // [esp+14h] [ebp+4h]
  int v15; // [esp+14h] [ebp+4h]
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+14h] [ebp+4h]

  GameClient::FSystemPart::operator=(a2);
  std::string::operator=(this + 272, a2 + 272);
  *(_DWORD *)(this + 300) = *(_DWORD *)(a2 + 300);
  *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 304);
  *(_DWORD *)(this + 308) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(this + 312) = *(_DWORD *)(a2 + 312);
  *(_DWORD *)(this + 316) = *(_DWORD *)(a2 + 316);
  *(_DWORD *)(this + 320) = *(_DWORD *)(a2 + 320);
  *(float *)(this + 324) = *(float *)(a2 + 324);
  *(_DWORD *)(this + 328) = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(this + 332) = *(_BYTE *)(a2 + 332);
  *(_BYTE *)(this + 333) = *(_BYTE *)(a2 + 333);
  *(_DWORD *)(this + 336) = *(_DWORD *)(a2 + 336);
  *(_DWORD *)(this + 340) = *(_DWORD *)(a2 + 340);
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(this + 348) = *(_DWORD *)(a2 + 348);
  *(float *)(this + 352) = *(float *)(a2 + 352);
  *(float *)(this + 356) = *(float *)(a2 + 356);
  std::string::operator=(this + 360, a2 + 360);
  std::string::operator=(this + 388, a2 + 388);
  std::string::operator=(this + 416, a2 + 416);
  sub_1000D5C1(a2 + 444);
  sub_1000D5C1(a2 + 460);
  std::string::operator=(this + 476, a2 + 476);
  std::string::operator=(this + 504, a2 + 504);
  *(float *)(this + 532) = *(float *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  std::string::operator=(this + 540, a2 + 540);
  std::string::operator=(this + 568, a2 + 568);
  std::string::operator=(this + 596, a2 + 596);
  sub_1000D5C1(a2 + 624);
  sub_1000D5C1(a2 + 640);
  sub_1000D5C1(a2 + 656);
  sub_1000D5C1(a2 + 672);
  sub_1000D5C1(a2 + 688);
  v4 = this + 704;
  v5 = a2 - this;
  v13 = 5;
  do
  {
    std::string::operator=(v4, v5 + v4);
    v4 += 28;
    --v13;
  }
  while ( v13 );
  v6 = this + 844;
  v14 = 5;
  do
  {
    std::string::operator=(v6, v5 + v6);
    v6 += 28;
    --v14;
  }
  while ( v14 );
  v7 = this + 984;
  v15 = 5;
  do
  {
    std::string::operator=(v7, v5 + v7);
    v7 += 28;
    --v15;
  }
  while ( v15 );
  v8 = this + 1124;
  v16 = 9;
  do
  {
    std::string::operator=(v8, v5 + v8);
    v8 += 28;
    --v16;
  }
  while ( v16 );
  v9 = this + 1376;
  v17 = 9;
  do
  {
    std::string::operator=(v9, v5 + v9);
    v9 += 28;
    --v17;
  }
  while ( v17 );
  *(_BYTE *)(this + 1628) = *(_BYTE *)(a2 + 1628);
  sub_1000D5C1(a2 + 1632);
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
  v10 = (float *)(a2 + 1968);
  *(float *)(this + 1964) = *(float *)(a2 + 1964);
  std::string::operator=(this + 1968, a2 + 1968);
  std::string::operator=(this + 1996, a2 + 1996);
  *(_DWORD *)(this + 2024) = *(_DWORD *)(a2 + 2024);
  *(float *)(this + 2028) = *(float *)(a2 + 2028);
  *(_BYTE *)(this + 2032) = *(_BYTE *)(a2 + 2032);
  v11 = a2 + 2048;
  *(float *)(this + 2036) = v10[17];
  *(float *)(this + 2040) = v10[18];
  *(float *)(this + 2044) = v10[19];
  std::string::operator=(this + 2048, v11);
  *(float *)(this + 2076) = *(float *)(v11 + 28);
  result = this;
  *(float *)(this + 2080) = *(float *)(v11 + 32);
  return result;
}
