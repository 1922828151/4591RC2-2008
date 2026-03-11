/*
 * func-name: sub_10267420
 * func-address: 0x10267420
 * callers: 0x1001287d
 * callees: 0x1000b55a
 */

_DWORD *__thiscall sub_10267420(_DWORD *this, struct CREDialog *a2)
{
  CREControl::CREControl((CREControl *)this, a2);
  *this = &CDeadMessage::`vftable';
  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)(this + 134), 1);
  this[141] = sub_1000B55A();
  this[142] = 0;
  return this;
}
