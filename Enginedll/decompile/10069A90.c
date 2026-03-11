/*
 * func-name: ?SetDlgCorruptType@CREDialog@@QAEXW4CorruptType@1@@Z
 * func-address: 0x10069a90
 * callers: none
 * callees: none
 */

int __thiscall CREDialog::SetDlgCorruptType(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[42] = a2;
  return result;
}
