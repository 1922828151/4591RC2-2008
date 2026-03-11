/*
 * func-name: ?RenderColor@CProgressBar@@QAEXPAUIDirect3DDevice9@@MMAAUtagRECT@@@Z
 * func-address: 0x10150820
 * callers: 0x10155030
 * callees: 0x100b5850
 */

void __thiscall CProgressBar::RenderColor(
        CProgressBar *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        float a4,
        struct tagRECT *a5)
{
  double v6; // st7
  bool v7; // zf
  LONG bottom; // ecx
  LONG right; // eax
  LONG v10; // eax
  CREDialog *v11; // ecx
  LONG v12; // eax
  LONG top; // ecx
  LONG v14; // edx
  int v15; // ebp
  LONG v16; // ebx
  LONG v17; // eax
  unsigned int v18; // ecx
  CREDialog *v19; // ecx
  LONG v20; // eax
  LONG left; // ecx
  LONG v22; // ebx
  int v23; // ebp
  unsigned int v24; // [esp-4h] [ebp-28h]
  unsigned int v25; // [esp-4h] [ebp-28h]
  float v26; // [esp+0h] [ebp-24h]
  struct tagRECT rc; // [esp+14h] [ebp-10h] BYREF

  CREDialog::DrawRect(
    *((CREDialog **)this + 28),
    (struct tagRECT *)((char *)this + 164),
    *((_DWORD *)this + 191),
    *((float *)this + 132));
  v6 = *((float *)this + 132);
  if ( *((_BYTE *)this + 748) )
  {
    v7 = *((_BYTE *)this + 744) == 0;
    rc.left = a5->left;
    bottom = a5->bottom;
    v26 = v6;
    rc.bottom = bottom;
    if ( v7 )
    {
      right = a5->right;
      rc.top = a5->top;
      v10 = right + rc.top - bottom + 1;
      v24 = *((_DWORD *)this + 190);
      v11 = (CREDialog *)*((_DWORD *)this + 28);
      rc.right = v10;
      CREDialog::DrawRect(v11, &rc, v24, v26);
      v12 = a5->bottom;
      top = a5->top;
      v14 = rc.right;
      v15 = 0;
      if ( v12 - top - 1 > 0 )
      {
        while ( 1 )
        {
          v16 = v14 + 1;
          SetRect(&rc, v14, top + v15 + 1, v14 + 1, v12);
          CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 190), *((float *)this + 132));
          v12 = a5->bottom;
          top = a5->top;
          v14 = v16;
          if ( v15 + 1 >= v12 - top - 1 )
            break;
          ++v15;
        }
      }
    }
    else
    {
      v17 = a5->top;
      v18 = *((_DWORD *)this + 190);
      rc.right = a5->right;
      v25 = v18;
      v19 = (CREDialog *)*((_DWORD *)this + 28);
      rc.top = v17 + rc.right - a5->left - 1;
      CREDialog::DrawRect(v19, &rc, v25, v26);
      v20 = a5->right;
      left = a5->left;
      v22 = rc.top;
      v23 = 0;
      if ( v20 - a5->left - 1 > 0 )
      {
        while ( 1 )
        {
          SetRect(&rc, left + v23 + 1, v22 - 1, v20, v22);
          CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 190), *((float *)this + 132));
          v20 = a5->right;
          left = a5->left;
          ++v22;
          if ( v23 + 1 >= v20 - a5->left - 1 )
            break;
          ++v23;
        }
      }
    }
  }
  else
  {
    CREDialog::DrawRect(*((CREDialog **)this + 28), a5, *((_DWORD *)this + 190), *((float *)this + 132));
  }
}
