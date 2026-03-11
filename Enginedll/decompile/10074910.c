/*
 * func-name: ??0CTYChatIME@@QAE@ABV0@@Z
 * func-address: 0x10074910
 * callers: none
 * callees: 0x100734e0
 */

CTYChatIME *__thiscall CTYChatIME::CTYChatIME(CTYChatIME *this, const struct CTYChatIME *a2)
{
  CREIMEEditBox::CREIMEEditBox(this, a2);
  *(_DWORD *)this = &CTYChatIME::`vftable';
  std::wstring::wstring((char *)this + 880, (char *)a2 + 880);
  *((_DWORD *)this + 227) = *((_DWORD *)a2 + 227);
  *((_DWORD *)this + 228) = *((_DWORD *)a2 + 228);
  *((_DWORD *)this + 229) = *((_DWORD *)a2 + 229);
  *((_DWORD *)this + 230) = *((_DWORD *)a2 + 230);
  *((_DWORD *)this + 231) = *((_DWORD *)a2 + 231);
  *((_DWORD *)this + 232) = *((_DWORD *)a2 + 232);
  *((_DWORD *)this + 233) = *((_DWORD *)a2 + 233);
  *((_DWORD *)this + 234) = *((_DWORD *)a2 + 234);
  *((_DWORD *)this + 235) = *((_DWORD *)a2 + 235);
  *((_DWORD *)this + 236) = *((_DWORD *)a2 + 236);
  *((_DWORD *)this + 237) = *((_DWORD *)a2 + 237);
  return this;
}
