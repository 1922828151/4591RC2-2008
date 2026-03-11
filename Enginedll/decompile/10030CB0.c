/*
 * func-name: ??4Material@@QAEAAV0@ABV0@@Z
 * func-address: 0x10030cb0
 * callers: none
 * callees: 0x10011510, 0x10023610, 0x1002bc70, 0x1002f310, 0x1002f4a0
 */

int __thiscall Material::operator=(int this, int a2)
{
  sub_1002F310(this, (_DWORD *)a2);
  *(_BYTE *)(this + 16) = *(_BYTE *)(a2 + 16);
  sub_1002F4A0((int *)(this + 20), (int *)(a2 + 20));
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  std::string::operator=(this + 56, a2 + 56);
  std::vector<EditorVar>::operator=(this + 84, a2 + 84);
  sub_10011510(this + 100, a2 + 100);
  std::string::operator=(this + 116, a2 + 116);
  *(_BYTE *)(this + 144) = *(_BYTE *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  std::string::operator=(this + 156, a2 + 156);
  std::string::operator=(this + 184, a2 + 184);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  std::string::operator=(this + 220, a2 + 220);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_BYTE *)(this + 264) = *(_BYTE *)(a2 + 264);
  *(_BYTE *)(this + 265) = *(_BYTE *)(a2 + 265);
  *(_BYTE *)(this + 266) = *(_BYTE *)(a2 + 266);
  *(float *)(this + 268) = *(float *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  sub_10023610(this + 276, a2 + 276);
  std::string::operator=(this + 292, a2 + 292);
  *(_DWORD *)(this + 320) = *(_DWORD *)(a2 + 320);
  *(_BYTE *)(this + 324) = *(_BYTE *)(a2 + 324);
  *(_DWORD *)(this + 328) = *(_DWORD *)(a2 + 328);
  *(_DWORD *)(this + 332) = *(_DWORD *)(a2 + 332);
  *(_DWORD *)(this + 336) = *(_DWORD *)(a2 + 336);
  return this;
}
