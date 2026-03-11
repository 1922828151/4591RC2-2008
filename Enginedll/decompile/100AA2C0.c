/*
 * func-name: ?HandleMouse@CRERadioButton@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100aa2c0
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a9c70
 */

char __thiscall CRERadioButton::HandleMouse(
        CRERadioButton *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  int v7; // eax
  void (__stdcall *v8)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD); // ecx
  struct Engine *v9; // eax
  CREDialog *v10; // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( a2 == 513 )
  {
LABEL_13:
    if ( !(*(int (__thiscall **)(CRERadioButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
      return 0;
    *((_BYTE *)this + 779) = 1;
    v9 = Engine::Instance();
    SetCapture(*((HWND *)v9 + 35));
    if ( !*((_BYTE *)this + 92) )
    {
      v10 = (CREDialog *)*((_DWORD *)this + 28);
      if ( *((_BYTE *)v10 + 85) )
        CREDialog::RequestFocus(v10, this);
    }
    return 1;
  }
  if ( a2 != 514 )
  {
    if ( a2 != 515 )
      return 0;
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 779) )
    return 0;
  *((_BYTE *)this + 779) = 0;
  ReleaseCapture();
  if ( (*(int (__thiscall **)(CRERadioButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
  {
    CREDialog::ClearRadioButtonGroup(*((CREDialog **)this + 28), *((_DWORD *)this + 213));
    v7 = *((_DWORD *)this + 28);
    *((_BYTE *)this + 816) = *((_BYTE *)this + 816) == 0;
    v8 = *(void (__stdcall **)(int, int, _DWORD, CRERadioButton *, _DWORD, _DWORD))(v7 + 736);
    if ( v8 )
      v8(v7, 769, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
