/*
 * func-name: ?HandleMouse@CRENumericButton@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a6880
 * callers: none
 * callees: 0x1006b1f0, 0x1006b230, 0x100971c0, 0x100a3050, 0x100a3100
 */

char __userpurge CRENumericButton::HandleMouse@<al>(
        CRENumericButton *this@<ecx>,
        int a2@<edi>,
        unsigned int a3,
        struct tagPOINT a4,
        unsigned int a5,
        int a6)
{
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  void (__stdcall *v11)(int, int, _DWORD, CRENumericButton *, _DWORD, _DWORD); // ecx
  CRENumericEdit *v12; // edi
  struct Engine *v13; // eax
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+14h] [ebp+4h]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( a3 == 513 )
    goto LABEL_22;
  if ( a3 != 514 )
  {
    if ( a3 != 515 )
      return 0;
LABEL_22:
    if ( !(*(int (__thiscall **)(CRENumericButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, a4.x, a4.y) )
      return 0;
    v12 = (CRENumericEdit *)*((_DWORD *)this + 205);
    if ( *((_BYTE *)this + 816) )
    {
      if ( !CRENumericEdit::ValueMax(v12) )
      {
LABEL_27:
        *((_BYTE *)this + 779) = 1;
        v13 = Engine::Instance();
        SetCapture(*((HWND *)v13 + 35));
        if ( !*((_BYTE *)this + 92) )
          CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
      }
    }
    else if ( !CRENumericEdit::ValueMin(v12) )
    {
      goto LABEL_27;
    }
    return 1;
  }
  if ( !*((_BYTE *)this + 779) )
    return 0;
  v8 = *((_DWORD *)this + 205);
  if ( *(_BYTE *)(v8 + 696) )
  {
    v14 = *(float *)(v8 + 704);
    if ( !*((_BYTE *)this + 816) )
      v14 = -v14;
    v15 = v14 + *(float *)(v8 + 712);
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)v8 + 204))(LODWORD(v15), a2);
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 700);
    if ( !*((_BYTE *)this + 816) )
      v9 = -v9;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 200))(v8, *(_DWORD *)(v8 + 708) + v9, a2);
  }
  *((_BYTE *)this + 779) = 0;
  ReleaseCapture();
  if ( !*(_BYTE *)(*((_DWORD *)this + 28) + 85) )
    CREDialog::ClearFocus();
  if ( (*(int (__thiscall **)(CRENumericButton *, LONG))(*(_DWORD *)this + 124))(this, a4.y) )
  {
    v10 = *((_DWORD *)this + 28);
    v11 = *(void (__stdcall **)(int, int, _DWORD, CRENumericButton *, _DWORD, _DWORD))(v10 + 736);
    if ( v11 )
      v11(v10, 257, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
