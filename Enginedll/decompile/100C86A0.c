/*
 * func-name: ??0CREIMEEditBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c86a0
 * callers: 0x1006adb0, 0x100cac60, 0x100cb320, 0x100d8740, 0x1014a750
 * callees: 0x100c84a0
 */

CREIMEEditBox *__thiscall CREIMEEditBox::CREIMEEditBox(CREIMEEditBox *this, struct CREDialog *a2)
{
  _BYTE v4[28]; // [esp+8h] [ebp-28h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  CREEditBox::CREEditBox(this, 0);
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &CREIMEEditBox::`vftable';
  *((_DWORD *)this + 35) = 8;
  CREIMEEditBox::s_bEnableImeSystem = 1;
  *((_DWORD *)this + 199) = 0x80000000;
  *((_DWORD *)this + 203) = 0x80000000;
  v5 = 0;
  *((_DWORD *)this + 214) = 0;
  *((_DWORD *)this + 198) = -1124073473;
  *((_DWORD *)this + 200) = -65536;
  *((_DWORD *)this + 201) = -2142220208;
  *((_DWORD *)this + 202) = -3618616;
  *((_DWORD *)this + 204) = -1;
  *((_DWORD *)this + 205) = -2137088354;
  *((_DWORD *)this + 206) = -3618561;
  *((_DWORD *)this + 207) = -973078528;
  *((_DWORD *)this + 208) = -1;
  *((_DWORD *)this + 209) = -1;
  *((_DWORD *)this + 210) = -6908266;
  *((_DWORD *)this + 211) = -1;
  *((_DWORD *)this + 212) = -16777216;
  *((_DWORD *)this + 213) = -8355712;
  std::string::string(v4, "IMEEditBox");
  LOBYTE(v5) = 1;
  std::string::operator=((char *)this + 16, v4);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  return this;
}
