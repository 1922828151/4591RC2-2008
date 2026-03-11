/*
 * func-name: ?HandleKeyboard@CREEditBox@@UAE_NIIJ@Z
 * func-address: 0x100ac530
 * callers: 0x100af560
 * callees: 0x100a5680, 0x100a5870, 0x100a5910, 0x100a59e0, 0x100ac120, 0x100ac3f0
 */

bool __thiscall CREEditBox::HandleKeyboard(CREEditBox *this, unsigned int a2, unsigned int a3, int a4)
{
  bool v5; // bl
  int v7; // eax
  void (__stdcall *v8)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD); // ecx
  SHORT (__stdcall *v9)(int); // ebx
  int *v10; // edi
  bool v11; // sf
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  v5 = 0;
  if ( a2 == 256 )
  {
    if ( !*((_BYTE *)this + 753) )
      return 0;
    switch ( a3 )
    {
      case '#':
        CREEditBox::PlaceCaret(this, *((_DWORD *)this + 135));
        if ( GetKeyState(16) >= 0 )
          *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
        goto LABEL_34;
      case '$':
        CREEditBox::PlaceCaret(this, 0);
        if ( GetKeyState(16) >= 0 )
          *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
        CREEditBox::ResetCaretBlink(this);
        goto LABEL_11;
      case '%':
        v9 = GetKeyState;
        v10 = (int *)((char *)this + 748);
        v11 = GetKeyState(17) < 0;
        v12 = *((_DWORD *)this + 187);
        if ( v11 )
        {
          CREEditBox::CUniBuffer::GetPriorItemPos((void **)this + 133, v12, (int *)this + 187);
          CREEditBox::PlaceCaret(this, *v10);
          goto LABEL_32;
        }
        if ( v12 <= 0 )
          goto LABEL_32;
        v13 = v12 - 1;
        goto LABEL_31;
      case '&':
      case '(':
LABEL_11:
        v5 = 1;
        goto LABEL_40;
      case '\'':
        v9 = GetKeyState;
        v10 = (int *)((char *)this + 748);
        v11 = GetKeyState(17) < 0;
        v14 = *((_DWORD *)this + 187);
        if ( v11 )
        {
          CREEditBox::CUniBuffer::GetNextItemPos((void **)this + 133, v14, (int *)this + 187);
          CREEditBox::PlaceCaret(this, *v10);
        }
        else if ( v14 < *((_DWORD *)this + 135) )
        {
          v13 = v14 + 1;
LABEL_31:
          CREEditBox::PlaceCaret(this, v13);
        }
LABEL_32:
        if ( v9(16) >= 0 )
          *((_DWORD *)this + 189) = *v10;
        goto LABEL_34;
      case '-':
        if ( GetKeyState(17) >= 0 )
        {
          if ( GetKeyState(16) >= 0 )
            *((_BYTE *)this + 752) = *((_BYTE *)this + 752) == 0;
          else
            (*(void (__thiscall **)(CREEditBox *))(*(_DWORD *)this + 172))(this);
          return 0;
        }
        else
        {
          (*(void (__thiscall **)(CREEditBox *))(*(_DWORD *)this + 168))(this);
          return 0;
        }
      case '.':
        if ( *((_DWORD *)this + 187) == *((_DWORD *)this + 189) )
        {
          if ( !CREEditBox::CUniBuffer::RemoveChar((CREEditBox *)((char *)this + 532), *((_DWORD *)this + 187)) )
            goto LABEL_34;
        }
        else
        {
          CREEditBox::DeleteSelectionText(this);
        }
        v7 = *((_DWORD *)this + 28);
        v8 = *(void (__stdcall **)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD))(v7 + 736);
        if ( v8 )
          v8(v7, 1538, *((_DWORD *)this + 34), this, 0, 0);
LABEL_34:
        CREEditBox::ResetCaretBlink(this);
        v5 = 1;
LABEL_40:
        v15 = *((_DWORD *)this + 20);
        if ( v15 )
          (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v15 + 36))(0, *((float *)this + 40));
        break;
      default:
        v5 = a3 != 27;
        if ( a3 == 27 )
          return v5;
        goto LABEL_40;
    }
  }
  return v5;
}
