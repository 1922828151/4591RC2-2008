/*
 * func-name: ??4Light@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002e5e0
 * callers: none
 * callees: 0x1000d550, 0x1000f220, 0x10020000, 0x100228a0, 0x10026b60, 0x1002dd40
 */

int __thiscall Light::operator=(int this, int a2)
{
  Actor::operator=(this, a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  *(_BYTE *)(this + 1053) = *(_BYTE *)(a2 + 1053);
  *(_BYTE *)(this + 1054) = *(_BYTE *)(a2 + 1054);
  *(_DWORD *)(this + 1056) = *(_DWORD *)(a2 + 1056);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(float *)(this + 1068) = *(float *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  qmemcpy((void *)(this + 1076), (const void *)(a2 + 1076), 0x48u);
  sub_10026B60(this + 1148, a2 + 1148);
  sub_100228A0(this + 1164, a2 + 1164);
  *(float *)(this + 1180) = *(float *)(a2 + 1180);
  *(float *)(this + 1184) = *(float *)(a2 + 1184);
  *(_BYTE *)(this + 1188) = *(_BYTE *)(a2 + 1188);
  *(_BYTE *)(this + 1189) = *(_BYTE *)(a2 + 1189);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  *(_DWORD *)(this + 1200) = *(_DWORD *)(a2 + 1200);
  *(_DWORD *)(this + 1204) = *(_DWORD *)(a2 + 1204);
  *(_DWORD *)(this + 1208) = *(_DWORD *)(a2 + 1208);
  *(_DWORD *)(this + 1212) = *(_DWORD *)(a2 + 1212);
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(this + 1224) = *(_DWORD *)(a2 + 1224);
  *(_DWORD *)(this + 1228) = *(_DWORD *)(a2 + 1228);
  *(_DWORD *)(this + 1232) = *(_DWORD *)(a2 + 1232);
  *(_DWORD *)(this + 1236) = *(_DWORD *)(a2 + 1236);
  *(_DWORD *)(this + 1240) = *(_DWORD *)(a2 + 1240);
  std::vector<Model *>::operator=(this + 1244, a2 + 1244);
  *(_DWORD *)(this + 1260) = *(_DWORD *)(a2 + 1260);
  Texture::operator=(this + 1264, a2 + 1264);
  *(_BYTE *)(this + 1420) = *(_BYTE *)(a2 + 1420);
  *(_BYTE *)(this + 1421) = *(_BYTE *)(a2 + 1421);
  *(_BYTE *)(this + 1422) = *(_BYTE *)(a2 + 1422);
  *(_DWORD *)(this + 1424) = *(_DWORD *)(a2 + 1424);
  *(_DWORD *)(this + 1428) = *(_DWORD *)(a2 + 1428);
  *(_DWORD *)(this + 1432) = *(_DWORD *)(a2 + 1432);
  std::vector<Actor *>::operator=(this + 1436, a2 + 1436);
  *(_BYTE *)(this + 1452) = *(_BYTE *)(a2 + 1452);
  return this;
}
