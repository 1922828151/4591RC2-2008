/*
 * func-name: ??0CTYChatIME@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cac60
 * callers: 0x1006bb30
 * callees: 0x100c86a0, 0x101a24ac
 */

CTYChatIME *__thiscall CTYChatIME::CTYChatIME(CTYChatIME *this, struct CREDialog *a2)
{
  _WORD *v3; // eax

  CREIMEEditBox::CREIMEEditBox(this, a2);
  *(_DWORD *)this = &CTYChatIME::`vftable';
  std::wstring::wstring((char *)this + 880);
  v3 = operator new(2u);
  *((_DWORD *)this + 227) = v3;
  *v3 = 0;
  *((_DWORD *)this + 229) = 0;
  *((_DWORD *)this + 232) = 0;
  *((_DWORD *)this + 230) = 0;
  *((_DWORD *)this + 228) = 1;
  *((_BYTE *)this + 924) = 1;
  return this;
}
