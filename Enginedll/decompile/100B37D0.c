/*
 * func-name: ?OnInit@CREListBox@@UAEJXZ
 * func-address: 0x100b37d0
 * callers: none
 * callees: 0x100ab680, 0x100b3480
 */

int __thiscall CREListBox::OnInit(CREDialog **this)
{
  int result; // eax

  result = CREDialog::InitControl(this[28], (struct CREControl *)(this + 141));
  if ( !result )
  {
    CREListBox::ApplyFontProperties((CREListBox *)this);
    return 0;
  }
  return result;
}
