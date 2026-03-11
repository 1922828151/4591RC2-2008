/*
 * func-name: ??0CREListCtrl@@QAE@ABV0@@Z
 * func-address: 0x100761d0
 * callers: none
 * callees: 0x1006ffd0, 0x100717b0, 0x100760a0
 */

CREListCtrl *__thiscall CREListCtrl::CREListCtrl(CREListCtrl *this, const struct CREListCtrl *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CREListCtrl::`vftable';
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 174);
  *((_DWORD *)this + 175) = *((_DWORD *)a2 + 175);
  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 176);
  *((_DWORD *)this + 177) = *((_DWORD *)a2 + 177);
  *((_DWORD *)this + 178) = *((_DWORD *)a2 + 178);
  *((_DWORD *)this + 179) = *((_DWORD *)a2 + 179);
  *((_DWORD *)this + 180) = *((_DWORD *)a2 + 180);
  *((_DWORD *)this + 181) = *((_DWORD *)a2 + 181);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 182);
  *((_DWORD *)this + 183) = *((_DWORD *)a2 + 183);
  *((_DWORD *)this + 184) = *((_DWORD *)a2 + 184);
  *((_DWORD *)this + 185) = *((_DWORD *)a2 + 185);
  sub_1006FFD0((_DWORD *)this + 186, (int)a2 + 744);
  sub_100760A0((int)this + 760, (int)a2 + 760);
  *((_DWORD *)this + 194) = *((_DWORD *)a2 + 194);
  return this;
}
