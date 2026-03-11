/*
 * func-name: ??4WorldObject@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10059000
 * callers: 0x1000f088
 * callees: 0x10002f36
 */

int __thiscall GameClient::WorldObject::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  qmemcpy((void *)(this + 36), (const void *)(a2 + 36), 0x41u);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_BYTE *)(this + 116) = *(_BYTE *)(a2 + 116);
  sub_10002F36(a2 + 120);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  return this;
}
