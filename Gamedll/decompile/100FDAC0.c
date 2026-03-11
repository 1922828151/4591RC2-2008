/*
 * func-name: ??4AdapterActor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100fdac0
 * callers: 0x1001a398
 * callees: 0x10007c89, 0x100083f0, 0x10015a9b, 0x100189c6
 */

int __thiscall GameClient::AdapterActor::operator=(int this, int a2)
{
  Actor::operator=(a2);
  std::string::operator=(this + 1052, a2 + 1052);
  std::string::operator=(this + 1080, a2 + 1080);
  *(_BYTE *)(this + 1108) = *(_BYTE *)(a2 + 1108);
  *(_DWORD *)(this + 1112) = *(_DWORD *)(a2 + 1112);
  *(float *)(this + 1116) = *(float *)(a2 + 1116);
  *(float *)(this + 1120) = *(float *)(a2 + 1120);
  *(_DWORD *)(this + 1124) = *(_DWORD *)(a2 + 1124);
  *(float *)(this + 1128) = *(float *)(a2 + 1128);
  *(float *)(this + 1132) = *(float *)(a2 + 1132);
  if ( this + 1136 != a2 + 1136 )
    sub_10007C89(a2 + 1136);
  if ( this + 1176 != a2 + 1176 )
    sub_100189C6(a2 + 1176);
  sub_10015A9B(a2 + 1216);
  *(_DWORD *)(this + 1232) = *(_DWORD *)(a2 + 1232);
  if ( this + 1236 != a2 + 1236 )
    sub_100083F0(a2 + 1236, **(_DWORD **)(a2 + 1240), a2 + 1236, *(_DWORD *)(a2 + 1240), a2);
  *(_DWORD *)(this + 1248) = *(_DWORD *)(a2 + 1248);
  *(_DWORD *)(this + 1252) = *(_DWORD *)(a2 + 1252);
  *(_DWORD *)(this + 1256) = *(_DWORD *)(a2 + 1256);
  *(_BYTE *)(this + 1260) = *(_BYTE *)(a2 + 1260);
  *(_BYTE *)(this + 1261) = *(_BYTE *)(a2 + 1261);
  *(float *)(this + 1264) = *(float *)(a2 + 1264);
  *(_DWORD *)(this + 1268) = *(_DWORD *)(a2 + 1268);
  return this;
}
