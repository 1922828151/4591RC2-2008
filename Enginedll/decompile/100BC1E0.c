/*
 * func-name: ?Render@CREPictureButton@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bc1e0
 * callers: none
 * callees: 0x100a5e50, 0x100b62e0, 0x100b6890
 */

void __thiscall CREPictureButton::Render(CREPictureButton *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // edi
  struct Texture *v5; // eax
  unsigned int v6; // ecx
  double v7; // st7
  int v8; // ebx
  const wchar_t *v9; // eax
  float v10; // [esp+14h] [ebp-14h]
  struct tagRECT v11; // [esp+18h] [ebp-10h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    if ( *((_BYTE *)this + 156) )
    {
      if ( *((_BYTE *)this + 779) )
      {
        v4 = 5;
      }
      else if ( *((_BYTE *)this + 91) )
      {
        v4 = 4;
      }
      else if ( *((_BYTE *)this + 157) )
      {
        v4 = 6;
      }
      else if ( *((_BYTE *)this + 92) )
      {
        v4 = 3;
      }
    }
    else
    {
      v4 = 1;
    }
    v5 = (struct Texture *)*((_DWORD *)this + v4 + 204);
    v6 = *((_DWORD *)this + v4 + 284);
    if ( !v5 )
    {
      v5 = (struct Texture *)*((_DWORD *)this + 204);
      v4 = 0;
    }
    v11 = *(struct tagRECT *)((char *)this + 164);
    if ( v5 )
      CREDialog::DrawSprite(*((CREDialog **)this + 28), v5, (struct tagRECT *)this + v4 + 55, &v11, v6, 1.0);
    if ( *((_DWORD *)this + 138) )
    {
      if ( v4 == 5 )
        v7 = 0.0;
      else
        v7 = 0.80000001;
      v10 = v7;
      v8 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
      REBlendColor::Blend((REBlendColor *)(v8 + 116), v4, a3, v10);
      if ( *((_DWORD *)this + 139) < 8u )
        v9 = (const wchar_t *)((char *)this + 536);
      else
        v9 = (const wchar_t *)*((_DWORD *)this + 134);
      CREDialog::DrawTextW(*((CREDialog **)this + 28), v9, (struct CREElement *)v8, &v11, 0, -1);
    }
  }
}
