/*
 * func-name: ??4Equip@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100647a0
 * callers: 0x10009345
 * callees: 0x1000ca59, 0x1000f088, 0x1001327d
 */

int __thiscall GameClient::Equip::operator=(int this, int a2)
{
  int result; // eax

  GameClient::WorldObject::operator=(a2);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(this + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(this + 164) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_BYTE *)(this + 184) = *(_BYTE *)(a2 + 184);
  *(_BYTE *)(this + 185) = *(_BYTE *)(a2 + 185);
  *(float *)(this + 188) = *(float *)(a2 + 188);
  *(float *)(this + 192) = *(float *)(a2 + 192);
  *(_BYTE *)(this + 196) = *(_BYTE *)(a2 + 196);
  *(_BYTE *)(this + 197) = *(_BYTE *)(a2 + 197);
  *(_DWORD *)(this + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(this + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(this + 236) = *(_DWORD *)(a2 + 236);
  *(float *)(this + 240) = *(float *)(a2 + 240);
  *(_BYTE *)(this + 244) = *(_BYTE *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  sub_1000CA59(a2 + 276);
  sub_1000CA59(a2 + 292);
  sub_1001327D(a2 + 308);
  sub_1001327D(a2 + 324);
  std::string::operator=(this + 340, a2 + 340);
  std::string::operator=(this + 368, a2 + 368);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  *(float *)(this + 400) = *(float *)(a2 + 400);
  *(_BYTE *)(this + 404) = *(_BYTE *)(a2 + 404);
  *(float *)(this + 408) = *(float *)(a2 + 408);
  *(float *)(this + 412) = *(float *)(a2 + 412);
  *(float *)(this + 416) = *(float *)(a2 + 416);
  std::string::operator=(this + 420, a2 + 420);
  std::string::operator=(this + 448, a2 + 448);
  *(_DWORD *)(this + 476) = *(_DWORD *)(a2 + 476);
  *(float *)(this + 480) = *(float *)(a2 + 480);
  *(_BYTE *)(this + 484) = *(_BYTE *)(a2 + 484);
  *(float *)(this + 488) = *(float *)(a2 + 488);
  *(float *)(this + 492) = *(float *)(a2 + 492);
  *(float *)(this + 496) = *(float *)(a2 + 496);
  std::string::operator=(this + 500, a2 + 500);
  std::string::operator=(this + 528, a2 + 528);
  *(_DWORD *)(this + 556) = *(_DWORD *)(a2 + 556);
  *(float *)(this + 560) = *(float *)(a2 + 560);
  *(_BYTE *)(this + 564) = *(_BYTE *)(a2 + 564);
  *(float *)(this + 568) = *(float *)(a2 + 568);
  *(float *)(this + 572) = *(float *)(a2 + 572);
  *(float *)(this + 576) = *(float *)(a2 + 576);
  std::string::operator=(this + 580, a2 + 580);
  std::string::operator=(this + 608, a2 + 608);
  *(_DWORD *)(this + 636) = *(_DWORD *)(a2 + 636);
  *(float *)(this + 640) = *(float *)(a2 + 640);
  *(_BYTE *)(this + 644) = *(_BYTE *)(a2 + 644);
  *(float *)(this + 648) = *(float *)(a2 + 648);
  *(float *)(this + 652) = *(float *)(a2 + 652);
  *(float *)(this + 656) = *(float *)(a2 + 656);
  std::string::operator=(this + 660, a2 + 660);
  std::string::operator=(this + 688, a2 + 688);
  *(_DWORD *)(this + 716) = *(_DWORD *)(a2 + 716);
  *(float *)(this + 720) = *(float *)(a2 + 720);
  *(_BYTE *)(this + 724) = *(_BYTE *)(a2 + 724);
  result = this;
  *(float *)(this + 728) = *(float *)(a2 + 728);
  *(float *)(this + 732) = *(float *)(a2 + 732);
  *(float *)(this + 736) = *(float *)(a2 + 736);
  return result;
}
