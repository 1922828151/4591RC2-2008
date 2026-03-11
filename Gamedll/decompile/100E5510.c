/*
 * func-name: ??4SampleWeapon@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100e5510
 * callers: 0x10014042
 * callees: none
 */

int __thiscall SampleWeapon::operator=(int this, int a2)
{
  Actor::operator=(a2);
  *(_DWORD *)(this + 1052) = *(_DWORD *)(a2 + 1052);
  *(_DWORD *)(this + 1056) = *(_DWORD *)(a2 + 1056);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  *(float *)(this + 1076) = *(float *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  *(_DWORD *)(this + 1084) = *(_DWORD *)(a2 + 1084);
  *(_DWORD *)(this + 1088) = *(_DWORD *)(a2 + 1088);
  *(_DWORD *)(this + 1092) = *(_DWORD *)(a2 + 1092);
  *(_DWORD *)(this + 1096) = *(_DWORD *)(a2 + 1096);
  *(_DWORD *)(this + 1100) = *(_DWORD *)(a2 + 1100);
  return this;
}
