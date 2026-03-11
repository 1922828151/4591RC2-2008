/*
 * func-name: ??0CRETabPages@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7df0
 * callers: 0x1006a770, 0x100cb050, 0x1014a750
 * callees: 0x100c6ff0
 */

CRETabPages *__thiscall CRETabPages::CRETabPages(CRETabPages *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, 0);
  *(_DWORD *)this = &CRETabPages::`vftable';
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 35) = 14;
  *((_DWORD *)this + 136) = 24;
  *((_DWORD *)this + 138) = 9;
  return this;
}
