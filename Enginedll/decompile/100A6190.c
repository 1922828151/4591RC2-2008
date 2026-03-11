/*
 * func-name: ?HandleMouse@CPictureLabel@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a6190
 * callers: none
 * callees: 0x100971c0, 0x100a3050
 */

char __thiscall CPictureLabel::HandleMouse(
        CPictureLabel *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  struct Engine *v6; // eax
  int v7; // eax
  void (__stdcall *v8)(int, int, _DWORD, CPictureLabel *, _DWORD, _DWORD); // ecx
  struct Engine *v10; // eax
  int v11; // eax
  void (__stdcall *v12)(int, int, _DWORD, CPictureLabel *, _DWORD, _DWORD); // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) || *((_BYTE *)this + 92) )
    return 0;
  if ( a2 != 513 )
  {
    if ( a2 == 515
      && *((_BYTE *)this + 1032)
      && (*(int (__thiscall **)(CPictureLabel *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
    {
      v6 = Engine::Instance();
      SetCapture(*((HWND *)v6 + 35));
      if ( !*((_BYTE *)this + 92) )
        CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
      v7 = *((_DWORD *)this + 28);
      if ( v7 )
      {
        v8 = *(void (__stdcall **)(int, int, _DWORD, CPictureLabel *, _DWORD, _DWORD))(v7 + 736);
        if ( v8 )
          v8(v7, 515, *((_DWORD *)this + 34), this, 0, 0);
      }
      return 1;
    }
    return 0;
  }
  if ( !*((_BYTE *)this + 1032)
    || !(*(int (__thiscall **)(CPictureLabel *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
  {
    return 0;
  }
  v10 = Engine::Instance();
  SetCapture(*((HWND *)v10 + 35));
  if ( !*((_BYTE *)this + 92) )
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
  v11 = *((_DWORD *)this + 28);
  if ( v11 )
  {
    v12 = *(void (__stdcall **)(int, int, _DWORD, CPictureLabel *, _DWORD, _DWORD))(v11 + 736);
    if ( v12 )
      v12(v11, 257, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
