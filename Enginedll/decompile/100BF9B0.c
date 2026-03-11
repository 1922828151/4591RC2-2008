/*
 * func-name: ?Render@CPictureLabel@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bf9b0
 * callers: none
 * callees: 0x100b5820, 0x100b5850, 0x100b5e40
 */

void __thiscall CPictureLabel::Render(CPictureLabel *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // ebp
  LONG v6; // edx
  LONG v7; // ecx
  LONG v8; // edx
  struct RETextureNode *Texture; // eax
  unsigned int v10; // eax
  _DWORD *v11; // edi
  struct RETextureNode *v12; // eax
  double v13; // st7
  unsigned int v14; // eax
  double v15; // st7
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // eax
  float v19; // ecx
  unsigned int v20; // eax
  float v21; // ecx
  LONG v22; // edx
  struct tagRECT rc; // [esp+18h] [ebp-20h] BYREF
  float v24; // [esp+28h] [ebp-10h]
  float v25; // [esp+2Ch] [ebp-Ch]
  float v26; // [esp+30h] [ebp-8h]
  float v27; // [esp+34h] [ebp-4h]

  if ( *((_BYTE *)this + 90) )
  {
    if ( !*((_BYTE *)this + 89) )
    {
      v4 = *((_DWORD *)this + 197);
      v5 = (_DWORD *)((char *)this + 788);
      if ( v4 != -1 || *((_DWORD *)this + 144) != -1 )
      {
        v6 = *((_DWORD *)this + 42);
        rc.left = *((_DWORD *)this + 41);
        v7 = *((_DWORD *)this + 43);
        rc.top = v6;
        v8 = *((_DWORD *)this + 44);
        rc.right = v7;
        rc.bottom = v8;
        if ( v4 != -1 && (!*((_DWORD *)this + 202) || !*((_DWORD *)this + 203)) )
        {
          Texture = CREDialog::GetTexture(*((CREDialog **)this + 28), v4);
          if ( Texture )
          {
            *((_DWORD *)this + 202) = *((_DWORD *)Texture + 131);
            *((_DWORD *)this + 203) = *((_DWORD *)Texture + 132);
          }
        }
        v10 = *((_DWORD *)this + 144);
        v11 = (_DWORD *)((char *)this + 576);
        if ( v10 != -1 && (!*((_DWORD *)this + 149) || !*((_DWORD *)this + 150)) )
        {
          v12 = CREDialog::GetTexture(*((CREDialog **)this + 28), v10);
          if ( v12 )
          {
            *((_DWORD *)this + 149) = *((_DWORD *)v12 + 131);
            *((_DWORD *)this + 150) = *((_DWORD *)v12 + 132);
          }
        }
        v13 = 0.003921568859368563;
        if ( *((_BYTE *)this + 1012) )
        {
          OffsetRect(&rc, 2, 2);
          v14 = *((_DWORD *)this + 142);
          v15 = 0.003921568859368563;
          v24 = (double)BYTE2(v14) * 0.003921568859368563;
          v16 = *v11 == -1;
          *((float *)this + 169) = v24;
          v25 = (double)BYTE1(v14) * 0.003921568859368563;
          *((float *)this + 170) = v25;
          v26 = (double)(unsigned __int8)v14 * 0.003921568859368563;
          *((float *)this + 171) = v26;
          v27 = (double)HIBYTE(v14) * 0.003921568859368563;
          *((float *)this + 172) = v27;
          if ( !v16 )
          {
            CREDialog::DrawSprite(*((CREDialog **)this + 28), (CPictureLabel *)((char *)this + 576), &rc, 1.0);
            v15 = 0.003921568859368563;
          }
          v17 = *((_DWORD *)this + 142);
          v24 = (double)BYTE2(v17) * v15;
          v16 = *v5 == -1;
          *((float *)this + 222) = v24;
          v25 = (double)BYTE1(v17) * v15;
          *((float *)this + 223) = v25;
          v26 = (double)(unsigned __int8)v17 * v15;
          *((float *)this + 224) = v26;
          v27 = v15 * (double)HIBYTE(v17);
          *((float *)this + 225) = v27;
          if ( !v16 )
            CREDialog::DrawSprite(*((CREDialog **)this + 28), (CPictureLabel *)((char *)this + 788), &rc, 1.0);
          OffsetRect(&rc, -2, -2);
          v13 = 0.003921568859368563;
        }
        if ( *v11 != -1 )
        {
          v18 = *((_DWORD *)this + 141);
          v24 = (double)BYTE2(v18) * v13;
          v25 = (double)BYTE1(v18) * v13;
          v19 = v25;
          *((float *)this + 169) = v24;
          *((float *)this + 170) = v19;
          v26 = (double)(unsigned __int8)v18 * v13;
          *((float *)this + 171) = v26;
          v27 = v13 * (double)HIBYTE(v18);
          *((float *)this + 172) = v27;
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (CPictureLabel *)((char *)this + 576), &rc, 1.0);
          v13 = 0.003921568859368563;
        }
        if ( *v5 != -1 )
        {
          v20 = *((_DWORD *)this + 141);
          v24 = (double)BYTE2(v20) * v13;
          v25 = (double)BYTE1(v20) * v13;
          v21 = v25;
          *((float *)this + 222) = v24;
          *((float *)this + 223) = v21;
          v26 = (double)(unsigned __int8)v20 * v13;
          *((float *)this + 224) = v26;
          v27 = v13 * (double)HIBYTE(v20);
          *((float *)this + 225) = v27;
        }
        if ( *((_BYTE *)this + 1013) )
        {
          OffsetRect(&rc, *((_DWORD *)this + 254), *((_DWORD *)this + 255));
          v22 = rc.top + *((_DWORD *)this + 257) - *((_DWORD *)this + 255);
          rc.right = rc.left + *((_DWORD *)this + 256) - *((_DWORD *)this + 254);
          rc.bottom = v22;
        }
        if ( *v5 != -1 )
        {
          if ( *((_BYTE *)this + 1014) )
            CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 143), 1.0);
          CREDialog::DrawSprite(
            *((CREDialog **)this + 28),
            (CPictureLabel *)((char *)this + 788),
            &rc,
            *((float *)this + 132));
        }
      }
    }
  }
}
