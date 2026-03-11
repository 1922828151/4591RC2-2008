/*
 * func-name: ?OnInit@CRENumericEdit@@UAEJXZ
 * func-address: 0x100b3f50
 * callers: none
 * callees: 0x100b3480
 */

int __thiscall CRENumericEdit::OnInit(CREDialog **this)
{
  int result; // eax

  result = CREDialog::InitControl(this[28], this[190]);
  if ( !result )
  {
    result = CREDialog::InitControl(this[28], this[191]);
    if ( !result )
    {
      result = CREDialog::InitControl(this[28], this[192]);
      if ( !result )
      {
        (*((void (__thiscall **)(CREDialog **))*this + 49))(this);
        return 0;
      }
    }
  }
  return result;
}
