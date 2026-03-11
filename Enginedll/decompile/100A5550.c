/*
 * func-name: ??1CUniBuffer@CREEditBox@@QAE@XZ
 * func-address: 0x100a5550
 * callers: 0x100c84a0, 0x100c8c60, 0x10155c80, 0x10156140, 0x10157440, 0x10157630
 * callees: 0x1006ab90, 0x101a253a
 */

void __thiscall CREEditBox::CUniBuffer::~CUniBuffer(void **this)
{
  operator delete[](*this);
  if ( this[5] )
    CREEditBox::CUniBuffer::_ScriptStringFree(this + 5);
}
