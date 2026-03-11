/*
 * func-name: ??0CItemHolder@@QAE@ABV0@@Z
 * func-address: 0x100d49d0
 * callers: none
 * callees: 0x10071230, 0x100d08e0, 0x100d0ab0
 */

CItemHolder *__thiscall CItemHolder::CItemHolder(CItemHolder *this, const struct CItemHolder *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CItemHolder::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  sub_100D08E0((_DWORD *)this + 134, (int)a2 + 536);
  sub_100D0AB0((_DWORD *)this + 138, (int)a2 + 552);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  *((_DWORD *)this + 145) = *((_DWORD *)a2 + 145);
  *((_DWORD *)this + 146) = *((_DWORD *)a2 + 146);
  *((_DWORD *)this + 147) = *((_DWORD *)a2 + 147);
  *((_DWORD *)this + 148) = *((_DWORD *)a2 + 148);
  *((_DWORD *)this + 149) = *((_DWORD *)a2 + 149);
  *((_DWORD *)this + 150) = *((_DWORD *)a2 + 150);
  *((_DWORD *)this + 151) = *((_DWORD *)a2 + 151);
  *((_DWORD *)this + 152) = *((_DWORD *)a2 + 152);
  *((_DWORD *)this + 153) = *((_DWORD *)a2 + 153);
  *((_DWORD *)this + 154) = *((_DWORD *)a2 + 154);
  *((_DWORD *)this + 155) = *((_DWORD *)a2 + 155);
  *((_DWORD *)this + 156) = *((_DWORD *)a2 + 156);
  *((_BYTE *)this + 628) = *((_BYTE *)a2 + 628);
  *((_BYTE *)this + 629) = *((_BYTE *)a2 + 629);
  *((_BYTE *)this + 630) = *((_BYTE *)a2 + 630);
  *((_BYTE *)this + 631) = *((_BYTE *)a2 + 631);
  *((_BYTE *)this + 632) = *((_BYTE *)a2 + 632);
  *((_BYTE *)this + 633) = *((_BYTE *)a2 + 633);
  return this;
}
