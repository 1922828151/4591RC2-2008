/*
 * func-name: ?SetUnitScaleFloat@CRENumericEdit@@QAEXM@Z
 * func-address: 0x1006b1b0
 * callers: none
 * callees: none
 */

void __thiscall CRENumericEdit::SetUnitScaleFloat(CRENumericEdit *this, float a2)
{
  *((float *)this + 176) = ((double (__thiscall *)(CRENumericEdit *, float *, int))*(_DWORD *)(*(_DWORD *)this + 212))(
                             this,
                             &a2,
                             2);
}
