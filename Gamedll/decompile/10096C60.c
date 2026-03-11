/*
 * func-name: ??4Effect_Precipitation@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10096c60
 * callers: 0x10012e63
 * callees: 0x100022fc, 0x1000871a
 */

int __thiscall Effect_Precipitation::operator=(int this, int a2)
{
  int result; // eax

  Effect_ParticleSystem::operator=(a2);
  sub_100022FC(a2 + 1280);
  *(_DWORD *)(this + 1296) = *(_DWORD *)(a2 + 1296);
  std::string::operator=(this + 1300, a2 + 1300);
  std::string::operator=(this + 1328, a2 + 1328);
  *(_BYTE *)(this + 1356) = *(_BYTE *)(a2 + 1356);
  *(float *)(this + 1360) = *(float *)(a2 + 1360);
  *(_DWORD *)(this + 1364) = *(_DWORD *)(a2 + 1364);
  *(_BYTE *)(this + 1368) = *(_BYTE *)(a2 + 1368);
  *(float *)(this + 1372) = *(float *)(a2 + 1372);
  *(float *)(this + 1376) = *(float *)(a2 + 1376);
  *(_DWORD *)(this + 1380) = *(_DWORD *)(a2 + 1380);
  *(_DWORD *)(this + 1384) = *(_DWORD *)(a2 + 1384);
  *(_DWORD *)(this + 1388) = *(_DWORD *)(a2 + 1388);
  *(float *)(this + 1392) = *(float *)(a2 + 1392);
  *(_DWORD *)(this + 1396) = *(_DWORD *)(a2 + 1396);
  *(_DWORD *)(this + 1400) = *(_DWORD *)(a2 + 1400);
  *(_BYTE *)(this + 1404) = *(_BYTE *)(a2 + 1404);
  result = this;
  *(float *)(this + 1408) = *(float *)(a2 + 1408);
  *(float *)(this + 1412) = *(float *)(a2 + 1412);
  return result;
}
