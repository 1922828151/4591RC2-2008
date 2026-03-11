/*
 * func-name: ?GetStaticControlFocus@CREDialog@@SAPAVCREControl@@XZ
 * func-address: 0x10069710
 * callers: none
 * callees: none
 */

struct CREControl *__cdecl CREDialog::GetStaticControlFocus()
{
  return CREDialog::s_pControlFocus;
}
