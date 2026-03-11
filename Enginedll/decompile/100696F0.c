/*
 * func-name: ?GetIMEEditBox@CREDialog@@QAEPAVCREIMEEditBox@@H@Z
 * func-address: 0x100696f0
 * callers: none
 * callees: 0x100a9b60
 */

struct CREIMEEditBox *__thiscall CREDialog::GetIMEEditBox(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 8u);
}
