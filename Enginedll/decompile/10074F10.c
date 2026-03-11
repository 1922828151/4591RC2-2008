/*
 * func-name: ??4TextureCamera@@QAEAAV0@ABV0@@Z
 * func-address: 0x10074f10
 * callers: none
 * callees: 0x10013320, 0x1002dd40, 0x100306d0
 */

int __thiscall TextureCamera::operator=(int this, int a2)
{
  Actor::operator=(this, a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  Camera::operator=(this + 1088, a2 + 1088);
  *(_DWORD *)(this + 1508) = *(_DWORD *)(a2 + 1508);
  *(_DWORD *)(this + 1512) = *(_DWORD *)(a2 + 1512);
  *(_DWORD *)(this + 1516) = *(_DWORD *)(a2 + 1516);
  *(_DWORD *)(this + 1520) = *(_DWORD *)(a2 + 1520);
  *(_DWORD *)(this + 1524) = *(_DWORD *)(a2 + 1524);
  *(float *)(this + 1528) = *(float *)(a2 + 1528);
  std::string::operator=(this + 1532, a2 + 1532);
  std::string::operator=(this + 1560, a2 + 1560);
  *(_DWORD *)(this + 1588) = *(_DWORD *)(a2 + 1588);
  *(float *)(this + 1592) = *(float *)(a2 + 1592);
  *(float *)(this + 1596) = *(float *)(a2 + 1596);
  *(float *)(this + 1600) = *(float *)(a2 + 1600);
  *(float *)(this + 1604) = *(float *)(a2 + 1604);
  World::operator=(this + 1608, a2 + 1608);
  *(_BYTE *)(this + 5404) = *(_BYTE *)(a2 + 5404);
  return this;
}
