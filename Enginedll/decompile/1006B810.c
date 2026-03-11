/*
 * func-name: ?IsInMotion@CTYDialog@@QAE_NH@Z
 * func-address: 0x1006b810
 * callers: none
 * callees: none
 */

bool __thiscall CTYDialog::IsInMotion(CTYDialog *this, int a2)
{
  return (a2 & *((_DWORD *)this + 943)) == a2;
}
