/*
 * func-name: ??4C3DModel@@QAEAAV0@ABV0@@Z
 * func-address: 0x10074310
 * callers: none
 * callees: 0x10013320, 0x10071450
 */

int __thiscall C3DModel::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  Camera::operator=(this + 536, a2 + 536);
  std::string::operator=(this + 956, a2 + 956);
  std::string::operator=(this + 984, a2 + 984);
  *(_DWORD *)(this + 1012) = *(_DWORD *)(a2 + 1012);
  *(_DWORD *)(this + 1016) = *(_DWORD *)(a2 + 1016);
  *(_DWORD *)(this + 1020) = *(_DWORD *)(a2 + 1020);
  *(_DWORD *)(this + 1024) = *(_DWORD *)(a2 + 1024);
  *(_DWORD *)(this + 1028) = *(_DWORD *)(a2 + 1028);
  *(_DWORD *)(this + 1032) = *(_DWORD *)(a2 + 1032);
  *(_DWORD *)(this + 1036) = *(_DWORD *)(a2 + 1036);
  *(_DWORD *)(this + 1040) = *(_DWORD *)(a2 + 1040);
  *(_DWORD *)(this + 1044) = *(_DWORD *)(a2 + 1044);
  *(_BYTE *)(this + 1048) = *(_BYTE *)(a2 + 1048);
  *(float *)(this + 1052) = *(float *)(a2 + 1052);
  *(_BYTE *)(this + 1056) = *(_BYTE *)(a2 + 1056);
  *(_BYTE *)(this + 1057) = *(_BYTE *)(a2 + 1057);
  *(_BYTE *)(this + 1058) = *(_BYTE *)(a2 + 1058);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  *(float *)(this + 1072) = *(float *)(a2 + 1072);
  *(float *)(this + 1076) = *(float *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  return this;
}
