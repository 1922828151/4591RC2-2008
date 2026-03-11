/*
 * func-name: ??1CREEditBox@@UAE@XZ
 * func-address: 0x100c8630
 * callers: 0x1006ac30, 0x1006b0d0, 0x1006b0f0, 0x10073260, 0x100c86a0, 0x100c87d0, 0x100c8c60, 0x100c8d30, 0x100c8da0, 0x100c8e90, 0x100cad10
 * callees: 0x1006ab90, 0x100c7390, 0x101a253a
 */

void __thiscall CREEditBox::~CREEditBox(void **this)
{
  *this = &CREEditBox::`vftable';
  operator delete[](this[133]);
  if ( this[138] )
    CREEditBox::CUniBuffer::_ScriptStringFree(this + 138);
  CREControl::~CREControl((CREControl *)this);
}
