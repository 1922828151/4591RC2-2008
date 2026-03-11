/*
 * func-name: ?HandleKeyboard@CInputBox@@UAE_NIIJ@Z
 * func-address: 0x100a65b0
 * callers: none
 * callees: 0x100971c0, 0x100a3050
 */

char __thiscall CInputBox::HandleKeyboard(CInputBox *this, unsigned int a2, unsigned int a3, int a4)
{
  struct Engine *v5; // eax

  if ( !*((_BYTE *)this + 156)
    || !*((_BYTE *)this + 90)
    || *((_BYTE *)this + 89)
    || *((_BYTE *)this + 92)
    || a2 != 256
    || a3 != 32 )
  {
    return 0;
  }
  *((_BYTE *)this + 696) = 1;
  v5 = Engine::Instance();
  SetCapture(*((HWND *)v5 + 35));
  if ( !*((_BYTE *)this + 92) )
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
  return 1;
}
