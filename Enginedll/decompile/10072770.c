/*
 * func-name: ??0CRETabPages@@QAE@ABV0@@Z
 * func-address: 0x10072770
 * callers: none
 * callees: 0x10071230
 */

CRETabPages *__thiscall CRETabPages::CRETabPages(CRETabPages *this, const struct CRETabPages *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CRETabPages::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  return this;
}
