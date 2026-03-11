/*
 * func-name: ?MsgProc@CInputBox@@UAE_NIIJ@Z
 * func-address: 0x100a66f0
 * callers: none
 * callees: none
 */

char __thiscall CInputBox::MsgProc(CInputBox *this, unsigned int a2, unsigned int a3, int a4)
{
  if ( !*((_BYTE *)this + 92) )
    return 0;
  if ( a2 == 256 && a3 == 27 )
  {
    ReleaseCapture();
    if ( CREDialog::s_pControlFocus )
    {
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)CREDialog::s_pControlFocus + 104))(CREDialog::s_pControlFocus);
      CREDialog::s_pControlFocus = 0;
    }
  }
  return 1;
}
