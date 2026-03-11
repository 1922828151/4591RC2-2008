/*
 * func-name: ?SetLocation@CTYDialog@@QAEXHH@Z
 * func-address: 0x1006b730
 * callers: 0x100b2ea0
 * callees: 0x100af0a0
 */

void __thiscall CTYDialog::SetLocation(CTYDialog *this, int a2, int a3)
{
  *((_DWORD *)this + 173) = a2;
  *((_DWORD *)this + 174) = a3;
  CTYDialog::MoveNestedDialog(this);
}
