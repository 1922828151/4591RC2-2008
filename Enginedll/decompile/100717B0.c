/*
 * func-name: ??0CREStatic@@QAE@ABV0@@Z
 * func-address: 0x100717b0
 * callers: 0x10071950, 0x10073a10, 0x10073bc0, 0x10073d50, 0x10075a20, 0x100761d0, 0x100d4b60, 0x100d4d40, 0x100d4ef0
 * callees: 0x10071230
 */

CREStatic *__thiscall CREStatic::CREStatic(CREStatic *this, const struct CREStatic *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CREStatic::`vftable';
  std::wstring::wstring((char *)this + 532, (char *)a2 + 532);
  *((_DWORD *)this + 140) = *((_DWORD *)a2 + 140);
  qmemcpy((char *)this + 564, (char *)a2 + 564, 0x51u);
  *((_DWORD *)this + 162) = *((_DWORD *)a2 + 162);
  *((_DWORD *)this + 163) = *((_DWORD *)a2 + 163);
  std::wstring::wstring((char *)this + 656, (char *)a2 + 656);
  *((_DWORD *)this + 171) = *((_DWORD *)a2 + 171);
  *((_BYTE *)this + 688) = *((_BYTE *)a2 + 688);
  *((_DWORD *)this + 173) = *((_DWORD *)a2 + 173);
  return this;
}
