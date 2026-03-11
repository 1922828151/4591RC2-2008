/*
 * func-name: ??4FRobotFramework@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1018bf40
 * callers: 0x10008a21
 * callees: 0x1000d5c1, 0x100124bd, 0x10019d2b
 */

int __thiscall GameClient::FRobotFramework::operator=(int this, int a2)
{
  int v3; // ebx
  int v4; // ebp

  std::string::operator=(this + 4, a2 + 4);
  sub_100124BD(a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 52, a2 + 52);
  std::string::operator=(this + 80, a2 + 80);
  *(float *)(this + 108) = *(float *)(a2 + 108);
  *(float *)(this + 112) = *(float *)(a2 + 112);
  *(float *)(this + 116) = *(float *)(a2 + 116);
  *(float *)(this + 120) = *(float *)(a2 + 120);
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(this + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160);
  *(float *)(this + 164) = *(float *)(a2 + 164);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  std::string::operator=(this + 184, a2 + 184);
  std::string::operator=(this + 212, a2 + 212);
  std::string::operator=(this + 240, a2 + 240);
  *(float *)(this + 268) = *(float *)(a2 + 268);
  *(float *)(this + 272) = *(float *)(a2 + 272);
  *(float *)(this + 276) = *(float *)(a2 + 276);
  *(float *)(this + 280) = *(float *)(a2 + 280);
  std::string::operator=(this + 284, a2 + 284);
  std::string::operator=(this + 312, a2 + 312);
  std::string::operator=(this + 340, a2 + 340);
  std::string::operator=(this + 368, a2 + 368);
  std::string::operator=(this + 396, a2 + 396);
  sub_10019D2B(a2 + 424);
  sub_1000D5C1(a2 + 440);
  sub_1000D5C1(a2 + 456);
  sub_1000D5C1(a2 + 472);
  v3 = this + 488;
  v4 = 50;
  do
  {
    std::string::operator=(v3, a2 - this + v3);
    v3 += 28;
    --v4;
  }
  while ( v4 );
  return this;
}
