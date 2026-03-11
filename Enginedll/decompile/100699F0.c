/*
 * func-name: ?SetStaticControlFocus@CREDialog@@SAXPAVCREControl@@@Z
 * func-address: 0x100699f0
 * callers: none
 * callees: none
 */

void __cdecl CREDialog::SetStaticControlFocus(struct CREControl *a1)
{
  CREDialog::s_pControlFocus = a1;
}
