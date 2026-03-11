/*
 * func-name: ??0CPictureLabel@@QAE@ABV0@@Z
 * func-address: 0x10073700
 * callers: none
 * callees: 0x10071230
 */

CPictureLabel *__thiscall CPictureLabel::CPictureLabel(CPictureLabel *this, const struct CPictureLabel *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CPictureLabel::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_BYTE *)this + 556) = *((_BYTE *)a2 + 556);
  *((float *)this + 140) = *((float *)a2 + 140);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  qmemcpy((char *)this + 576, (char *)a2 + 576, 0xD4u);
  qmemcpy((char *)this + 788, (char *)a2 + 788, 0xC4u);
  std::wstring::wstring((char *)this + 984, (char *)a2 + 984);
  *((_BYTE *)this + 1012) = *((_BYTE *)a2 + 1012);
  *((_BYTE *)this + 1013) = *((_BYTE *)a2 + 1013);
  *((_BYTE *)this + 1014) = *((_BYTE *)a2 + 1014);
  *((_DWORD *)this + 254) = *((_DWORD *)a2 + 254);
  *((_DWORD *)this + 255) = *((_DWORD *)a2 + 255);
  *((_DWORD *)this + 256) = *((_DWORD *)a2 + 256);
  *((_DWORD *)this + 257) = *((_DWORD *)a2 + 257);
  *((_BYTE *)this + 1032) = *((_BYTE *)a2 + 1032);
  return this;
}
