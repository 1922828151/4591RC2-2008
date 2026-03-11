/*
 * func-name: ??0CPicCheckBox@@QAE@ABV0@@Z
 * func-address: 0x10074030
 * callers: 0x10074130
 * callees: 0x10071be0
 */

CPicCheckBox *__thiscall CPicCheckBox::CPicCheckBox(CPicCheckBox *this, const struct CPicCheckBox *a2)
{
  CRECheckBox::CRECheckBox(this, a2);
  *(_DWORD *)this = &CPicCheckBox::`vftable';
  *((_DWORD *)this + 213) = *((_DWORD *)a2 + 213);
  *((_DWORD *)this + 214) = *((_DWORD *)a2 + 214);
  *((_DWORD *)this + 215) = *((_DWORD *)a2 + 215);
  *((_DWORD *)this + 216) = *((_DWORD *)a2 + 216);
  *((_DWORD *)this + 217) = *((_DWORD *)a2 + 217);
  *((_DWORD *)this + 218) = *((_DWORD *)a2 + 218);
  *((_DWORD *)this + 219) = *((_DWORD *)a2 + 219);
  *((_BYTE *)this + 880) = *((_BYTE *)a2 + 880);
  return this;
}
