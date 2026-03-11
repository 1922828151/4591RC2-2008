/*
 * func-name: ??0CMultiLineStatic@@QAE@ABV0@@Z
 * func-address: 0x10075a20
 * callers: none
 * callees: 0x100717b0, 0x10074b30
 */

CMultiLineStatic *__thiscall CMultiLineStatic::CMultiLineStatic(
        CMultiLineStatic *this,
        const struct CMultiLineStatic *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CMultiLineStatic::`vftable';
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 174);
  sub_10074B30((_DWORD *)this + 175, (int)a2 + 700);
  *((_DWORD *)this + 180) = *((_DWORD *)a2 + 180);
  *((_DWORD *)this + 181) = *((_DWORD *)a2 + 181);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 182);
  *((float *)this + 183) = *((float *)a2 + 183);
  *((float *)this + 184) = *((float *)a2 + 184);
  *((float *)this + 185) = *((float *)a2 + 185);
  *((_BYTE *)this + 744) = *((_BYTE *)a2 + 744);
  *((_BYTE *)this + 745) = *((_BYTE *)a2 + 745);
  *((_BYTE *)this + 746) = *((_BYTE *)a2 + 746);
  *((_BYTE *)this + 747) = *((_BYTE *)a2 + 747);
  *((_BYTE *)this + 748) = *((_BYTE *)a2 + 748);
  *((_DWORD *)this + 188) = *((_DWORD *)a2 + 188);
  *((_DWORD *)this + 189) = *((_DWORD *)a2 + 189);
  *((_DWORD *)this + 190) = *((_DWORD *)a2 + 190);
  *((_DWORD *)this + 191) = *((_DWORD *)a2 + 191);
  *((_DWORD *)this + 192) = *((_DWORD *)a2 + 192);
  *((_DWORD *)this + 193) = *((_DWORD *)a2 + 193);
  *((_DWORD *)this + 194) = *((_DWORD *)a2 + 194);
  *((_DWORD *)this + 195) = *((_DWORD *)a2 + 195);
  *((_DWORD *)this + 196) = *((_DWORD *)a2 + 196);
  *((_DWORD *)this + 197) = *((_DWORD *)a2 + 197);
  *((_DWORD *)this + 198) = *((_DWORD *)a2 + 198);
  *((_DWORD *)this + 199) = *((_DWORD *)a2 + 199);
  *((_DWORD *)this + 200) = *((_DWORD *)a2 + 200);
  return this;
}
