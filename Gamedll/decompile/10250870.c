/*
 * func-name: sub_10250870
 * func-address: 0x10250870
 * callers: 0x1000413d
 * callees: 0x100185fc
 */

_DWORD *__thiscall sub_10250870(_DWORD *this, struct CREDialog *a2)
{
  CREControl::CREControl((CREControl *)this, a2);
  *this = &CAlarmMessage::`vftable';
  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)(this + 134), 1);
  this[141] = 0;
  this[143] = sub_100185FC();
  this[144] = 0;
  this[146] = 0;
  this[147] = 0;
  this[148] = 0;
  return this;
}
