/*
 * func-name: ??4CREComboBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x10072a10
 * callers: none
 * callees: 0x10071a20, 0x10071e70
 */

int __thiscall CREComboBox::operator=(int this, int a2)
{
  CREButton::operator=(this, a2);
  *(_DWORD *)(this + 816) = *(_DWORD *)(a2 + 816);
  *(_DWORD *)(this + 820) = *(_DWORD *)(a2 + 820);
  *(_DWORD *)(this + 824) = *(_DWORD *)(a2 + 824);
  CREScrollBar::operator=(this + 828, a2 + 828);
  *(_DWORD *)(this + 1444) = *(_DWORD *)(a2 + 1444);
  *(_BYTE *)(this + 1448) = *(_BYTE *)(a2 + 1448);
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
  *(_DWORD *)(this + 1520) = *(_DWORD *)(a2 + 1520);
  *(_DWORD *)(this + 1524) = *(_DWORD *)(a2 + 1524);
  *(_DWORD *)(this + 1528) = *(_DWORD *)(a2 + 1528);
  *(_DWORD *)(this + 1532) = *(_DWORD *)(a2 + 1532);
  qmemcpy((void *)(this + 1536), (const void *)(a2 + 1536), 0x54u);
  qmemcpy((void *)(this + 1620), (const void *)(a2 + 1620), 0x50u);
  return this;
}
