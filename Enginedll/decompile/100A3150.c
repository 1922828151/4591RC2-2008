/*
 * func-name: ?OnMouseLeave@CREDialog@@IAEXPAVCREControl@@@Z
 * func-address: 0x100a3150
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::OnMouseLeave(CREDialog *this, struct CREControl *a2)
{
  if ( a2 )
    *((_BYTE *)a2 + 91) = 0;
}
