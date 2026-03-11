/*
 * func-name: ?HandleMouse@CRECheckBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a3860
 * callers: none
 * callees: 0x100971c0, 0x100a3050
 */

char __thiscall CRECheckBox::HandleMouse(
        CRECheckBox *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  struct Engine *v7; // eax
  CREDialog *v8; // ecx
  int v9; // eax

  if ( *((_BYTE *)this + 156) && *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    if ( a2 != 513 )
    {
      if ( a2 == 514 )
      {
        if ( !*((_BYTE *)this + 779) )
          return 0;
        *((_BYTE *)this + 779) = 0;
        ReleaseCapture();
        return 1;
      }
      if ( a2 != 515 )
        return 0;
    }
    if ( !(*(int (__thiscall **)(CRECheckBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
      return 0;
    *((_BYTE *)this + 779) = 1;
    v7 = Engine::Instance();
    SetCapture(*((HWND *)v7 + 35));
    if ( !*((_BYTE *)this + 92) )
    {
      v8 = (CREDialog *)*((_DWORD *)this + 28);
      if ( *((_BYTE *)v8 + 85) )
        CREDialog::RequestFocus(v8, this);
    }
    v9 = (*(int (__thiscall **)(CRECheckBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y);
    if ( v9 )
    {
      LOBYTE(v9) = *((_BYTE *)this + 816) == 0;
      (*(void (__thiscall **)(CRECheckBox *, int, int))(*(_DWORD *)this + 208))(this, v9, 1);
      return 1;
    }
    return 1;
  }
  return 0;
}
