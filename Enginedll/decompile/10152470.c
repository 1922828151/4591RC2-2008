/*
 * func-name: ?CalcScrollBar@CControlBoxList@@QAEXXZ
 * func-address: 0x10152470
 * callers: 0x10155480, 0x101556c0, 0x10157340, 0x101573a0
 * callees: 0x10019470, 0x100a3c30, 0x100a3d40, 0x100ab130, 0x101579b0
 */

void __thiscall CControlBoxList::CalcScrollBar(CControlBoxList *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  CREScrollBar *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  unsigned int i; // edi
  int v13; // ecx
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  CREScrollBar *v17; // edi
  int v18; // ecx
  CREScrollBar *v19; // edi

  if ( *((_DWORD *)this + 141) )
  {
    if ( *((_DWORD *)this + 142) != 1 )
    {
      if ( *((_DWORD *)this + 142) != 2 )
        return;
      v2 = 0;
      if ( *((_DWORD *)this + 27) > *((_DWORD *)this + 138)
        && !(unsigned __int8)std::vector<Model *>::empty((char *)this + 532) )
      {
        v3 = *((_DWORD *)this + 27)
           - *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 133, 0) + 108);
        v2 = v3
           / (*((_DWORD *)this + 139)
            + *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 133, 0) + 108))
           + 1;
      }
      v4 = *((_DWORD *)this + 134);
      if ( v4 )
        v5 = (*((_DWORD *)this + 135) - v4) >> 2;
      else
        v5 = 0;
      CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 141), 0, v5);
      v6 = (CREScrollBar *)*((_DWORD *)this + 141);
      *((_DWORD *)v6 + 151) = v2;
      CREScrollBar::Cap(v6);
      CREScrollBar::UpdateThumbRect(v6);
      v7 = *((_DWORD *)this + 134);
      if ( v7 )
        v8 = (*((_DWORD *)this + 135) - v7) >> 2;
      else
        v8 = 0;
      if ( *((_DWORD *)this + 140) > (unsigned int)(v8 - v2) )
      {
        if ( v7 )
          v9 = (*((_DWORD *)this + 135) - v7) >> 2;
        else
          v9 = 0;
        *((_DWORD *)this + 140) = v9 - v2;
      }
      goto LABEL_29;
    }
    v10 = *((_DWORD *)this + 134);
    if ( v10 && (*((_DWORD *)this + 135) - v10) >> 2 )
    {
      v11 = 0;
      for ( i = 0; ; ++i )
      {
        v13 = *((_DWORD *)this + 134);
        if ( !v13 || i >= (*((_DWORD *)this + 135) - v13) >> 2 )
          break;
        v11 += *((_DWORD *)this + 139) + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * i) + 108);
      }
      v14 = v11 - *((_DWORD *)this + 139);
      v15 = *((_DWORD *)this + 143);
      v16 = v14 / v15;
      if ( v14 % v15 )
        ++v16;
      CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 141), 0, v16);
      v17 = (CREScrollBar *)*((_DWORD *)this + 141);
      *((_DWORD *)v17 + 151) = *((_DWORD *)this + 27) / *((_DWORD *)this + 143);
      CREScrollBar::Cap(v17);
      CREScrollBar::UpdateThumbRect(v17);
      v18 = v14 / *((_DWORD *)this + 143) - *((_DWORD *)this + 27) / *((_DWORD *)this + 143);
      if ( *((_DWORD *)this + 140) > v18 )
        *((_DWORD *)this + 140) = v18;
LABEL_29:
      v19 = (CREScrollBar *)*((_DWORD *)this + 141);
      *((_DWORD *)v19 + 150) = *((_DWORD *)this + 140);
      CREScrollBar::Cap(v19);
      CREScrollBar::UpdateThumbRect(v19);
    }
  }
}
