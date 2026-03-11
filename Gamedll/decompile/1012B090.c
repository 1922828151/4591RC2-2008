/*
 * func-name: ??4HookEstablishment@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012b090
 * callers: 0x10001f78
 * callees: none
 */

int __thiscall HookEstablishment::operator=(int this, int a2)
{
  void (__thiscall *v3)(int, int); // edx

  Actor::operator=(a2);
  std::string::operator=(this + 1052, a2 + 1052);
  std::string::operator=(this + 1080, a2 + 1080);
  std::string::operator=(this + 1108, a2 + 1108);
  std::string::operator=(this + 1136, a2 + 1136);
  v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)(this + 1168) + 4);
  *(_DWORD *)(this + 1164) = *(_DWORD *)(a2 + 1164);
  v3(this + 1168, a2 + 1168);
  std::string::operator=(this + 1212, a2 + 1212);
  std::string::operator=(this + 1240, a2 + 1240);
  *(_DWORD *)(this + 1268) = *(_DWORD *)(a2 + 1268);
  *(_DWORD *)(this + 1272) = *(_DWORD *)(a2 + 1272);
  *(_DWORD *)(this + 1276) = *(_DWORD *)(a2 + 1276);
  std::vector<Actor *>::operator=(this + 1280, a2 + 1280);
  *(_DWORD *)(this + 1296) = *(_DWORD *)(a2 + 1296);
  std::string::operator=(this + 1300, a2 + 1300);
  std::string::operator=(this + 1328, a2 + 1328);
  *(_DWORD *)(this + 1356) = *(_DWORD *)(a2 + 1356);
  std::string::operator=(this + 1360, a2 + 1360);
  std::string::operator=(this + 1388, a2 + 1388);
  *(_DWORD *)(this + 1416) = *(_DWORD *)(a2 + 1416);
  *(float *)(this + 1420) = *(float *)(a2 + 1420);
  *(float *)(this + 1424) = *(float *)(a2 + 1424);
  *(_DWORD *)(this + 1428) = *(_DWORD *)(a2 + 1428);
  *(_DWORD *)(this + 1432) = *(_DWORD *)(a2 + 1432);
  *(_DWORD *)(this + 1436) = *(_DWORD *)(a2 + 1436);
  return this;
}
