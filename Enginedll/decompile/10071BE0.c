/*
 * func-name: ??0CRECheckBox@@QAE@ABV0@@Z
 * func-address: 0x10071be0
 * callers: 0x10071ce0, 0x10074030
 * callees: 0x10071950
 */

CRECheckBox *__thiscall CRECheckBox::CRECheckBox(CRECheckBox *this, const struct CRECheckBox *a2)
{
  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CRECheckBox::`vftable';
  *((_BYTE *)this + 816) = *((_BYTE *)a2 + 816);
  *((_DWORD *)this + 205) = *((_DWORD *)a2 + 205);
  *((_DWORD *)this + 206) = *((_DWORD *)a2 + 206);
  *((_DWORD *)this + 207) = *((_DWORD *)a2 + 207);
  *((_DWORD *)this + 208) = *((_DWORD *)a2 + 208);
  *((_DWORD *)this + 209) = *((_DWORD *)a2 + 209);
  *((_DWORD *)this + 210) = *((_DWORD *)a2 + 210);
  *((_DWORD *)this + 211) = *((_DWORD *)a2 + 211);
  *((_DWORD *)this + 212) = *((_DWORD *)a2 + 212);
  return this;
}
