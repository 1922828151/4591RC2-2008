/*
 * func-name: ?SetStaticControlLast@CREDialog@@SAXPAVCREControl@@@Z
 * func-address: 0x10069a00
 * callers: none
 * callees: none
 */

void __cdecl CREDialog::SetStaticControlLast(struct CREControl *a1)
{
  CREDialog::s_pControlLast = a1;
}
