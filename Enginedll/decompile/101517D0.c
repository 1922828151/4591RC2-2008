/*
 * func-name: ?Render@CControlBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x101517d0
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40
 */

void __thiscall CControlBox::Render(CControlBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebp
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ebp
  int v18; // [esp+4h] [ebp-3Ch]
  int v19; // [esp+4h] [ebp-3Ch]
  int v20; // [esp+4h] [ebp-3Ch]
  int v21; // [esp+8h] [ebp-38h]
  int v22; // [esp+8h] [ebp-38h]
  int v23; // [esp+8h] [ebp-38h]
  int v24; // [esp+1Ch] [ebp-24h]
  int i; // [esp+1Ch] [ebp-24h]
  struct tagRECT rc; // [esp+20h] [ebp-20h] BYREF
  struct tagRECT v27; // [esp+30h] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 90) && *((_DWORD *)this + 28) )
  {
    if ( *((_BYTE *)this + 548) )
    {
      SetRect(
        &rc,
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 24) + 2,
        *((_DWORD *)this + 25) + 2);
      v4 = **((_DWORD **)this + 30);
      REBlendColor::Blend((REBlendColor *)(v4 + 36), 0, 1.0, 1.0);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v4, &rc, 1.0);
      v18 = *((_DWORD *)this + 24) + *((_DWORD *)this + 26);
      SetRect(&rc, v18 - 2, *((_DWORD *)this + 25), v18, *((_DWORD *)this + 25) + 2);
      v5 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
      REBlendColor::Blend((REBlendColor *)(v5 + 36), 0, 1.0, 1.0);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v5, &rc, 1.0);
      v21 = *((_DWORD *)this + 25) + *((_DWORD *)this + 27);
      SetRect(&rc, *((_DWORD *)this + 24), v21 - 2, *((_DWORD *)this + 24) + 2, v21);
      v6 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
      REBlendColor::Blend((REBlendColor *)(v6 + 36), 0, 1.0, 1.0);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v6, &rc, 1.0);
      v22 = *((_DWORD *)this + 25) + *((_DWORD *)this + 27);
      v19 = *((_DWORD *)this + 26) + *((_DWORD *)this + 24);
      SetRect(&rc, v19 - 2, v22 - 2, v19, v22);
      v7 = *(_DWORD *)(*((_DWORD *)this + 30) + 12);
      REBlendColor::Blend((REBlendColor *)(v7 + 36), 0, 1.0, 1.0);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v7, &rc, 1.0);
      v8 = *(_DWORD *)(*((_DWORD *)this + 30) + 16);
      REBlendColor::Blend((REBlendColor *)(v8 + 36), 0, 1.0, 1.0);
      v9 = *((_DWORD *)this + 26) - 4;
      SetRect(
        &rc,
        *((_DWORD *)this + 24) + 2,
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 24) + 3,
        *((_DWORD *)this + 25) + 1);
      v23 = *((_DWORD *)this + 27) + *((_DWORD *)this + 25);
      SetRect(&v27, *((_DWORD *)this + 24) + 2, v23 - 1, *((_DWORD *)this + 24) + 3, v23);
      if ( v9 > 0 )
      {
        v24 = v9;
        do
        {
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v8, &rc, 1.0);
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v8, &v27, 1.0);
          OffsetRect(&rc, 1, 0);
          OffsetRect(&v27, 1, 0);
          --v24;
        }
        while ( v24 );
      }
      v10 = *((_DWORD *)this + 27) - 4;
      SetRect(
        &rc,
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25) + 2,
        *((_DWORD *)this + 24) + 1,
        *((_DWORD *)this + 25) + 3);
      v20 = *((_DWORD *)this + 24) + *((_DWORD *)this + 26);
      SetRect(&v27, v20 - 1, *((_DWORD *)this + 25) + 2, v20, *((_DWORD *)this + 25) + 3);
      if ( v10 > 0 )
      {
        do
        {
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v8, &rc, 1.0);
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v8, &v27, 1.0);
          OffsetRect(&rc, 0, 1);
          OffsetRect(&v27, 0, 1);
          --v10;
        }
        while ( v10 );
      }
    }
    v11 = 0;
    for ( i = 0; ; i += 12 )
    {
      v12 = *((_DWORD *)this + 134);
      if ( !v12 || v11 >= (*((_DWORD *)this + 135) - v12) / 12 )
        break;
      v13 = *((_DWORD *)this + 134);
      if ( !v13 || v11 >= (*((_DWORD *)this + 135) - v13) / 12 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(i + *((_DWORD *)this + 134));
      v15 = *((_DWORD *)this + 134);
      if ( !v15 || v11 >= (*((_DWORD *)this + 135) - v15) / 12 )
        invalid_parameter_noinfo();
      v16 = *((_DWORD *)this + 134);
      v17 = i + v16;
      if ( !v16 || v11 >= (*((_DWORD *)this + 135) - v16) / 12 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 156))(
        v14,
        *((_DWORD *)this + 24) + *(_DWORD *)(*((_DWORD *)this + 134) + i + 4),
        *((_DWORD *)this + 25) + *(_DWORD *)(v17 + 8));
      (*(void (__thiscall **)(int, struct IDirect3DDevice9 *, _DWORD))(*(_DWORD *)v14 + 20))(v14, a2, LODWORD(a3));
      ++v11;
    }
  }
}
