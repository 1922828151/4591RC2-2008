/*
 * func-name: ??1CPasswordEB@@UAE@XZ
 * func-address: 0x100c8d30
 * callers: 0x1006b380
 * callees: 0x1006ab90, 0x100c8630, 0x101a253a
 */

void __thiscall CPasswordEB::~CPasswordEB(void **this)
{
  *this = &CPasswordEB::`vftable';
  operator delete[](this[198]);
  if ( this[203] )
    CREEditBox::CUniBuffer::_ScriptStringFree(this + 203);
  CREEditBox::~CREEditBox(this);
}
