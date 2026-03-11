/*
 * func-name: ??4Effect_Base@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1007e310
 * callers: 0x10015424
 * callees: none
 */

int __thiscall Effect_Base::operator=(int this, int a2)
{
  int result; // eax

  Actor::operator=(a2);
  *(_DWORD *)(this + 1052) = *(_DWORD *)(a2 + 1052);
  *(float *)(this + 1056) = *(float *)(a2 + 1056);
  *(float *)(this + 1060) = *(float *)(a2 + 1060);
  *(_BYTE *)(this + 1064) = *(_BYTE *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  *(_DWORD *)(this + 1088) = *(_DWORD *)(a2 + 1088);
  *(_DWORD *)(this + 1092) = *(_DWORD *)(a2 + 1092);
  *(_DWORD *)(this + 1096) = *(_DWORD *)(a2 + 1096);
  *(_DWORD *)(this + 1100) = *(_DWORD *)(a2 + 1100);
  *(_DWORD *)(this + 1104) = *(_DWORD *)(a2 + 1104);
  *(_DWORD *)(this + 1108) = *(_DWORD *)(a2 + 1108);
  result = this;
  *(float *)(this + 1112) = *(float *)(a2 + 1112);
  *(float *)(this + 1116) = *(float *)(a2 + 1116);
  *(float *)(this + 1120) = *(float *)(a2 + 1120);
  *(float *)(this + 1124) = *(float *)(a2 + 1124);
  *(float *)(this + 1128) = *(float *)(a2 + 1128);
  *(_BYTE *)(this + 1132) = *(_BYTE *)(a2 + 1132);
  *(_BYTE *)(this + 1133) = *(_BYTE *)(a2 + 1133);
  return result;
}
