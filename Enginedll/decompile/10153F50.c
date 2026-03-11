/*
 * func-name: ?Render@CProgressBTN@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10153f50
 * callers: none
 * callees: 0x100a5e50, 0x100b5820, 0x100b5e40, 0x100b6890, 0x100bb510, 0x100cdd20, 0x101a26c0
 */

void __thiscall CProgressBTN::Render(CProgressBTN *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int *v4; // eax
  int *v5; // ebx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ebp
  double v10; // st7
  LONG v11; // edx
  LONG v12; // eax
  const wchar_t *v13; // eax
  float v14; // [esp+18h] [ebp-24h]
  struct tagRECT v15; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT rc; // [esp+2Ch] [ebp-10h] BYREF
  float v17; // [esp+40h] [ebp+4h]
  float v18; // [esp+40h] [ebp+4h]

  CREButton::Render(this, a2, a3);
  v4 = (unsigned int *)*((_DWORD *)this + 204);
  if ( v4 )
  {
    if ( !v4[5] || !v4[6] )
    {
      *(_DWORD *)(*((_DWORD *)this + 204) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v4)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 204) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 204))
                                                  + 132);
    }
    v17 = (*((float *)this + 205) - *((float *)this + 207)) / (*((float *)this + 206) - *((float *)this + 207));
    v14 = fabs(v17);
    if ( v14 > 0.001 )
    {
      v5 = (int *)((char *)this + 164);
      v6 = sub_100CDD20((_DWORD *)this + 41);
      v7 = (int)((double)v6 * v17);
      if ( v7 < 0 )
        v7 = 0;
      if ( v7 > v6 )
        v7 = v6;
      SetRect(&rc, *v5, *((_DWORD *)this + 42) + 2, *v5 + v7, *((_DWORD *)this + 44) - 2);
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 204) + 36), 0, a3, 0.0);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 204),
        &rc,
        *((float *)this + 132));
      v8 = 0;
      if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
      {
        v8 = 2;
      }
      else if ( *((_BYTE *)this + 156) )
      {
        if ( *((_BYTE *)this + 779) )
        {
          v8 = 5;
        }
        else if ( *((_BYTE *)this + 91) )
        {
          v8 = 4;
        }
        else if ( *((_BYTE *)this + 157) )
        {
          v8 = 6;
        }
        else if ( *((_BYTE *)this + 92) )
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 1;
      }
      v9 = **((_DWORD **)this + 30);
      if ( v8 == 5 )
        v10 = 0.0;
      else
        v10 = 0.80000001;
      v18 = v10;
      v11 = *((_DWORD *)this + 42);
      v12 = *((_DWORD *)this + 43);
      v15.left = *v5;
      v15.bottom = *((_DWORD *)this + 44);
      v15.top = v11;
      v15.right = v12;
      REBlendColor::Blend((REBlendColor *)(v9 + 36), v8, a3, v18);
      REBlendColor::Blend((REBlendColor *)(v9 + 116), v8, a3, v18);
      if ( *((_DWORD *)this + 139) < 8u )
        v13 = (const wchar_t *)((char *)this + 536);
      else
        v13 = (const wchar_t *)*((_DWORD *)this + 134);
      CREDialog::DrawTextW(*((CREDialog **)this + 28), v13, (struct CREElement *)v9, &v15, 0, -1);
    }
  }
}
