/*
 * func-name: ?HandleKeyboard@CMultiLineEB@@UAE_NIIJ@Z
 * func-address: 0x100c5fd0
 * callers: none
 * callees: 0x10019470, 0x1001ea80, 0x10057340, 0x10076ef0, 0x100a5480, 0x100a5680, 0x100a56d0, 0x100a57a0, 0x100a57f0, 0x100a59e0, 0x100ac120, 0x100ae340, 0x100b49b0, 0x100b4c40, 0x100b55d0, 0x100ce720, 0x100d2c00, 0x101a2534
 */

char __thiscall CMultiLineEB::HandleKeyboard(CMultiLineEB *this, CREEditBox::CUniBuffer **a2, signed int a3, int a4)
{
  char v5; // bl
  char result; // al
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  BOOL v15; // ecx
  CREEditBox::CUniBuffer ***v16; // eax
  void ****v17; // eax
  void ***v18; // edi
  CREEditBox::CUniBuffer *v19; // ecx
  signed int v20; // eax
  unsigned int v21; // ebx
  CREEditBox::CUniBuffer ***v22; // eax
  void ****v23; // eax
  void ***v24; // edi
  CREEditBox::CUniBuffer *v25; // ecx
  signed int v26; // eax
  CREEditBox::CUniBuffer **v27; // eax
  CREEditBox::CUniBuffer **v28; // edi
  int v29; // eax
  struct REFontNode *Font; // eax
  _DWORD ***v31; // eax
  _DWORD **v32; // ebp
  int i; // edi
  int *v34; // eax
  int *v35; // eax
  unsigned int v36; // [esp-10h] [ebp-3Ch]
  unsigned int v37; // [esp-10h] [ebp-3Ch]
  unsigned int v38; // [esp-10h] [ebp-3Ch]
  int v39; // [esp-10h] [ebp-3Ch]
  int v40; // [esp+4h] [ebp-28h] BYREF
  int v41[2]; // [esp+8h] [ebp-24h] BYREF
  int v42; // [esp+10h] [ebp-1Ch] BYREF
  int v43; // [esp+18h] [ebp-14h] BYREF
  int v44; // [esp+28h] [ebp-4h]

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  v5 = 0;
  if ( a2 != (CREEditBox::CUniBuffer **)256 )
    return v5;
  switch ( a3 )
  {
    case 13:
      v27 = (CREEditBox::CUniBuffer **)operator new(0x10u);
      a2 = v27;
      v44 = 0;
      if ( v27 )
      {
        v28 = (CREEditBox::CUniBuffer **)sub_100CE720(v27);
        a2 = v28;
      }
      else
      {
        a2 = 0;
        v28 = 0;
      }
      v29 = **((_DWORD **)this + 30);
      v44 = -1;
      a3 = (signed int)v28;
      if ( v29 )
      {
        Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v29 + 4));
        *((_DWORD *)*v28 + 3) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        CREEditBox::CUniBuffer::Analyse(*v28);
      }
      v31 = (_DWORD ***)std::vector<Model *>::operator[]((_DWORD *)this + 223, *((_DWORD *)this + 204));
      v32 = *v31;
      CREEditBox::CUniBuffer::SetText(*v28, (const wchar_t *)(***v31 + 2 * *((_DWORD *)this + 187)));
      for ( i = (*v32)[2] - 1; i >= *((_DWORD *)this + 187); --i )
        CREEditBox::CUniBuffer::RemoveChar((CREEditBox::CUniBuffer *)*v32, i);
      if ( *((_BYTE *)v32 + 12) )
        *((_BYTE *)a2 + 12) = 1;
      *((_BYTE *)v32 + 12) = 1;
      v39 = ++*((_DWORD *)this + 204);
      *((_DWORD *)this + 187) = 0;
      v34 = std::vector<EditorVar>::begin((_DWORD *)this + 223, &v43);
      v35 = sub_10057340(v34, &v42, v39);
      sub_100D2C00((int)v41, *v35, (void *)v35[1], (int)&a3);
      if ( (*((_DWORD *)this + 144) - *((_DWORD *)this + 142)) / *((_DWORD *)this + 203) > (unsigned int)std::vector<Model *>::size((_DWORD *)this + 223) )
        ++*((_DWORD *)this + 208);
      CMultiLineEB::AdjustLines(this, *((_DWORD *)this + 204));
      CMultiLineEB::adjustPage(this);
      return 1;
    case 35:
      CREEditBox::PlaceCaret(this, *((_DWORD *)this + 135));
      if ( GetKeyState(16) >= 0 )
        *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
      goto LABEL_8;
    case 36:
      CREEditBox::PlaceCaret(this, 0);
      if ( GetKeyState(16) >= 0 )
        *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
      goto LABEL_8;
    case 37:
      v9 = *((_DWORD *)this + 187);
      if ( v9 <= 0 )
      {
        v10 = *((_DWORD *)this + 204);
        if ( v10 > 0 )
        {
          v11 = *(_DWORD *)(**(_DWORD **)std::vector<Model *>::operator[]((_DWORD *)this + 223, v10 - 1) + 8);
          *((_DWORD *)this + 187) = v11 - 1;
          if ( v11 - 1 < 0 )
            *((_DWORD *)this + 187) = 0;
          --*((_DWORD *)this + 204);
        }
        CMultiLineEB::adjustPage(this);
        return 1;
      }
      else
      {
        *((_DWORD *)this + 187) = v9 - 1;
        CMultiLineEB::adjustPage(this);
        return 1;
      }
    case 38:
      if ( *((_DWORD *)this + 204) )
      {
        v36 = *((_DWORD *)this + 204);
        a3 = 0;
        v16 = (CREEditBox::CUniBuffer ***)std::vector<Model *>::operator[]((_DWORD *)this + 223, v36);
        if ( CREEditBox::CUniBuffer::CPtoX(**v16, *((_DWORD *)this + 187), 0, &a3) >= 0 )
        {
          v37 = *((_DWORD *)this + 204) - 1;
          a2 = 0;
          v41[0] = 0;
          v17 = (void ****)std::vector<Model *>::operator[]((_DWORD *)this + 223, v37);
          v18 = *v17;
          if ( CREEditBox::CUniBuffer::XtoCP(**v17, a3, (int *)&a2, v41) >= 0 )
          {
            v19 = (CREEditBox::CUniBuffer *)*v18;
            v40 = 0;
            if ( CREEditBox::CUniBuffer::CPtoX(v19, (int)a2, (int *)1, &v40) < 0 || v40 > a3 )
            {
              v20 = (signed int)a2;
            }
            else
            {
              v20 = (signed int)a2 + 1;
              a2 = (CREEditBox::CUniBuffer **)((char *)a2 + 1);
            }
            if ( v20 > (int)(*v18)[2] )
              v20 = (signed int)(*v18)[2];
            --*((_DWORD *)this + 204);
            *((_DWORD *)this + 187) = v20;
          }
        }
      }
      return 1;
    case 39:
      if ( !std::vector<Model *>::size((_DWORD *)this + 223) )
        goto LABEL_38;
      v12 = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 223, *((_DWORD *)this + 204));
      v13 = *((_DWORD *)this + 187);
      if ( v13 >= *(_DWORD *)(*(_DWORD *)v12 + 8) )
      {
        v14 = *((_DWORD *)this + 204);
        if ( v14 < std::vector<Model *>::size((_DWORD *)this + 223) - 1 )
        {
          v15 = *(_DWORD *)(**(_DWORD **)std::vector<Model *>::operator[]((_DWORD *)this + 223, v14 + 1) + 8) != 0;
          ++*((_DWORD *)this + 204);
          *((_DWORD *)this + 187) = v15;
        }
        CMultiLineEB::adjustPage(this);
LABEL_38:
        result = 1;
      }
      else
      {
        *((_DWORD *)this + 187) = v13 + 1;
        CMultiLineEB::adjustPage(this);
        result = 1;
      }
      break;
    case 40:
      v21 = *((_DWORD *)this + 204);
      if ( v21 != std::vector<Model *>::size((_DWORD *)this + 223) - 1 )
      {
        a3 = 0;
        v22 = (CREEditBox::CUniBuffer ***)std::vector<Model *>::operator[]((_DWORD *)this + 223, v21);
        if ( CREEditBox::CUniBuffer::CPtoX(**v22, *((_DWORD *)this + 187), 0, &a3) >= 0 )
        {
          v38 = *((_DWORD *)this + 204) + 1;
          a2 = 0;
          v41[0] = 0;
          v23 = (void ****)std::vector<Model *>::operator[]((_DWORD *)this + 223, v38);
          v24 = *v23;
          if ( CREEditBox::CUniBuffer::XtoCP(**v23, a3, (int *)&a2, v41) >= 0 )
          {
            v25 = (CREEditBox::CUniBuffer *)*v24;
            v40 = 0;
            if ( CREEditBox::CUniBuffer::CPtoX(v25, (int)a2, (int *)1, &v40) < 0 || v40 > a3 )
            {
              v26 = (signed int)a2;
            }
            else
            {
              v26 = (signed int)a2 + 1;
              a2 = (CREEditBox::CUniBuffer **)((char *)a2 + 1);
            }
            if ( v26 > (int)(*v24)[2] )
              v26 = (signed int)(*v24)[2];
            ++*((_DWORD *)this + 204);
            *((_DWORD *)this + 187) = v26;
          }
        }
      }
      return 1;
    case 45:
      if ( GetKeyState(17) >= 0 )
      {
        if ( GetKeyState(16) >= 0 )
        {
          result = 0;
          *((_BYTE *)this + 752) = *((_BYTE *)this + 752) == 0;
        }
        else
        {
          (*(void (__thiscall **)(CMultiLineEB *))(*(_DWORD *)this + 172))(this);
          return 0;
        }
      }
      else
      {
        (*(void (__thiscall **)(CMultiLineEB *))(*(_DWORD *)this + 168))(this);
        return 0;
      }
      return result;
    case 46:
      if ( *((_BYTE *)this + 856) )
      {
        CMultiLineEB::DeleteSelectedText(this);
        CREEditBox::ResetCaretBlink(this);
        result = 1;
      }
      else
      {
        v7 = *((_DWORD *)this + 204);
        if ( std::vector<Model *>::size((_DWORD *)this + 223) > v7 )
        {
          v8 = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 223, v7);
          if ( *((_DWORD *)this + 187) == *(_DWORD *)(*(_DWORD *)v8 + 8) )
            *(_BYTE *)(v8 + 12) = 0;
          else
            CREEditBox::CUniBuffer::RemoveChar(*(CREEditBox::CUniBuffer **)v8, *((_DWORD *)this + 187));
          CMultiLineEB::AdjustLines(this, *((_DWORD *)this + 204));
        }
LABEL_8:
        CREEditBox::ResetCaretBlink(this);
        result = 1;
      }
      break;
    default:
      return a3 != 27;
  }
  return result;
}
