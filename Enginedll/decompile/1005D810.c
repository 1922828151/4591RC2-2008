/*
 * func-name: ??4TerrainNode@@QAEAAV0@ABV0@@Z
 * func-address: 0x1005d810
 * callers: none
 * callees: 0x1002e3c0, 0x10059790
 */

_DWORD *__thiscall TerrainNode::operator=(_DWORD *this, int a2)
{
  Prefab::operator=((int)this, a2);
  this[293] = *(_DWORD *)(a2 + 1172);
  this[294] = *(_DWORD *)(a2 + 1176);
  this[295] = *(_DWORD *)(a2 + 1180);
  qmemcpy(this + 296, (const void *)(a2 + 1184), 0x30u);
  if ( this + 308 != (_DWORD *)(a2 + 1232) )
    sub_10059790((int)(this + 308), a2 + 1232, **(_DWORD ***)(a2 + 1236), a2 + 1232, *(_DWORD **)(a2 + 1236), a2);
  if ( this + 311 != (_DWORD *)(a2 + 1244) )
    sub_10059790((int)(this + 311), a2 + 1244, **(_DWORD ***)(a2 + 1248), a2 + 1244, *(_DWORD **)(a2 + 1248), a2);
  this[314] = *(_DWORD *)(a2 + 1256);
  this[315] = *(_DWORD *)(a2 + 1260);
  this[316] = *(_DWORD *)(a2 + 1264);
  return this;
}
