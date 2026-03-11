/*
 * func-name: ?SetRange@CProgressBTN@@QAEXMM@Z
 * func-address: 0x100a2a90
 * callers: none
 * callees: none
 */

void __thiscall CProgressBTN::SetRange(CProgressBTN *this, float a2, float a3)
{
  *((float *)this + 206) = a3;
  *((float *)this + 207) = a2;
}
