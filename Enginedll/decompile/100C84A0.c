/*
 * func-name: ??0CREEditBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c84a0
 * callers: 0x1006ac20, 0x100c86a0, 0x100c8c30, 0x100c8c60, 0x100c8da0, 0x100cb220, 0x100cbee0, 0x100cc180, 0x100cc710, 0x100d86e0, 0x1014a750
 * callees: 0x1007e540, 0x1007e670, 0x100c6ff0, 0x101a24ac
 */

CREEditBox *__thiscall CREEditBox::CREEditBox(CREEditBox *this, struct CREDialog *a2)
{
  _WORD *v3; // eax
  CRETimer *v4; // eax
  _BYTE v6[28]; // [esp+Ch] [ebp-28h] BYREF
  int v7; // [esp+30h] [ebp-4h]

  CREControl::CREControl(this, 0);
  v7 = 0;
  *(_DWORD *)this = &CREEditBox::`vftable';
  v3 = operator new(2u);
  *((_DWORD *)this + 133) = v3;
  *v3 = 0;
  *((_DWORD *)this + 134) = 1;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 548) = 1;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 136) = 0;
  LOBYTE(v7) = 1;
  *((_DWORD *)this + 195) = -1;
  *((_BYTE *)this + 789) = 1;
  *((_DWORD *)this + 35) = 7;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 139) = 1;
  *((_DWORD *)this + 140) = 0;
  *((_BYTE *)this + 744) = 1;
  *((double *)this + 91) = (double)GetCaretBlinkTime() * 0.001000000047497451;
  v4 = REGetGlobalTimer();
  *((double *)this + 92) = CRETimer::GetAbsoluteTime(v4);
  CREEditBox::s_bHideCaret = 0;
  *((_DWORD *)this + 190) = 0;
  *((_DWORD *)this + 191) = -1;
  *((_DWORD *)this + 192) = -65536;
  *((_DWORD *)this + 193) = -14142884;
  *((_DWORD *)this + 194) = -1;
  *((_DWORD *)this + 189) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_BYTE *)this + 752) = 1;
  *((_DWORD *)this + 196) = 0;
  *((_BYTE *)this + 788) = 0;
  *((_BYTE *)this + 753) = 1;
  std::string::string(v6, "EditBox");
  LOBYTE(v7) = 2;
  std::string::operator=((char *)this + 16, v6);
  LOBYTE(v7) = 1;
  std::string::~string(v6);
  return this;
}
