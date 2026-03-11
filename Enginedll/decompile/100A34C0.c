/*
 * func-name: ?HandleMouse@CREButton@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a34c0
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a3100
 */

char __thiscall CREButton::HandleMouse(CREButton *this, unsigned int a2, struct tagPOINT a3, unsigned int a4, int a5)
{
  int v7; // ecx
  int v8; // eax
  void (__stdcall *v9)(int, int, _DWORD, CREButton *, _DWORD, _DWORD); // ecx
  struct Engine *v10; // eax
  int v11; // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( a2 == 513 )
  {
LABEL_17:
    if ( !(*(int (__thiscall **)(CREButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
      return 0;
    *((_BYTE *)this + 779) = 1;
    v10 = Engine::Instance();
    SetCapture(*((HWND *)v10 + 35));
    if ( !*((_BYTE *)this + 92) )
      CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
    v11 = *((_DWORD *)this + 20);
    if ( v11 )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v11 + 36))(0, *((float *)this + 40));
    return 1;
  }
  if ( a2 != 514 )
  {
    if ( a2 != 515 )
      return 0;
    goto LABEL_17;
  }
  if ( !*((_BYTE *)this + 779) )
    return 0;
  *((_BYTE *)this + 779) = 0;
  ReleaseCapture();
  if ( !*(_BYTE *)(*((_DWORD *)this + 28) + 85) )
    CREDialog::ClearFocus();
  if ( (*(int (__thiscall **)(CREButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, a3.x, a3.y) )
  {
    v7 = *((_DWORD *)this + 18);
    if ( v7 )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 36))(0, *((float *)this + 40));
    v8 = *((_DWORD *)this + 28);
    v9 = *(void (__stdcall **)(int, int, _DWORD, CREButton *, _DWORD, _DWORD))(v8 + 736);
    if ( v9 )
      v9(v8, 257, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
