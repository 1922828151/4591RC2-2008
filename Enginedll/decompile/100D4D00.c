/*
 * func-name: ??0CSeperateLine@@QAE@ABV0@@Z
 * func-address: 0x100d4d00
 * callers: none
 * callees: 0x10071230
 */

CSeperateLine *__thiscall CSeperateLine::CSeperateLine(CSeperateLine *this, const struct CSeperateLine *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CSeperateLine::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_BYTE *)this + 536) = *((_BYTE *)a2 + 536);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  return this;
}
