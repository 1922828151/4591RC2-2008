/*
 * func-name: ?SetNextDialog@CREDialog@@QAEXPAV1@@Z
 * func-address: 0x100a30d0
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::SetNextDialog(CREDialog *this, struct CREDialog *a2)
{
  if ( a2 )
  {
    *((_DWORD *)this + 932) = a2;
    *((_DWORD *)a2 + 933) = this;
  }
  else
  {
    *((_DWORD *)this + 932) = this;
    *((_DWORD *)this + 933) = this;
  }
}
