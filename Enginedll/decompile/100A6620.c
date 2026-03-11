/*
 * func-name: ?HandleMouse@CInputBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a6620
 * callers: none
 * callees: 0x100971c0, 0x100a3050
 */

char __thiscall CInputBox::HandleMouse(CInputBox *this, unsigned int a2, struct tagPOINT a3, unsigned int a4, int a5)
{
  struct Engine *v6; // eax
  int v7; // ecx

  if ( !*((_BYTE *)this + 156)
    || !*((_BYTE *)this + 90)
    || *((_BYTE *)this + 89)
    || *((_BYTE *)this + 92)
    || a2 != 513 && a2 != 515
    || !(*(int (__thiscall **)(CInputBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
  {
    return 0;
  }
  *((_BYTE *)this + 696) = 1;
  v6 = Engine::Instance();
  SetCapture(*((HWND *)v6 + 35));
  if ( !*((_BYTE *)this + 92) )
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
  v7 = *((_DWORD *)this + 18);
  if ( v7 )
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 36))(0, *((float *)this + 40));
  return 1;
}
