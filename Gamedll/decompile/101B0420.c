/*
 * func-name: ??4FAircraftVehicle@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101b0420
 * callers: 0x1000f2b3
 * callees: 0x1001a1fe
 */

int __thiscall GameClient::FAircraftVehicle::operator=(int this, int a2)
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
  *(float *)(this + 1136) = *(float *)(a2 + 1136);
  *(float *)(this + 1140) = *(float *)(a2 + 1140);
  *(float *)(this + 1144) = *(float *)(a2 + 1144);
  *(float *)(this + 1148) = *(float *)(a2 + 1148);
  *(float *)(this + 1152) = *(float *)(a2 + 1152);
  *(float *)(this + 1156) = *(float *)(a2 + 1156);
  *(float *)(this + 1160) = *(float *)(a2 + 1160);
  *(float *)(this + 1164) = *(float *)(a2 + 1164);
  *(float *)(this + 1168) = *(float *)(a2 + 1168);
  *(float *)(this + 1172) = *(float *)(a2 + 1172);
  *(float *)(this + 1176) = *(float *)(a2 + 1176);
  *(float *)(this + 1180) = *(float *)(a2 + 1180);
  *(float *)(this + 1184) = *(float *)(a2 + 1184);
  *(_BYTE *)(this + 1188) = *(_BYTE *)(a2 + 1188);
  *(float *)(this + 1192) = *(float *)(a2 + 1192);
  *(float *)(this + 1196) = *(float *)(a2 + 1196);
  *(float *)(this + 1200) = *(float *)(a2 + 1200);
  *(float *)(this + 1204) = *(float *)(a2 + 1204);
  std::string::operator=(this + 1208, a2 + 1208);
  std::string::operator=(this + 1236, a2 + 1236);
  *(_DWORD *)(this + 1264) = *(_DWORD *)(a2 + 1264);
  return this;
}
