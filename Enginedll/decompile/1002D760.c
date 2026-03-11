/*
 * func-name: ??4PRTSettings@@QAEAAU0@ABU0@@Z
 * func-address: 0x1002d760
 * callers: 0x1002da40, 0x100306d0, 0x10037b30, 0x1007d280
 * callees: 0x10011510, 0x1002bc70
 */

char *__thiscall PRTSettings::operator=(char *this, char *a2)
{
  _WORD *v3; // ecx
  int v4; // eax
  int v5; // edx
  _WORD *v6; // ecx
  int v7; // edx
  _WORD *v8; // ecx
  int v9; // edx
  _WORD *v10; // ecx
  int v11; // edx

  *this = *a2;
  v3 = this + 1;
  v4 = a2 - this;
  v5 = 260;
  do
  {
    *v3 = *(_WORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = this + 521;
  v7 = 260;
  do
  {
    *v6 = *(_WORD *)((char *)v6 + v4);
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = this + 1041;
  v9 = 260;
  do
  {
    *v8 = *(_WORD *)((char *)v8 + v4);
    ++v8;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)(this + 1561) = *(_DWORD *)(a2 + 1561);
  *(_DWORD *)(this + 1565) = *(_DWORD *)(a2 + 1565);
  *(_DWORD *)(this + 1569) = *(_DWORD *)(a2 + 1569);
  *(_DWORD *)(this + 1573) = *(_DWORD *)(a2 + 1573);
  this[1577] = a2[1577];
  *(float *)(this + 1578) = *(float *)(a2 + 1578);
  this[1582] = a2[1582];
  *(_DWORD *)(this + 1583) = *(_DWORD *)(a2 + 1583);
  *(_DWORD *)(this + 1587) = *(_DWORD *)(a2 + 1587);
  *(_DWORD *)(this + 1591) = *(_DWORD *)(a2 + 1591);
  *(_DWORD *)(this + 1595) = *(_DWORD *)(a2 + 1595);
  *(_DWORD *)(this + 1599) = *(_DWORD *)(a2 + 1599);
  *(_DWORD *)(this + 1603) = *(_DWORD *)(a2 + 1603);
  *(_DWORD *)(this + 1607) = *(_DWORD *)(a2 + 1607);
  *(_DWORD *)(this + 1611) = *(_DWORD *)(a2 + 1611);
  *(_DWORD *)(this + 1615) = *(_DWORD *)(a2 + 1615);
  *(_DWORD *)(this + 1619) = *(_DWORD *)(a2 + 1619);
  *(_DWORD *)(this + 1623) = *(_DWORD *)(a2 + 1623);
  *(_DWORD *)(this + 1627) = *(_DWORD *)(a2 + 1627);
  *(_DWORD *)(this + 1631) = *(_DWORD *)(a2 + 1631);
  *(float *)(this + 1635) = *(float *)(a2 + 1635);
  *(float *)(this + 1639) = *(float *)(a2 + 1639);
  this[1643] = a2[1643];
  this[1644] = a2[1644];
  *(float *)(this + 1645) = *(float *)(a2 + 1645);
  *(_DWORD *)(this + 1649) = *(_DWORD *)(a2 + 1649);
  this[1653] = a2[1653];
  *(float *)(this + 1654) = *(float *)(a2 + 1654);
  *(float *)(this + 1658) = *(float *)(a2 + 1658);
  *(_DWORD *)(this + 1662) = *(_DWORD *)(a2 + 1662);
  this[1666] = a2[1666];
  v10 = this + 1679;
  *(float *)(this + 1667) = *(float *)(a2 + 1667);
  *(float *)(this + 1671) = *(float *)(a2 + 1671);
  *(_DWORD *)(this + 1675) = *(_DWORD *)(a2 + 1675);
  v11 = 260;
  do
  {
    *v10 = *(_WORD *)((char *)v10 + v4);
    ++v10;
    --v11;
  }
  while ( v11 );
  this[2199] = a2[2199];
  this[2200] = a2[2200];
  this[2201] = a2[2201];
  *(_DWORD *)(this + 2202) = *(_DWORD *)(a2 + 2202);
  *(_DWORD *)(this + 2206) = *(_DWORD *)(a2 + 2206);
  this[2210] = a2[2210];
  *(_DWORD *)(this + 2211) = *(_DWORD *)(a2 + 2211);
  std::vector<EditorVar>::operator=((int)(this + 2215), (int)(a2 + 2215));
  sub_10011510((int)(this + 2231), (int)(a2 + 2231));
  sub_10011510((int)(this + 2247), (int)(a2 + 2247));
  std::string::operator=(this + 2263, a2 + 2263);
  return this;
}
