/*
 * func-name: ??0CMultiLineStatic@@QAE@PAVCREDialog@@_N@Z
 * func-address: 0x100ccf60
 * callers: 0x1014a750
 * callees: 0x100c7520, 0x101a24ac
 */

CMultiLineStatic *__thiscall CMultiLineStatic::CMultiLineStatic(CMultiLineStatic *this, struct CREDialog *a2, bool a3)
{
  _WORD *v4; // eax

  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CMultiLineStatic::`vftable';
  *((_DWORD *)this + 174) = -1;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 0;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 179) = 0;
  *((float *)this + 183) = -1.0;
  *((_BYTE *)this + 748) = !a3;
  *((_BYTE *)this + 744) = 0;
  *((_BYTE *)this + 745) = 0;
  *((_BYTE *)this + 746) = 0;
  *((_BYTE *)this + 747) = 1;
  *((_DWORD *)this + 188) = 0;
  *((_DWORD *)this + 189) = 0;
  *((_DWORD *)this + 190) = 0;
  v4 = operator new(2u);
  *((_DWORD *)this + 195) = v4;
  *v4 = 0;
  *((_DWORD *)this + 197) = 0;
  *((_DWORD *)this + 200) = 0;
  *((_DWORD *)this + 198) = 0;
  *((_DWORD *)this + 196) = 1;
  *((_BYTE *)this + 796) = 1;
  return this;
}
