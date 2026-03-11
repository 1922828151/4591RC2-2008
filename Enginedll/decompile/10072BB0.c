/*
 * func-name: ??0CRESlider@@QAE@ABV0@@Z
 * func-address: 0x10072bb0
 * callers: none
 * callees: 0x10071230
 */

CRESlider *__thiscall CRESlider::CRESlider(CRESlider *this, const struct CRESlider *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CRESlider::`vftable';
  *((float *)this + 133) = *((float *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_DWORD *)this + 139) = *((_DWORD *)a2 + 139);
  *((_BYTE *)this + 560) = *((_BYTE *)a2 + 560);
  *((_BYTE *)this + 561) = *((_BYTE *)a2 + 561);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  std::wstring::wstring((char *)this + 580, (char *)a2 + 580);
  std::wstring::wstring((char *)this + 608, (char *)a2 + 608);
  return this;
}
