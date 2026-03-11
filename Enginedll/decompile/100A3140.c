/*
 * func-name: ?OnMouseEnter@CREDialog@@IAEXPAVCREControl@@@Z
 * func-address: 0x100a3140
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::OnMouseEnter(CREDialog *this, struct CREControl *a2)
{
  if ( a2 )
    *((_BYTE *)a2 + 91) = 1;
}
