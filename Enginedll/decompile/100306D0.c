/*
 * func-name: ??4World@@QAEAAV0@ABV0@@Z
 * func-address: 0x100306d0
 * callers: 0x10074f10
 * callees: 0x1000ce20, 0x1000d550, 0x10011510, 0x10018040, 0x10021e30, 0x10022df0, 0x10022fc0, 0x100268d0, 0x10026e50, 0x10026f20, 0x1002bc70, 0x1002d760
 */

int __thiscall World::operator=(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  int v9; // [esp+10h] [ebp-8h] BYREF

  v3 = (_DWORD *)(this + 4);
  if ( this + 4 != a2 + 4 )
  {
    sub_10026E50(this + 4, &v9, this + 4, **(_DWORD **)(this + 8), this + 4, *(_DWORD *)(this + 8));
    sub_10026F20(v3, a2 + 4);
  }
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  v4 = 12;
  *(float *)(this + 40) = *(float *)(a2 + 40);
  *(float *)(this + 44) = *(float *)(a2 + 44);
  *(float *)(this + 48) = *(float *)(a2 + 48);
  *(float *)(this + 52) = *(float *)(a2 + 52);
  *(float *)(this + 56) = *(float *)(a2 + 56);
  *(float *)(this + 60) = *(float *)(a2 + 60);
  *(float *)(this + 64) = *(float *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(float *)(this + 76) = *(float *)(a2 + 76);
  *(_BYTE *)(this + 80) = *(_BYTE *)(a2 + 80);
  *(_BYTE *)(this + 81) = *(_BYTE *)(a2 + 81);
  *(_BYTE *)(this + 82) = *(_BYTE *)(a2 + 82);
  *(_BYTE *)(this + 83) = *(_BYTE *)(a2 + 83);
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84);
  v5 = a2 + 96;
  v6 = this + 88;
  do
  {
    v7 = *(float *)(a2 - this + v6);
    v6 += 36;
    *(float *)(v6 - 36) = v7;
    v5 += 36;
    --v4;
    *(float *)(v6 - 32) = *(float *)(v5 - 40);
    *(float *)(v6 - 28) = *(float *)(v5 - 36);
    *(float *)(v6 - 24) = *(float *)(v5 - 32);
    *(float *)(v6 - 20) = *(float *)(v5 - 28);
    *(float *)(v6 - 16) = *(float *)(v5 - 24);
    *(float *)(v6 - 12) = *(float *)(v5 - 20);
    *(float *)(v6 - 8) = *(float *)(v5 - 16);
    *(float *)(v6 - 4) = *(float *)(v5 - 12);
  }
  while ( v4 );
  *(_DWORD *)(this + 520) = *(_DWORD *)(a2 + 520);
  *(float *)(this + 524) = *(float *)(a2 + 524);
  *(_DWORD *)(this + 528) = *(_DWORD *)(a2 + 528);
  *(float *)(this + 532) = *(float *)(a2 + 532);
  *(float *)(this + 536) = *(float *)(a2 + 536);
  *(float *)(this + 540) = *(float *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_BYTE *)(this + 552) = *(_BYTE *)(a2 + 552);
  *(float *)(this + 556) = *(float *)(a2 + 556);
  *(_DWORD *)(this + 560) = *(_DWORD *)(a2 + 560);
  *(_DWORD *)(this + 564) = *(_DWORD *)(a2 + 564);
  *(_DWORD *)(this + 568) = *(_DWORD *)(a2 + 568);
  *(_DWORD *)(this + 572) = *(_DWORD *)(a2 + 572);
  *(_DWORD *)(this + 576) = *(_DWORD *)(a2 + 576);
  *(_DWORD *)(this + 580) = *(_DWORD *)(a2 + 580);
  *(_DWORD *)(this + 584) = *(_DWORD *)(a2 + 584);
  *(_DWORD *)(this + 588) = *(_DWORD *)(a2 + 588);
  *(_DWORD *)(this + 592) = *(_DWORD *)(a2 + 592);
  std::string::operator=(this + 596, a2 + 596);
  *(_DWORD *)(this + 624) = *(_DWORD *)(a2 + 624);
  sub_100268D0(this + 628, a2 + 628);
  qmemcpy((void *)(this + 644), (const void *)(a2 + 644), 0x40u);
  std::vector<Material *>::operator=(this + 708, a2 + 708);
  *(_BYTE *)(this + 724) = *(_BYTE *)(a2 + 724);
  *(_BYTE *)(this + 725) = *(_BYTE *)(a2 + 725);
  *(_BYTE *)(this + 726) = *(_BYTE *)(a2 + 726);
  *(_BYTE *)(this + 727) = *(_BYTE *)(a2 + 727);
  *(_BYTE *)(this + 728) = *(_BYTE *)(a2 + 728);
  sub_10011510(this + 732, a2 + 732);
  *(_BYTE *)(this + 748) = *(_BYTE *)(a2 + 748);
  *(_DWORD *)(this + 752) = *(_DWORD *)(a2 + 752);
  *(_DWORD *)(this + 756) = *(_DWORD *)(a2 + 756);
  *(_BYTE *)(this + 760) = *(_BYTE *)(a2 + 760);
  *(_BYTE *)(this + 761) = *(_BYTE *)(a2 + 761);
  *(_BYTE *)(this + 762) = *(_BYTE *)(a2 + 762);
  *(_BYTE *)(this + 763) = *(_BYTE *)(a2 + 763);
  *(_BYTE *)(this + 764) = *(_BYTE *)(a2 + 764);
  *(_DWORD *)(this + 768) = *(_DWORD *)(a2 + 768);
  *(_BYTE *)(this + 772) = *(_BYTE *)(a2 + 772);
  *(float *)(this + 776) = *(float *)(a2 + 776);
  *(_BYTE *)(this + 780) = *(_BYTE *)(a2 + 780);
  *(_BYTE *)(this + 781) = *(_BYTE *)(a2 + 781);
  *(_BYTE *)(this + 782) = *(_BYTE *)(a2 + 782);
  sub_10011510(this + 784, a2 + 784);
  sub_10011510(this + 800, a2 + 800);
  sub_10011510(this + 816, a2 + 816);
  sub_10011510(this + 832, a2 + 832);
  std::string::operator=(this + 848, a2 + 848);
  *(_BYTE *)(this + 876) = *(_BYTE *)(a2 + 876);
  std::vector<EditorVar>::operator=(this + 880, a2 + 880);
  PRTSettings::operator=((char *)(this + 896), (char *)(a2 + 896));
  std::string::operator=(this + 3188, a2 + 3188);
  *(_DWORD *)(this + 3216) = *(_DWORD *)(a2 + 3216);
  std::vector<Actor *>::operator=(this + 3220, a2 + 3220);
  sub_10021E30(this + 3236, a2 + 3236);
  sub_10022DF0(this + 3252, a2 + 3252);
  sub_10022FC0(this + 3268, a2 + 3268);
  *(_BYTE *)(this + 3284) = *(_BYTE *)(a2 + 3284);
  SkySettings::operator=((float *)(this + 3288), (float *)(a2 + 3288));
  *(_DWORD *)(this + 3792) = *(_DWORD *)(a2 + 3792);
  return this;
}
