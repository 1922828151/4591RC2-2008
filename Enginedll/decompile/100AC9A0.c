/*
 * func-name: ?MsgProc@CREEditBox@@UAE_NIIJ@Z
 * func-address: 0x100ac9a0
 * callers: 0x100acec0
 * callees: 0x100a5620, 0x100a5680, 0x100a59e0, 0x100ac120, 0x100ac3f0
 */

bool __thiscall CREEditBox::MsgProc(CREEditBox *this, unsigned int a2, wchar_t a3, int a4)
{
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD); // ecx
  bool result; // al
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD); // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  void (__stdcall *v15)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD); // ecx
  int v16; // [esp-8h] [ebp-Ch]
  int v17; // [esp-8h] [ebp-Ch]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) || a2 != 258 )
    return 0;
  switch ( a3 )
  {
    case 1u:
      if ( *((_DWORD *)this + 189) != *((_DWORD *)this + 187) )
        goto LABEL_32;
      v17 = *((_DWORD *)this + 135);
      *((_DWORD *)this + 189) = 0;
      CREEditBox::PlaceCaret(this, v17);
      return 1;
    case 2u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x17u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
      goto LABEL_32;
    case 3u:
    case 0x18u:
      (*(void (__thiscall **)(CREEditBox *))(*(_DWORD *)this + 168))(this);
      if ( a3 != 24 )
        goto LABEL_32;
      CREEditBox::DeleteSelectionText(this);
      goto LABEL_30;
    case 8u:
      v5 = *((_DWORD *)this + 187);
      if ( v5 == *((_DWORD *)this + 189) )
      {
        if ( v5 <= 0 )
          goto LABEL_12;
        CREEditBox::PlaceCaret(this, v5 - 1);
        v16 = *((_DWORD *)this + 187);
        *((_DWORD *)this + 189) = v16;
        CREEditBox::CUniBuffer::RemoveChar((CREEditBox *)((char *)this + 532), v16);
      }
      else
      {
        CREEditBox::DeleteSelectionText(this);
      }
      v6 = *((_DWORD *)this + 28);
      v7 = *(void (__stdcall **)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD))(v6 + 736);
      if ( v7 )
        v7(v6, 1538, *((_DWORD *)this + 34), this, 0, 0);
LABEL_12:
      CREEditBox::ResetCaretBlink(this);
      return 1;
    case 0xDu:
      v9 = *((_DWORD *)this + 28);
      v10 = *(void (__stdcall **)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD))(v9 + 736);
      if ( !v10 )
        goto LABEL_32;
      v10(v9, 1537, *((_DWORD *)this + 34), this, 0, 0);
      return 1;
    case 0x16u:
      (*(void (__thiscall **)(CREEditBox *))(*(_DWORD *)this + 172))(this);
      goto LABEL_30;
    default:
      if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) )
        CREEditBox::DeleteSelectionText(this);
      if ( !*((_BYTE *)this + 752) )
      {
        v11 = *((_DWORD *)this + 187);
        if ( v11 < *((_DWORD *)this + 135) )
        {
          v12 = *((_DWORD *)this + 133);
          *((_BYTE *)this + 548) = 1;
          *(_WORD *)(v12 + 2 * v11) = a3;
LABEL_28:
          CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187) + 1);
          *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
          goto LABEL_29;
        }
      }
      v13 = *((_DWORD *)this + 195);
      if ( (v13 == -1 || *((_DWORD *)this + 135) < v13)
        && CREEditBox::CUniBuffer::InsertChar((CREEditBox *)((char *)this + 532), *((_DWORD *)this + 187), a3) )
      {
        goto LABEL_28;
      }
LABEL_29:
      CREEditBox::ResetCaretBlink(this);
LABEL_30:
      v14 = *((_DWORD *)this + 28);
      v15 = *(void (__stdcall **)(int, int, _DWORD, CREEditBox *, _DWORD, _DWORD))(v14 + 736);
      if ( v15 )
        v15(v14, 1538, *((_DWORD *)this + 34), this, 0, 0);
LABEL_32:
      result = 1;
      break;
  }
  return result;
}
