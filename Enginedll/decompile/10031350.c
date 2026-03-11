/*
 * func-name: ??4Model@@QAEAAV0@ABV0@@Z
 * func-address: 0x10031350
 * callers: 0x1005e1c0, 0x100f5330
 * callees: 0x10025c40, 0x1002d2e0, 0x1002f5f0
 */

int __thiscall Model::operator=(int this, int a2)
{
  StaticModel::operator=(this, a2);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  sub_10025C40(this + 380, a2 + 380);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  *(_DWORD *)(this + 400) = *(_DWORD *)(a2 + 400);
  *(_BYTE *)(this + 404) = *(_BYTE *)(a2 + 404);
  if ( this + 408 != a2 + 408 )
    sub_1002F5F0((_DWORD *)(this + 408), a2 + 408);
  *(_DWORD *)(this + 448) = *(_DWORD *)(a2 + 448);
  *(_DWORD *)(this + 452) = *(_DWORD *)(a2 + 452);
  return this;
}
