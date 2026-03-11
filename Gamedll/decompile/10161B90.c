/*
 * func-name: ??4Skill@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10161b90
 * callers: 0x100145fb
 * callees: 0x1000c252
 */

int __thiscall GameClient::Skill::operator=(int this, int a2)
{
  int result; // eax

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  sub_1000C252(a2 + 24);
  sub_1000C252(a2 + 40);
  *(float *)(this + 56) = *(float *)(a2 + 56);
  *(float *)(this + 60) = *(float *)(a2 + 60);
  *(float *)(this + 64) = *(float *)(a2 + 64);
  std::string::operator=(this + 68, a2 + 68);
  std::string::operator=(this + 96, a2 + 96);
  std::string::operator=(this + 124, a2 + 124);
  std::string::operator=(this + 152, a2 + 152);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  std::string::operator=(this + 188, a2 + 188);
  std::string::operator=(this + 216, a2 + 216);
  std::string::operator=(this + 244, a2 + 244);
  std::string::operator=(this + 272, a2 + 272);
  *(_DWORD *)(this + 300) = *(_DWORD *)(a2 + 300);
  *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 304);
  std::string::operator=(this + 308, a2 + 308);
  std::string::operator=(this + 336, a2 + 336);
  std::string::operator=(this + 364, a2 + 364);
  std::string::operator=(this + 392, a2 + 392);
  *(_DWORD *)(this + 420) = *(_DWORD *)(a2 + 420);
  *(_DWORD *)(this + 424) = *(_DWORD *)(a2 + 424);
  std::string::operator=(this + 428, a2 + 428);
  std::string::operator=(this + 456, a2 + 456);
  *(_DWORD *)(this + 484) = *(_DWORD *)(a2 + 484);
  *(float *)(this + 488) = *(float *)(a2 + 488);
  *(_BYTE *)(this + 492) = *(_BYTE *)(a2 + 492);
  *(float *)(this + 496) = *(float *)(a2 + 496);
  *(float *)(this + 500) = *(float *)(a2 + 500);
  *(float *)(this + 504) = *(float *)(a2 + 504);
  std::string::operator=(this + 508, a2 + 508);
  std::string::operator=(this + 536, a2 + 536);
  *(_DWORD *)(this + 564) = *(_DWORD *)(a2 + 564);
  *(float *)(this + 568) = *(float *)(a2 + 568);
  *(_BYTE *)(this + 572) = *(_BYTE *)(a2 + 572);
  *(float *)(this + 576) = *(float *)(a2 + 576);
  *(float *)(this + 580) = *(float *)(a2 + 580);
  *(float *)(this + 584) = *(float *)(a2 + 584);
  std::string::operator=(this + 588, a2 + 588);
  std::string::operator=(this + 616, a2 + 616);
  *(_DWORD *)(this + 644) = *(_DWORD *)(a2 + 644);
  *(float *)(this + 648) = *(float *)(a2 + 648);
  *(_BYTE *)(this + 652) = *(_BYTE *)(a2 + 652);
  result = this;
  *(float *)(this + 656) = *(float *)(a2 + 656);
  *(float *)(this + 660) = *(float *)(a2 + 660);
  *(float *)(this + 664) = *(float *)(a2 + 664);
  return result;
}
