/*
 * func-name: ??4AnimationModal@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100a77b0
 * callers: 0x100128be
 * callees: 0x10002a77, 0x10010497, 0x1001327d, 0x10015424
 */

int __thiscall AnimationModal::operator=(int this, int a2)
{
  Effect_Base::operator=(a2);
  std::string::operator=(this + 1136, a2 + 1136);
  std::string::operator=(this + 1164, a2 + 1164);
  sub_10010497(a2 + 1192);
  sub_10002A77(a2 + 1208);
  *(_DWORD *)(this + 1224) = *(_DWORD *)(a2 + 1224);
  *(_BYTE *)(this + 1228) = *(_BYTE *)(a2 + 1228);
  *(_DWORD *)(this + 1232) = *(_DWORD *)(a2 + 1232);
  std::string::operator=(this + 1236, a2 + 1236);
  *(float *)(this + 1264) = *(float *)(a2 + 1264);
  *(float *)(this + 1268) = *(float *)(a2 + 1268);
  *(float *)(this + 1272) = *(float *)(a2 + 1272);
  *(float *)(this + 1276) = *(float *)(a2 + 1276);
  *(float *)(this + 1280) = *(float *)(a2 + 1280);
  std::string::operator=(this + 1284, a2 + 1284);
  std::string::operator=(this + 1312, a2 + 1312);
  std::string::operator=(this + 1340, a2 + 1340);
  std::string::operator=(this + 1368, a2 + 1368);
  sub_1001327D(a2 + 1396);
  return this;
}
