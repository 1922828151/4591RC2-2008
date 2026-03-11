/*
 * func-name: ?Render@CInputBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bfe60
 * callers: none
 * callees: 0x100a5e50, 0x100b3e00, 0x100b5e40, 0x100b6890
 */

void __thiscall CInputBox::Render(CInputBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ebx
  double v8; // st7
  int v9; // ebx
  float v10; // [esp+18h] [ebp-14h]
  struct tagRECT rc; // [esp+1Ch] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 92) )
    CInputBox::CheckKey(this);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
  {
    v6 = 2;
  }
  else if ( *((_BYTE *)this + 156) )
  {
    if ( *((_BYTE *)this + 92) )
    {
      v6 = 3;
      v4 = 1;
      v5 = 2;
    }
    else if ( *((_BYTE *)this + 696) )
    {
      v6 = 5;
      v4 = 1;
      v5 = 2;
    }
    else if ( *((_BYTE *)this + 91) )
    {
      v6 = 4;
      v4 = -1;
      v5 = -2;
    }
  }
  else
  {
    v6 = 1;
  }
  v7 = **((_DWORD **)this + 30);
  if ( v6 == 5 )
    v8 = 0.0;
  else
    v8 = 0.80000001;
  v10 = v8;
  rc = *(struct tagRECT *)((char *)this + 164);
  OffsetRect(&rc, v4, v5);
  REBlendColor::Blend((REBlendColor *)(v7 + 36), v6, a3, v10);
  REBlendColor::Blend((REBlendColor *)(v7 + 116), v6, a3, v10);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v7, &rc, 1.0);
  CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)this + 352, (struct CREElement *)v7, &rc, 0, -1);
  v9 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
  REBlendColor::Blend((REBlendColor *)(v9 + 36), v6, a3, v10);
  REBlendColor::Blend((REBlendColor *)(v9 + 116), v6, a3, v10);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v9, &rc, 1.0);
  CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)this + 352, (struct CREElement *)v9, &rc, 0, -1);
}
