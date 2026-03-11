/*
 * func-name: ??4IndoorVolume@@QAEAAV0@ABV0@@Z
 * func-address: 0x10052d70
 * callers: none
 * callees: 0x1002dd40
 */

int __thiscall IndoorVolume::operator=(int this, int a2)
{
  int result; // eax

  Actor::operator=(this, a2);
  *(_DWORD *)(this + 1056) = *(_DWORD *)(a2 + 1056);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  *(_DWORD *)(this + 1088) = *(_DWORD *)(a2 + 1088);
  *(_BYTE *)(this + 1092) = *(_BYTE *)(a2 + 1092);
  *(_DWORD *)(this + 1096) = *(_DWORD *)(a2 + 1096);
  *(_DWORD *)(this + 1100) = *(_DWORD *)(a2 + 1100);
  *(float *)(this + 1104) = *(float *)(a2 + 1104);
  *(_DWORD *)(this + 1108) = *(_DWORD *)(a2 + 1108);
  *(_DWORD *)(this + 1112) = *(_DWORD *)(a2 + 1112);
  *(_DWORD *)(this + 1116) = *(_DWORD *)(a2 + 1116);
  *(float *)(this + 1120) = *(float *)(a2 + 1120);
  result = this;
  *(float *)(this + 1124) = *(float *)(a2 + 1124);
  return result;
}
