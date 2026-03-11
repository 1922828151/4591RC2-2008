/*
 * func-name: ??0Mesh@@QAE@ABV0@@Z
 * func-address: 0x100296d0
 * callers: none
 * callees: 0x1000d680, 0x10021590, 0x10022040, 0x10022210, 0x10025760, 0x100292f0
 */

Mesh *__thiscall Mesh::Mesh(Mesh *this, const struct Mesh *a2)
{
  *(_DWORD *)this = &Mesh::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((float *)this + 5) = *((float *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_10022040((_DWORD *)this + 9, (int)a2 + 36);
  std::vector<BBox>::vector<BBox>((_DWORD *)this + 13, (int)a2 + 52);
  std::vector<EditorVar>::vector<EditorVar>((int)this + 68, (int)a2 + 68);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  PRTSettings::PRTSettings((Mesh *)((char *)this + 120), (const struct Mesh *)((char *)a2 + 120));
  *((_DWORD *)this + 603) = *((_DWORD *)a2 + 603);
  *((_BYTE *)this + 2416) = *((_BYTE *)a2 + 2416);
  *((_BYTE *)this + 2417) = *((_BYTE *)a2 + 2417);
  *((_DWORD *)this + 605) = &Volume::`vftable';
  *((_DWORD *)this + 606) = *((_DWORD *)a2 + 606);
  *((_DWORD *)this + 607) = *((_DWORD *)a2 + 607);
  *((_DWORD *)this + 608) = *((_DWORD *)a2 + 608);
  *((_DWORD *)this + 605) = &BBox::`vftable';
  *((_DWORD *)this + 609) = *((_DWORD *)a2 + 609);
  *((_DWORD *)this + 610) = *((_DWORD *)a2 + 610);
  *((_DWORD *)this + 611) = *((_DWORD *)a2 + 611);
  *((_DWORD *)this + 612) = *((_DWORD *)a2 + 612);
  *((_DWORD *)this + 613) = *((_DWORD *)a2 + 613);
  *((_DWORD *)this + 614) = *((_DWORD *)a2 + 614);
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 615, (int)a2 + 2460);
  std::vector<AttributeRange>::vector<AttributeRange>((_DWORD *)this + 619, (int)a2 + 2476);
  *((float *)this + 623) = *((float *)a2 + 623);
  *((_DWORD *)this + 624) = *((_DWORD *)a2 + 624);
  *((_DWORD *)this + 625) = *((_DWORD *)a2 + 625);
  *((_DWORD *)this + 626) = *((_DWORD *)a2 + 626);
  *((_DWORD *)this + 627) = *((_DWORD *)a2 + 627);
  *((_DWORD *)this + 628) = *((_DWORD *)a2 + 628);
  *((_DWORD *)this + 629) = *((_DWORD *)a2 + 629);
  *((_DWORD *)this + 630) = *((_DWORD *)a2 + 630);
  *((_BYTE *)this + 2524) = *((_BYTE *)a2 + 2524);
  return this;
}
