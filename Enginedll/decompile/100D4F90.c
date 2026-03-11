/*
 * func-name: ??0CPaster@@QAE@ABV0@@Z
 * func-address: 0x100d4f90
 * callers: none
 * callees: 0x10071230
 */

CPaster *__thiscall CPaster::CPaster(CPaster *this, const struct CPaster *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CPaster::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_BYTE *)this + 544) = *((_BYTE *)a2 + 544);
  std::wstring::wstring((char *)this + 548, (char *)a2 + 548);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  *((_DWORD *)this + 145) = *((_DWORD *)a2 + 145);
  *((_DWORD *)this + 146) = *((_DWORD *)a2 + 146);
  *((_DWORD *)this + 147) = *((_DWORD *)a2 + 147);
  std::wstring::wstring((char *)this + 592, (char *)a2 + 592);
  *((_DWORD *)this + 155) = *((_DWORD *)a2 + 155);
  *((_DWORD *)this + 156) = *((_DWORD *)a2 + 156);
  *((_DWORD *)this + 157) = *((_DWORD *)a2 + 157);
  *((_DWORD *)this + 158) = *((_DWORD *)a2 + 158);
  std::wstring::wstring((char *)this + 636, (char *)a2 + 636);
  *((_DWORD *)this + 166) = *((_DWORD *)a2 + 166);
  *((_DWORD *)this + 167) = *((_DWORD *)a2 + 167);
  *((_DWORD *)this + 168) = *((_DWORD *)a2 + 168);
  *((_DWORD *)this + 169) = *((_DWORD *)a2 + 169);
  return this;
}
