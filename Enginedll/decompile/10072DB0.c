/*
 * func-name: ??0CREEditBox@@QAE@ABV0@@Z
 * func-address: 0x10072db0
 * callers: 0x10073260, 0x100734e0, 0x10073cf0, 0x10073f50
 * callees: 0x10071230
 */

CREEditBox *__thiscall CREEditBox::CREEditBox(CREEditBox *this, const struct CREEditBox *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CREEditBox::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_DWORD *)this + 139) = *((_DWORD *)a2 + 139);
  *((_DWORD *)this + 140) = *((_DWORD *)a2 + 140);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  qmemcpy((char *)this + 580, (char *)a2 + 580, 0x90u);
  *((double *)this + 91) = *((double *)a2 + 91);
  *((double *)this + 92) = *((double *)a2 + 92);
  *((_BYTE *)this + 744) = *((_BYTE *)a2 + 744);
  *((_DWORD *)this + 187) = *((_DWORD *)a2 + 187);
  *((_BYTE *)this + 752) = *((_BYTE *)a2 + 752);
  *((_BYTE *)this + 753) = *((_BYTE *)a2 + 753);
  *((_DWORD *)this + 189) = *((_DWORD *)a2 + 189);
  *((_DWORD *)this + 190) = *((_DWORD *)a2 + 190);
  *((_DWORD *)this + 191) = *((_DWORD *)a2 + 191);
  *((_DWORD *)this + 192) = *((_DWORD *)a2 + 192);
  *((_DWORD *)this + 193) = *((_DWORD *)a2 + 193);
  *((_DWORD *)this + 194) = *((_DWORD *)a2 + 194);
  *((_DWORD *)this + 195) = *((_DWORD *)a2 + 195);
  *((_DWORD *)this + 196) = *((_DWORD *)a2 + 196);
  *((_BYTE *)this + 788) = *((_BYTE *)a2 + 788);
  *((_BYTE *)this + 789) = *((_BYTE *)a2 + 789);
  return this;
}
