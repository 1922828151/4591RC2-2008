/*
 * func-name: ??0World@@QAE@ABV0@@Z
 * func-address: 0x10030270
 * callers: 0x10074d60
 * callees: 0x1000d4b0, 0x1000d680, 0x1000f380, 0x10017df0, 0x10021d90, 0x10022a90, 0x10022d50, 0x10022f20, 0x10025760, 0x100292f0, 0x10029c10, 0x1002c4a0
 */

World *__thiscall World::World(World *this, const struct World *a2)
{
  *(_DWORD *)this = &World::`vftable';
  sub_1002C4A0((_DWORD *)this + 1, (int)a2 + 4);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_BYTE *)this + 20) = *((_BYTE *)a2 + 20);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((float *)this + 10) = *((float *)a2 + 10);
  *((float *)this + 11) = *((float *)a2 + 11);
  *((float *)this + 12) = *((float *)a2 + 12);
  *((float *)this + 13) = *((float *)a2 + 13);
  *((float *)this + 14) = *((float *)a2 + 14);
  *((float *)this + 15) = *((float *)a2 + 15);
  *((float *)this + 16) = *((float *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((float *)this + 19) = *((float *)a2 + 19);
  *((_BYTE *)this + 80) = *((_BYTE *)a2 + 80);
  *((_BYTE *)this + 81) = *((_BYTE *)a2 + 81);
  *((_BYTE *)this + 82) = *((_BYTE *)a2 + 82);
  *((_BYTE *)this + 83) = *((_BYTE *)a2 + 83);
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 84);
  qmemcpy((char *)this + 88, (char *)a2 + 88, 0x1D1u);
  *((float *)this + 139) = *((float *)a2 + 139);
  *((_DWORD *)this + 140) = *((_DWORD *)a2 + 140);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  *((_DWORD *)this + 145) = *((_DWORD *)a2 + 145);
  *((_DWORD *)this + 146) = *((_DWORD *)a2 + 146);
  *((_DWORD *)this + 147) = *((_DWORD *)a2 + 147);
  *((_DWORD *)this + 148) = *((_DWORD *)a2 + 148);
  std::string::string((char *)this + 596, (char *)a2 + 596);
  *((_DWORD *)this + 156) = *((_DWORD *)a2 + 156);
  sub_10022A90((_DWORD *)this + 157, (int)a2 + 628);
  *((float *)this + 161) = 0.0;
  *((float *)this + 162) = 0.0;
  *((float *)this + 163) = 0.0;
  *((float *)this + 165) = 0.0;
  *((float *)this + 166) = 0.0;
  *((float *)this + 167) = 0.0;
  *((float *)this + 169) = 0.0;
  *((float *)this + 170) = 0.0;
  *((float *)this + 171) = 0.0;
  *((float *)this + 173) = 0.0;
  *((float *)this + 174) = 0.0;
  *((float *)this + 175) = 0.0;
  qmemcpy((char *)this + 644, (char *)a2 + 644, 0x40u);
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 177, (int)a2 + 708);
  *((_BYTE *)this + 724) = *((_BYTE *)a2 + 724);
  *((_BYTE *)this + 725) = *((_BYTE *)a2 + 725);
  *((_BYTE *)this + 726) = *((_BYTE *)a2 + 726);
  *((_BYTE *)this + 727) = *((_BYTE *)a2 + 727);
  *((_BYTE *)this + 728) = *((_BYTE *)a2 + 728);
  sub_1000F380((int)this + 732, (int)a2 + 732);
  *((_BYTE *)this + 748) = *((_BYTE *)a2 + 748);
  *((_DWORD *)this + 188) = *((_DWORD *)a2 + 188);
  *((_DWORD *)this + 189) = *((_DWORD *)a2 + 189);
  *((_BYTE *)this + 760) = *((_BYTE *)a2 + 760);
  *((_BYTE *)this + 761) = *((_BYTE *)a2 + 761);
  *((_BYTE *)this + 762) = *((_BYTE *)a2 + 762);
  *((_BYTE *)this + 763) = *((_BYTE *)a2 + 763);
  *((_BYTE *)this + 764) = *((_BYTE *)a2 + 764);
  *((_DWORD *)this + 192) = *((_DWORD *)a2 + 192);
  *((_BYTE *)this + 772) = *((_BYTE *)a2 + 772);
  *((float *)this + 194) = *((float *)a2 + 194);
  *((_BYTE *)this + 780) = *((_BYTE *)a2 + 780);
  *((_BYTE *)this + 781) = *((_BYTE *)a2 + 781);
  *((_BYTE *)this + 782) = *((_BYTE *)a2 + 782);
  sub_10029C10((_BYTE *)this + 784, (int)a2 + 784);
  std::vector<EditorVar>::vector<EditorVar>((int)this + 880, (int)a2 + 880);
  PRTSettings::PRTSettings((World *)((char *)this + 896), (const struct World *)((char *)a2 + 896));
  std::string::string((char *)this + 3188, (char *)a2 + 3188);
  *((_DWORD *)this + 804) = *((_DWORD *)a2 + 804);
  std::vector<Actor *>::vector<Actor *>((_DWORD *)this + 805, (int)a2 + 3220);
  sub_10021D90((_DWORD *)this + 809, (int)a2 + 3236);
  sub_10022D50((_DWORD *)this + 813, (int)a2 + 3252);
  sub_10022F20((_DWORD *)this + 817, (int)a2 + 3268);
  *((_BYTE *)this + 3284) = *((_BYTE *)a2 + 3284);
  SkySettings::SkySettings((World *)((char *)this + 3288), (const struct World *)((char *)a2 + 3288));
  *((_DWORD *)this + 948) = *((_DWORD *)a2 + 948);
  return this;
}
