/*
 * func-name: ??4Prefab@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002e3c0
 * callers: 0x1005d7d0, 0x1005d810, 0x1005ed30, 0x10091360, 0x1009ad00
 * callees: 0x10023440, 0x1002dd40
 */

int __thiscall Prefab::operator=(int this, int a2)
{
  Actor::operator=(this, a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  *(_BYTE *)(this + 1053) = *(_BYTE *)(a2 + 1053);
  *(float *)(this + 1056) = *(float *)(a2 + 1056);
  *(float *)(this + 1060) = *(float *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(float *)(this + 1068) = *(float *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_BYTE *)(this + 1080) = *(_BYTE *)(a2 + 1080);
  *(float *)(this + 1084) = *(float *)(a2 + 1084);
  qmemcpy((void *)(this + 1088), (const void *)(a2 + 1088), 0x40u);
  sub_10023440(this + 1152, a2 + 1152);
  *(_DWORD *)(this + 1168) = *(_DWORD *)(a2 + 1168);
  return this;
}
