/*
 * func-name: ?SetZoneRect@CHotZonePic@@IAE_NAAUtagRECT@@00PAU2@1_N@Z
 * func-address: 0x100a9030
 * callers: 0x100c3c90, 0x100c4500
 * callees: 0x101a26c0
 */

char __thiscall CHotZonePic::SetZoneRect(
        CHotZonePic *this,
        struct tagRECT *a2,
        RECT *lprc,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        bool a7)
{
  LONG top; // edx
  LONG bottom; // ebx
  LONG left; // ebp
  LONG right; // esi
  int v12; // eax
  LONG v14; // ecx
  struct tagRECT *v15; // esi
  double v16; // st7
  LONG v17; // eax
  double v18; // st7
  int v19; // edx
  double v20; // st7
  int v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st7
  LONG v26; // [esp+18h] [ebp-Ch]
  LONG v27; // [esp+1Ch] [ebp-8h]
  LONG v28; // [esp+20h] [ebp-4h]
  float v29; // [esp+28h] [ebp+4h]
  float lprca; // [esp+2Ch] [ebp+8h]
  float v31; // [esp+34h] [ebp+10h]
  float v32; // [esp+3Ch] [ebp+18h]
  int v33; // [esp+3Ch] [ebp+18h]
  float v34; // [esp+3Ch] [ebp+18h]

  top = a2->top;
  bottom = a2->bottom;
  left = a2->left;
  right = a2->right;
  v26 = top;
  v27 = right;
  v28 = bottom;
  if ( a7 )
  {
    v29 = (double)(right + left) * 0.5;
    v12 = lprc->right - lprc->left;
    lprca = (double)(top + bottom) * 0.5;
    v32 = 0.5 * ((double)(right - left) / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41)) * (double)v12);
    left = (int)(v29 - v32);
    v27 = (int)(v29 + v32);
    v26 = (int)(lprca - v32);
    top = v26;
    right = v27;
    v28 = (int)(v32 + lprca);
    bottom = v28;
  }
  if ( !PtInRect(lprc, (POINT)__PAIR64__(top, left)) && !PtInRect(lprc, (POINT)__PAIR64__(bottom, right)) )
    return 0;
  v14 = a4->left;
  if ( left <= lprc->left )
  {
    v16 = (double)(lprc->left - left) / (double)(right - left) * (double)(a4->right - v14) + (double)v14;
    v15 = a6;
    a5->left = (int)v16;
    a6->left = lprc->left;
  }
  else
  {
    v15 = a6;
    a5->left = v14;
    a6->left = left;
  }
  if ( v27 >= lprc->right )
  {
    a5->right = (int)((double)(lprc->right - left) / (double)(v27 - left) * (double)(a4->right - a4->left)
                    + (double)a4->left);
    v15->right = lprc->right;
  }
  else
  {
    a5->right = a4->right;
    v15->right = v27;
  }
  v17 = a4->top;
  if ( v26 <= lprc->top )
  {
    a5->top = (int)((double)(lprc->top - v26) / (double)(v28 - v26) * (double)(a4->bottom - v17) + (double)v17);
    v15->top = lprc->top;
  }
  else
  {
    a5->top = v17;
    v15->top = v26;
  }
  if ( v28 >= lprc->bottom )
  {
    a5->bottom = (int)((double)(lprc->bottom - v26) / (double)(v28 - v26) * (double)(a4->bottom - a4->top)
                     + (double)a4->top);
    v15->bottom = lprc->bottom;
  }
  else
  {
    a5->bottom = a4->bottom;
    v15->bottom = v28;
  }
  v18 = (double)(lprc->right - lprc->left) / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41));
  v33 = lprc->bottom - lprc->top;
  v19 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
  v15->left -= lprc->left;
  v15->right -= lprc->left;
  v15->top -= lprc->top;
  v31 = v18;
  v15->bottom -= lprc->top;
  v34 = (double)v33 / (double)v19;
  v20 = (double)v15->right / v31;
  v15->left = (int)((double)v15->left / v31);
  v21 = (int)v20;
  v22 = (double)v15->top;
  v15->right = v21;
  v23 = v22 / v34;
  v24 = (double)v15->bottom / v34;
  v15->top = (int)v23;
  v15->bottom = (int)v24;
  return 1;
}
