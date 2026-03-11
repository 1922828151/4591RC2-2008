/*
 * func-name: ?SetCorruptAct@CTYDialog@@QAEX_N@Z
 * func-address: 0x100a7990
 * callers: 0x10149d00
 * callees: none
 */

void __thiscall CTYDialog::SetCorruptAct(CTYDialog *this, bool a2)
{
  if ( *((_BYTE *)this + 3769) != a2 )
  {
    *((_BYTE *)this + 3769) = a2;
    if ( a2 )
    {
      ++CTYDialog::m_iDialogCorruptAct;
    }
    else if ( --CTYDialog::m_iDialogCorruptAct < 0 )
    {
      CTYDialog::m_iHasDialogHasInput = 0;
    }
  }
}
