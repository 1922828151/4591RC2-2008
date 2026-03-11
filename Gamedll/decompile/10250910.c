/*
 * func-name: sub_10250910
 * func-address: 0x10250910
 * callers: 0x100133d6
 * callees: 0x10010ab9, 0x10015fe6, 0x102c9d50
 */

void __thiscall sub_10250910(void **this)
{
  *this = &CAlarmMessage::`vftable';
  sub_10010AB9();
  sub_10015FE6();
  operator delete(this[143]);
  this[143] = 0;
  CREEditBox::CUniBuffer::~CUniBuffer((CREEditBox::CUniBuffer *)(this + 134));
  CREControl::~CREControl((CREControl *)this);
}
