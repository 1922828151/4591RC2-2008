/*
 * func-name: ??4Mesh@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002da40
 * callers: none
 * callees: 0x1000ce20, 0x100220e0, 0x10025190, 0x10025e00, 0x1002bc70, 0x1002d760
 */

int __thiscall Mesh::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(float *)(this + 20) = *(float *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  sub_100220E0(this + 36, a2 + 36);
  std::vector<BBox>::operator=(this + 52, a2 + 52);
  std::vector<EditorVar>::operator=(this + 68, a2 + 68);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  PRTSettings::operator=((char *)(this + 120), (char *)(a2 + 120));
  *(_DWORD *)(this + 2412) = *(_DWORD *)(a2 + 2412);
  *(_BYTE *)(this + 2416) = *(_BYTE *)(a2 + 2416);
  *(_BYTE *)(this + 2417) = *(_BYTE *)(a2 + 2417);
  *(_DWORD *)(this + 2424) = *(_DWORD *)(a2 + 2424);
  *(_DWORD *)(this + 2428) = *(_DWORD *)(a2 + 2428);
  *(_DWORD *)(this + 2432) = *(_DWORD *)(a2 + 2432);
  *(_DWORD *)(this + 2436) = *(_DWORD *)(a2 + 2436);
  *(_DWORD *)(this + 2440) = *(_DWORD *)(a2 + 2440);
  *(_DWORD *)(this + 2444) = *(_DWORD *)(a2 + 2444);
  *(_DWORD *)(this + 2448) = *(_DWORD *)(a2 + 2448);
  *(_DWORD *)(this + 2452) = *(_DWORD *)(a2 + 2452);
  *(_DWORD *)(this + 2456) = *(_DWORD *)(a2 + 2456);
  std::vector<Material *>::operator=(this + 2460, a2 + 2460);
  std::vector<AttributeRange>::operator=(this + 2476, a2 + 2476);
  *(float *)(this + 2492) = *(float *)(a2 + 2492);
  *(_DWORD *)(this + 2496) = *(_DWORD *)(a2 + 2496);
  *(_DWORD *)(this + 2500) = *(_DWORD *)(a2 + 2500);
  *(_DWORD *)(this + 2504) = *(_DWORD *)(a2 + 2504);
  *(_DWORD *)(this + 2508) = *(_DWORD *)(a2 + 2508);
  *(_DWORD *)(this + 2512) = *(_DWORD *)(a2 + 2512);
  *(_DWORD *)(this + 2516) = *(_DWORD *)(a2 + 2516);
  *(_DWORD *)(this + 2520) = *(_DWORD *)(a2 + 2520);
  *(_BYTE *)(this + 2524) = *(_BYTE *)(a2 + 2524);
  return this;
}
