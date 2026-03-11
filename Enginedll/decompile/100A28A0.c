/*
 * func-name: ?SetRange@CProgressBar@@QAEXMM@Z
 * func-address: 0x100a28a0
 * callers: none
 * callees: none
 */

void __thiscall CProgressBar::SetRange(CProgressBar *this, float a2, float a3)
{
  *((float *)this + 177) = a3;
  *((float *)this + 178) = a2;
}
