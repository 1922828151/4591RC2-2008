/*
 * func-name: ??0CProgressBar@@QAE@PAVCTYDialog@@@Z
 * func-address: 0x1014fff0
 * callers: 0x100a2a20, 0x100d8620, 0x1014a750
 * callees: 0x100c7520
 */

CProgressBar *__thiscall CProgressBar::CProgressBar(CProgressBar *this, struct CTYDialog *a2)
{
  _BYTE v4[28]; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  CREStatic::CREStatic(this, a2);
  *((float *)this + 176) = 0.0;
  *((float *)this + 177) = 0.0;
  *((float *)this + 178) = 0.0;
  *((float *)this + 184) = 0.0;
  v5 = 0;
  *(_DWORD *)this = &CProgressBar::`vftable';
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 183) = 0;
  *((_DWORD *)this + 185) = 0;
  *((_BYTE *)this + 744) = 0;
  *((_BYTE *)this + 745) = 0;
  *((_BYTE *)this + 746) = 0;
  *((_BYTE *)this + 747) = 0;
  *((_BYTE *)this + 748) = 0;
  *((_DWORD *)this + 188) = 1;
  *((_DWORD *)this + 189) = 1;
  *((_DWORD *)this + 190) = 0;
  *((_DWORD *)this + 35) = 17;
  std::string::string(v4, "ProgressBar");
  LOBYTE(v5) = 1;
  std::string::operator=((char *)this + 16, v4);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  *((_DWORD *)this + 191) = 0;
  return this;
}
