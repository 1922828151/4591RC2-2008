/*
 * func-name: ??4HookEsbTransport@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012c400
 * callers: 0x1000ef66
 * callees: none
 */

int __thiscall HookEsbTransport::operator=(int this, int a2)
{
  Actor::operator=(a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  std::string::operator=(this + 1056, a2 + 1056);
  std::string::operator=(this + 1084, a2 + 1084);
  std::string::operator=(this + 1112, a2 + 1112);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  *(_DWORD *)(this + 1144) = *(_DWORD *)(a2 + 1144);
  std::string::operator=(this + 1148, a2 + 1148);
  *(_DWORD *)(this + 1176) = *(_DWORD *)(a2 + 1176);
  *(_DWORD *)(this + 1180) = *(_DWORD *)(a2 + 1180);
  *(_DWORD *)(this + 1184) = *(_DWORD *)(a2 + 1184);
  *(_DWORD *)(this + 1188) = *(_DWORD *)(a2 + 1188);
  *(_DWORD *)(this + 1192) = *(_DWORD *)(a2 + 1192);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  *(float *)(this + 1200) = *(float *)(a2 + 1200);
  *(_DWORD *)(this + 1204) = *(_DWORD *)(a2 + 1204);
  *(_DWORD *)(this + 1208) = *(_DWORD *)(a2 + 1208);
  *(_DWORD *)(this + 1212) = *(_DWORD *)(a2 + 1212);
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(this + 1224) = *(_DWORD *)(a2 + 1224);
  *(_DWORD *)(this + 1228) = *(_DWORD *)(a2 + 1228);
  *(float *)(this + 1232) = *(float *)(a2 + 1232);
  *(_DWORD *)(this + 1236) = *(_DWORD *)(a2 + 1236);
  *(_DWORD *)(this + 1240) = *(_DWORD *)(a2 + 1240);
  *(_DWORD *)(this + 1244) = *(_DWORD *)(a2 + 1244);
  *(_DWORD *)(this + 1248) = *(_DWORD *)(a2 + 1248);
  *(_DWORD *)(this + 1252) = *(_DWORD *)(a2 + 1252);
  *(_DWORD *)(this + 1256) = *(_DWORD *)(a2 + 1256);
  *(_DWORD *)(this + 1260) = *(_DWORD *)(a2 + 1260);
  *(float *)(this + 1264) = *(float *)(a2 + 1264);
  *(_DWORD *)(this + 1268) = *(_DWORD *)(a2 + 1268);
  return this;
}
