/*
 * func-name: sub_100BD6F0
 * func-address: 0x100bd6f0
 * callers: none
 * callees: 0x100a5e50, 0x100abae0, 0x100b5e40, 0x100b6890
 */

char __thiscall sub_100BD6F0(struct CREab *this, int a2, float a3)
{
  LONG v4; // eax
  LONG v5; // ebp
  LONG v6; // edx
  CRETabPages *v7; // ecx
  LONG v8; // eax
  int v9; // edi
  bool v10; // zf
  struct CREElement *v11; // eax
  int v12; // ebx
  _DWORD *v13; // edi
  struct CREElement *v14; // ecx
  _DWORD *v15; // eax
  int v16; // ebx
  LONG right; // ebp
  int v18; // ecx
  int v19; // edi
  const wchar_t *v20; // eax
  LONG top; // [esp-4h] [ebp-48h]
  int v23; // [esp+0h] [ebp-44h]
  LONG bottom; // [esp+4h] [ebp-40h]
  struct CREElement *v25; // [esp+18h] [ebp-2Ch]
  int xRight; // [esp+1Ch] [ebp-28h]
  int xLeft; // [esp+20h] [ebp-24h]
  struct tagRECT v28; // [esp+24h] [ebp-20h] BYREF
  struct tagRECT rc; // [esp+34h] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 42);
  v5 = *((_DWORD *)this + 41);
  v6 = *((_DWORD *)this + 43);
  v7 = (CRETabPages *)*((_DWORD *)this + 174);
  v28.top = v4;
  v8 = *((_DWORD *)this + 44);
  v9 = 0;
  v10 = *((_BYTE *)this + 709) == 0;
  v28.left = v5;
  v28.right = v6;
  v28.bottom = v8;
  if ( !v10 )
    v9 = 4;
  if ( *((_BYTE *)this + 708) )
    v9 = 5;
  LOBYTE(v11) = CRETabPages::isSelected(v7, this);
  if ( (_BYTE)v11 )
    v9 = 3;
  switch ( v9 )
  {
    case 0:
      v11 = (struct CREElement *)*((_DWORD *)this + 30);
      v12 = *(_DWORD *)v11;
      v13 = (_DWORD *)*((_DWORD *)v11 + 3);
      v14 = (struct CREElement *)*((_DWORD *)v11 + 6);
      goto LABEL_12;
    case 3:
      v11 = (struct CREElement *)*((_DWORD *)this + 30);
      v12 = *((_DWORD *)v11 + 1);
      v13 = (_DWORD *)*((_DWORD *)v11 + 4);
      v14 = (struct CREElement *)*((_DWORD *)v11 + 7);
LABEL_12:
      v25 = v14;
      goto LABEL_13;
    case 4:
      v11 = (struct CREElement *)*((_DWORD *)this + 30);
      v12 = *((_DWORD *)v11 + 1);
      v13 = (_DWORD *)*((_DWORD *)v11 + 4);
      v25 = (struct CREElement *)*((_DWORD *)v11 + 7);
      goto LABEL_13;
    case 5:
      v15 = (_DWORD *)*((_DWORD *)this + 30);
      v12 = v15[2];
      v13 = (_DWORD *)v15[5];
      v11 = (struct CREElement *)v15[8];
      v25 = v11;
LABEL_13:
      if ( v12 && v13 && v25 )
      {
        REBlendColor::Blend((REBlendColor *)(v12 + 36), 0, a3, 0.80000001);
        SetRect(&rc, v5, v28.top, v5 + 2, v28.bottom);
        CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v12, &rc, 1.0);
        REBlendColor::Blend((REBlendColor *)(v13 + 9), 0, a3, 0.80000001);
        v16 = v13[5] - v13[3];
        right = rc.right;
        v18 = v28.right - 14;
        xLeft = v28.right - 14;
        if ( v16 + rc.right <= v28.right - 14 )
        {
          xRight = v16 + rc.right;
          do
          {
            SetRect(&rc, right, v28.top, xRight, v28.bottom);
            CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v13, &rc, 1.0);
            right += v16;
            xRight += v16;
          }
          while ( xRight <= xLeft );
          v18 = v28.right - 14;
        }
        if ( right < v18 )
        {
          bottom = v28.bottom;
          v23 = v28.right - 14;
          top = v28.top;
          v13[5] = v28.right - right - 14 + v13[3];
          SetRect(&rc, right, top, v23, bottom);
          CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v13, &rc, 1.0);
          v13[5] = v16 + v13[3];
        }
        REBlendColor::Blend((struct CREElement *)((char *)v25 + 36), 0, a3, 0.80000001);
        SetRect(&rc, xLeft, v28.top, v28.right, v28.bottom);
        LOBYTE(v11) = CREDialog::DrawSprite(*((CREDialog **)this + 28), v25, &rc, 1.0);
      }
      break;
    default:
      break;
  }
  v19 = **((_DWORD **)this + 30);
  if ( v19 )
  {
    REBlendColor::Blend((REBlendColor *)(v19 + 116), 0, a3, 0.80000001);
    if ( *((_DWORD *)this + 139) < 8u )
      v20 = (const wchar_t *)((char *)this + 536);
    else
      v20 = (const wchar_t *)*((_DWORD *)this + 134);
    LOBYTE(v11) = CREDialog::DrawTextW(*((CREDialog **)this + 28), v20, (struct CREElement *)v19, &v28, 0, -1);
  }
  return (char)v11;
}
