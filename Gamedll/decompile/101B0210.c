/*
 * func-name: ??4FSuspendVehicle@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101b0210
 * callers: 0x1000a0ba
 * callees: 0x1000d5c1, 0x10011400, 0x10018836, 0x1001a1fe
 */

int __thiscall GameClient::FSuspendVehicle::operator=(int this, int a2)
{
  GameClient::FControlledEstab::operator=(a2);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  *(_DWORD *)(this + 1088) = *(_DWORD *)(a2 + 1088);
  *(_DWORD *)(this + 1092) = *(_DWORD *)(a2 + 1092);
  *(float *)(this + 1096) = *(float *)(a2 + 1096);
  *(float *)(this + 1100) = *(float *)(a2 + 1100);
  *(float *)(this + 1104) = *(float *)(a2 + 1104);
  *(float *)(this + 1108) = *(float *)(a2 + 1108);
  *(float *)(this + 1112) = *(float *)(a2 + 1112);
  *(_DWORD *)(this + 1116) = *(_DWORD *)(a2 + 1116);
  *(_DWORD *)(this + 1120) = *(_DWORD *)(a2 + 1120);
  *(_DWORD *)(this + 1124) = *(_DWORD *)(a2 + 1124);
  *(float *)(this + 1128) = *(float *)(a2 + 1128);
  *(float *)(this + 1132) = *(float *)(a2 + 1132);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  sub_1000D5C1(a2 + 1140);
  sub_10011400(a2 + 1156);
  sub_1000D5C1(a2 + 1172);
  sub_1000D5C1(a2 + 1188);
  sub_10018836(a2 + 1204);
  *(float *)(this + 1220) = *(float *)(a2 + 1220);
  *(float *)(this + 1224) = *(float *)(a2 + 1224);
  *(float *)(this + 1228) = *(float *)(a2 + 1228);
  *(float *)(this + 1232) = *(float *)(a2 + 1232);
  sub_1000D5C1(a2 + 1236);
  sub_1000D5C1(a2 + 1252);
  *(_DWORD *)(this + 1268) = *(_DWORD *)(a2 + 1268);
  return this;
}
