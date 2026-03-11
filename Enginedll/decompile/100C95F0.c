/*
 * func-name: ?MsgProc@CMultiLineEB@@UAE_NIIJ@Z
 * func-address: 0x100c95f0
 * callers: 0x100ca110
 * callees: 0x10019470, 0x10076ef0, 0x100a5680, 0x100ac120, 0x100ac3f0, 0x100b49b0, 0x100b4c40, 0x100c8fd0
 */

bool __thiscall CMultiLineEB::MsgProc(CMultiLineEB *this, unsigned int a2, int a3, int a4)
{
  bool result; // al
  unsigned int v6; // ebp
  CREEditBox::CUniBuffer **v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void (__stdcall *v12)(int, int, _DWORD, CMultiLineEB *, _DWORD, _DWORD); // ecx
  int v13; // [esp-Ch] [ebp-10h]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) || a2 != 258 )
    return 0;
  switch ( (__int16)a3 )
  {
    case 1:
      if ( *((_DWORD *)this + 189) != *((_DWORD *)this + 187) )
        goto LABEL_21;
      v13 = *((_DWORD *)this + 135);
      *((_DWORD *)this + 189) = 0;
      CREEditBox::PlaceCaret(this, v13);
      return 1;
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
      goto LABEL_21;
    case 3:
    case 24:
      (*(void (__thiscall **)(CMultiLineEB *))(*(_DWORD *)this + 168))(this);
      if ( (_WORD)a3 != 24 )
        goto LABEL_21;
      CREEditBox::DeleteSelectionText(this);
LABEL_19:
      v11 = *((_DWORD *)this + 28);
      v12 = *(void (__stdcall **)(int, int, _DWORD, CMultiLineEB *, _DWORD, _DWORD))(v11 + 736);
      if ( v12 )
        v12(v11, 1538, *((_DWORD *)this + 34), this, 0, 0);
      goto LABEL_21;
    case 8:
      if ( *((_BYTE *)this + 856) )
      {
        CMultiLineEB::DeleteSelectedText(this);
        return 1;
      }
      v6 = *((_DWORD *)this + 204);
      if ( std::vector<Model *>::size((_DWORD *)this + 223) <= v6 )
        goto LABEL_21;
      v7 = *(CREEditBox::CUniBuffer ***)std::vector<Model *>::operator[]((_DWORD *)this + 223, v6);
      v8 = *((_DWORD *)this + 187);
      if ( v8 )
      {
        v9 = v8 - 1;
        *((_DWORD *)this + 187) = v9;
        CREEditBox::CUniBuffer::RemoveChar(*v7, v9);
        CMultiLineEB::AdjustLines(this, *((_DWORD *)this + 204));
        result = 1;
      }
      else
      {
        v10 = *((_DWORD *)this + 204);
        if ( v10 )
        {
          *(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 223, v10 - 1) + 12) = 0;
          CMultiLineEB::AdjustLines(this, *((_DWORD *)this + 204) - 1);
          result = 1;
        }
        else
        {
LABEL_21:
          result = 1;
        }
      }
      break;
    case 22:
      (*(void (__thiscall **)(CMultiLineEB *))(*(_DWORD *)this + 172))(this);
      goto LABEL_19;
    default:
      CMultiLineEB::AddChar(this, a3);
      goto LABEL_19;
  }
  return result;
}
