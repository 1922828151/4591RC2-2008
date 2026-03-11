/*
 * func-name: ?InsertControl@CREDialog@@QAEJHPAVCREControl@@@Z
 * func-address: 0x100b3670
 * callers: none
 * callees: 0x100b3480, 0x100ce8d0
 */

int __thiscall CREDialog::InsertControl(CREDialog *this, int a2, struct CREControl *a3)
{
  struct CREControl *v3; // edi
  int result; // eax
  int v6; // eax

  v3 = a3;
  result = CREDialog::InitControl(this, a3);
  if ( result >= 0 )
  {
    *((_DWORD *)v3 + 28) = this;
    v6 = sub_100CE8D0(a2, &a3);
    return v6 >= 0 ? 0 : v6;
  }
  return result;
}
