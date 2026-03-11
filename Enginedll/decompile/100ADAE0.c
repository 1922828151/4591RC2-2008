/*
 * func-name: ?MsgProc@CRENumericEditBox@@UAE_NIIJ@Z
 * func-address: 0x100adae0
 * callers: none
 * callees: 0x100a5620, 0x100a5680, 0x100a59e0, 0x100ac120, 0x100ac3f0
 */

bool __thiscall CRENumericEditBox::MsgProc(CRENumericEditBox *this, unsigned int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD); // ecx
  bool result; // al
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD); // ecx
  int v11; // eax
  void (__stdcall *v12)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD); // ecx
  _BYTE *v13; // ebp
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // edi
  int v17; // eax
  void (__stdcall *v18)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD); // ecx
  int v19; // [esp-8h] [ebp-Ch]
  int v20; // [esp-8h] [ebp-Ch]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) || a2 != 258 )
    return 0;
  switch ( (__int16)a3 )
  {
    case 1:
      if ( *((_DWORD *)this + 189) != *((_DWORD *)this + 187) )
        goto LABEL_36;
      v20 = *((_DWORD *)this + 135);
      *((_DWORD *)this + 189) = 0;
      CREEditBox::PlaceCaret(this, v20);
      return 1;
    case 3:
    case 24:
      (*(void (__thiscall **)(CRENumericEditBox *))(*(_DWORD *)this + 168))(this);
      if ( (_WORD)a3 != 24 )
        goto LABEL_36;
      CREEditBox::DeleteSelectionText(this);
      goto LABEL_15;
    case 8:
      v5 = *((_DWORD *)this + 187);
      if ( v5 == *((_DWORD *)this + 189) )
      {
        if ( v5 <= 0 )
          goto LABEL_12;
        CREEditBox::PlaceCaret(this, v5 - 1);
        v19 = *((_DWORD *)this + 187);
        *((_DWORD *)this + 189) = v19;
        CREEditBox::CUniBuffer::RemoveChar((CRENumericEditBox *)((char *)this + 532), v19);
      }
      else
      {
        CREEditBox::DeleteSelectionText(this);
      }
      v6 = *((_DWORD *)this + 28);
      v7 = *(void (__stdcall **)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD))(v6 + 736);
      if ( v7 )
        v7(v6, 1538, *((_DWORD *)this + 34), this, 0, 0);
LABEL_12:
      CREEditBox::ResetCaretBlink(this);
      return 1;
    case 13:
      v11 = *((_DWORD *)this + 28);
      v12 = *(void (__stdcall **)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD))(v11 + 736);
      if ( !v12 )
        goto LABEL_36;
      v12(v11, 1537, *((_DWORD *)this + 34), this, 0, 0);
      return 1;
    case 22:
      (*(void (__thiscall **)(CRENumericEditBox *))(*(_DWORD *)this + 172))(this);
LABEL_15:
      v9 = *((_DWORD *)this + 28);
      v10 = *(void (__stdcall **)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD))(v9 + 736);
      if ( !v10 )
        goto LABEL_36;
      v10(v9, 1538, *((_DWORD *)this + 34), this, 0, 0);
      return 1;
    default:
      v13 = (_BYTE *)*((_DWORD *)this + 198);
      if ( v13[696] )
        goto LABEL_25;
      if ( !(*(unsigned __int8 (__thiscall **)(CRENumericEditBox *, int))(*(_DWORD *)this + 180))(this, a3) )
        goto LABEL_36;
      if ( !v13[696] )
        goto LABEL_26;
LABEL_25:
      if ( !(*(unsigned __int8 (__thiscall **)(CRENumericEditBox *, int, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
              this,
              a3,
              *((_DWORD *)this + 133),
              0) )
        goto LABEL_36;
LABEL_26:
      if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) )
        CREEditBox::DeleteSelectionText(this);
      if ( *((_BYTE *)this + 752) || (v14 = *((_DWORD *)this + 187), v14 >= *((_DWORD *)this + 135)) )
      {
        v16 = (_DWORD *)((char *)this + 532);
        if ( !CREEditBox::CUniBuffer::InsertChar((CRENumericEditBox *)((char *)this + 532), *((_DWORD *)this + 187), a3) )
          goto LABEL_33;
      }
      else
      {
        v15 = *((_DWORD *)this + 133);
        v16 = (_DWORD *)((char *)this + 532);
        *((_BYTE *)this + 548) = 1;
        *(_WORD *)(v15 + 2 * v14) = a3;
      }
      CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187) + 1);
      *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
LABEL_33:
      CREEditBox::ResetCaretBlink(this);
      v17 = *((_DWORD *)this + 28);
      v18 = *(void (__stdcall **)(int, int, _DWORD, CRENumericEditBox *, _DWORD, _DWORD))(v17 + 736);
      if ( v18 )
        v18(v17, 1538, *((_DWORD *)this + 34), this, 0, 0);
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v13 + 208))(v13, *v16, 0);
LABEL_36:
      result = 1;
      break;
  }
  return result;
}
