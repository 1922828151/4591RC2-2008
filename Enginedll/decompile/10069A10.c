/*
 * func-name: ?SetStaticControlPressed@CREDialog@@SAXPAVCREControl@@@Z
 * func-address: 0x10069a10
 * callers: none
 * callees: none
 */

void __cdecl CREDialog::SetStaticControlPressed(struct CREControl *a1)
{
  CREDialog::s_pControlPressed = a1;
}
