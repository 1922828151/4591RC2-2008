/*
 * func-name: ?SetMotionSpeed@CTYDialog@@QAEXM@Z
 * func-address: 0x1006b7f0
 * callers: none
 * callees: none
 */

void __thiscall CTYDialog::SetMotionSpeed(CTYDialog *this, float a2)
{
  *((_BYTE *)this + 3868) = 1;
  *((float *)this + 946) = a2;
}
