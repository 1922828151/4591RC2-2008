/*
 * func-name: ?Render@CRECheckBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bc320
 * callers: 0x100c0ad0
 * callees: 0x100a5e50, 0x100b5280, 0x100b5e40, 0x100b6890
 */

void __thiscall CRECheckBox::Render(CRECheckBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  struct tagRECT *v5; // ebx
  int v6; // eax
  int v7; // edi
  int *v8; // edi
  int v9; // ebx
  int v10; // ebp
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  const wchar_t *v14; // eax
  unsigned int v15; // [esp+14h] [ebp-4h]

  v4 = *((_DWORD *)this + 205);
  v5 = (struct tagRECT *)((char *)this + 820);
  v15 = 0;
  if ( v4 == *((_DWORD *)this + 207) && !v4 )
    (*(void (__thiscall **)(CRECheckBox *))(*(_DWORD *)this + 164))(this);
  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
  {
    v15 = 2;
  }
  else if ( *((_BYTE *)this + 156) )
  {
    if ( *((_BYTE *)this + 779) )
    {
      v15 = 5;
    }
    else if ( *((_BYTE *)this + 91) )
    {
      v15 = 4;
    }
    else if ( *((_BYTE *)this + 92) )
    {
      v15 = 3;
    }
  }
  else
  {
    v15 = 1;
  }
  v6 = *((_BYTE *)this + 816) != 0 ? 5 : 0;
  if ( *((_DWORD *)this + 7 * v6 + 50) )
  {
    v8 = (int *)*((_DWORD *)this + v6 + 122);
    if ( v8 )
    {
      if ( !v8[5] || !v8[6] )
      {
        v9 = *v8;
        v10 = *((_DWORD *)this + 28);
        if ( REGetGlobalDialogResourceManager() )
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v10 + 740) + 4 * v9);
          v12 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v11);
          if ( v12 )
            SetRect((LPRECT)(v8 + 3), 0, 0, *(_DWORD *)(v12 + 524), *(_DWORD *)(v12 + 528));
        }
      }
      REBlendColor::Blend((REBlendColor *)(v8 + 9), v15, a3, 0.0);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        (struct CREElement *)v8,
        (struct tagRECT *)((char *)this + 820),
        1.0);
    }
  }
  else
  {
    v7 = *(_DWORD *)(*((_DWORD *)this + 30) + 4 * (*((_BYTE *)this + 816) != 0));
    REBlendColor::Blend((REBlendColor *)(v7 + 36), 0, a3, 1.0);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v7, v5, 1.0);
  }
  v13 = **((_DWORD **)this + 30);
  REBlendColor::Blend((REBlendColor *)(v13 + 116), 0, a3, 1.0);
  if ( *((_DWORD *)this + 139) < 8u )
    v14 = (const wchar_t *)((char *)this + 536);
  else
    v14 = (const wchar_t *)*((_DWORD *)this + 134);
  CREDialog::DrawTextW(
    *((CREDialog **)this + 28),
    v14,
    (struct CREElement *)v13,
    (struct tagRECT *)((char *)this + 836),
    0,
    -1);
}
