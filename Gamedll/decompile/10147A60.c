/*
 * func-name: ??4Booty@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10147a60
 * callers: 0x1000f240
 * callees: 0x1000f088, 0x1001040b
 */

int __thiscall GameClient::Booty::operator=(int this, int a2)
{
  GameClient::WorldObject::operator=(a2);
  sub_1001040B(a2 + 148);
  *(float *)(this + 164) = *(float *)(a2 + 164);
  *(float *)(this + 168) = *(float *)(a2 + 168);
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172);
  *(_BYTE *)(this + 173) = *(_BYTE *)(a2 + 173);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  return this;
}
