/*
 * func-name: ??1CTYChatIME@@UAE@XZ
 * func-address: 0x100cad10
 * callers: 0x1006bb40
 * callees: 0x1006ab90, 0x100c8630, 0x101a253a
 */

void __thiscall CTYChatIME::~CTYChatIME(void **this)
{
  *this = &CTYChatIME::`vftable';
  operator delete[](this[227]);
  if ( this[232] )
    CREEditBox::CUniBuffer::_ScriptStringFree(this + 232);
  std::wstring::~wstring(this + 220);
  *this = &CREIMEEditBox::`vftable';
  CREEditBox::~CREEditBox(this);
}
