/*
 * func-name: ??1CFormatedStatic@@UAE@XZ
 * func-address: 0x10155c80
 * callers: 0x100a2de0
 * callees: 0x10069fa0, 0x100a5550, 0x100d26d0
 */

void __thiscall CFormatedStatic::~CFormatedStatic(void **this)
{
  *this = &CFormatedStatic::`vftable';
  CREEditBox::CUniBuffer::~CUniBuffer(this + 178);
  sub_100D26D0((int)(this + 174));
  CREStatic::~CREStatic((CREStatic *)this);
}
