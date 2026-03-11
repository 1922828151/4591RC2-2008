/*
 * func-name: ??4CREPropertiesList@@QAEAAV0@ABV0@@Z
 * func-address: 0x10072640
 * callers: none
 * callees: 0x10071450, 0x10071e70
 */

int __thiscall CREPropertiesList::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_DWORD *)(this + 552) = *(_DWORD *)(a2 + 552);
  *(_DWORD *)(this + 556) = *(_DWORD *)(a2 + 556);
  *(_DWORD *)(this + 560) = *(_DWORD *)(a2 + 560);
  CREScrollBar::operator=(this + 564, a2 + 564);
  *(_DWORD *)(this + 1180) = *(_DWORD *)(a2 + 1180);
  *(_DWORD *)(this + 1184) = *(_DWORD *)(a2 + 1184);
  *(_DWORD *)(this + 1188) = *(_DWORD *)(a2 + 1188);
  *(_DWORD *)(this + 1192) = *(_DWORD *)(a2 + 1192);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  *(_DWORD *)(this + 1200) = *(_DWORD *)(a2 + 1200);
  *(_DWORD *)(this + 1204) = *(_DWORD *)(a2 + 1204);
  *(_BYTE *)(this + 1208) = *(_BYTE *)(a2 + 1208);
  *(_DWORD *)(this + 1212) = *(_DWORD *)(a2 + 1212);
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(this + 1224) = *(_DWORD *)(a2 + 1224);
  *(_DWORD *)(this + 1228) = *(_DWORD *)(a2 + 1228);
  return this;
}
