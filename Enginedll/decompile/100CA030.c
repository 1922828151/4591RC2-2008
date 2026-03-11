/*
 * func-name: ??0CMLIMEEditBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100ca030
 * callers: 0x1006b8e0, 0x1014a750
 * callees: 0x100c8da0
 */

CMLIMEEditBox *__thiscall CMLIMEEditBox::CMLIMEEditBox(CMLIMEEditBox *this, struct CREDialog *a2)
{
  CMultiLineEB::CMultiLineEB(this, a2);
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &CMLIMEEditBox::`vftable';
  *((_DWORD *)this + 35) = 24;
  CMLIMEEditBox::s_bEnableImeSystem = 1;
  *((_DWORD *)this + 229) = 0x80000000;
  *((_DWORD *)this + 233) = 0x80000000;
  *((_DWORD *)this + 234) = -1;
  *((_DWORD *)this + 238) = -1;
  *((_DWORD *)this + 239) = -1;
  *((_DWORD *)this + 241) = -1;
  *((_DWORD *)this + 244) = 0;
  *((_DWORD *)this + 228) = -1124073473;
  *((_DWORD *)this + 230) = -65536;
  *((_DWORD *)this + 231) = -2142220208;
  *((_DWORD *)this + 232) = -3618616;
  *((_DWORD *)this + 235) = -2137088354;
  *((_DWORD *)this + 236) = -3618561;
  *((_DWORD *)this + 237) = -973078528;
  *((_DWORD *)this + 240) = -6908266;
  *((_DWORD *)this + 242) = -16777216;
  *((_DWORD *)this + 243) = -8355712;
  return this;
}
