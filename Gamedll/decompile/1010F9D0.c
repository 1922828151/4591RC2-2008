/*
 * func-name: ??4CombinActor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1010f9d0
 * callers: 0x1000f588
 * callees: 0x10004d31, 0x100138f9, 0x100141c8, 0x10015384, 0x1001a398
 */

int __thiscall GameClient::CombinActor::operator=(int this, int a2)
{
  GameClient::AdapterActor::operator=(a2);
  if ( this + 1272 != a2 + 1272 )
    sub_10015384(a2 + 1272);
  if ( this + 1312 != a2 + 1312 )
    sub_100138F9(a2 + 1312);
  sub_10004D31(a2 + 1352);
  sub_100141C8(a2 + 1368);
  *(_DWORD *)(this + 1384) = *(_DWORD *)(a2 + 1384);
  *(_BYTE *)(this + 1388) = *(_BYTE *)(a2 + 1388);
  *(_BYTE *)(this + 1389) = *(_BYTE *)(a2 + 1389);
  return this;
}
