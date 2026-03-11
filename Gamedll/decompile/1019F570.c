/*
 * func-name: ??4FControlledEstab@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1019f570
 * callers: 0x1001a1fe
 * callees: 0x100083cd, 0x1000d5c1, 0x10018836
 */

int __thiscall GameClient::FControlledEstab::operator=(int this, int a2)
{
  GameClient::FEstablishment::operator=(a2);
  *(_DWORD *)(this + 516) = *(_DWORD *)(a2 + 516);
  std::string::operator=(this + 520, a2 + 520);
  *(float *)(this + 548) = *(float *)(a2 + 548);
  std::string::operator=(this + 552, a2 + 552);
  *(float *)(this + 580) = *(float *)(a2 + 580);
  std::string::operator=(this + 584, a2 + 584);
  *(float *)(this + 612) = *(float *)(a2 + 612);
  *(float *)(this + 616) = *(float *)(a2 + 616);
  sub_1000D5C1(a2 + 620);
  sub_1000D5C1(a2 + 636);
  std::string::operator=(this + 652, a2 + 652);
  std::string::operator=(this + 680, a2 + 680);
  *(float *)(this + 708) = *(float *)(a2 + 708);
  std::string::operator=(this + 712, a2 + 712);
  *(float *)(this + 740) = *(float *)(a2 + 740);
  *(_BYTE *)(this + 744) = *(_BYTE *)(a2 + 744);
  *(float *)(this + 748) = *(float *)(a2 + 748);
  std::string::operator=(this + 752, a2 + 752);
  std::string::operator=(this + 780, a2 + 780);
  sub_10018836(a2 + 808);
  sub_10018836(a2 + 824);
  *(float *)(this + 840) = *(float *)(a2 + 840);
  std::string::operator=(this + 844, a2 + 844);
  *(float *)(this + 872) = *(float *)(a2 + 872);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 876) + 4))(this + 876, a2 + 876);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 920) + 4))(this + 920, a2 + 920);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 964) + 4))(this + 964, a2 + 964);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 1008) + 4))(this + 1008, a2 + 1008);
  *(_DWORD *)(this + 1052) = *(_DWORD *)(a2 + 1052);
  *(_DWORD *)(this + 1056) = *(_DWORD *)(a2 + 1056);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  *(_DWORD *)(this + 1064) = *(_DWORD *)(a2 + 1064);
  *(_DWORD *)(this + 1068) = *(_DWORD *)(a2 + 1068);
  return this;
}
