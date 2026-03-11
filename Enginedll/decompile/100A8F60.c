/*
 * func-name: ?SetDrawRect@CHotZonePic@@QAEXPAUtagRECT@@@Z
 * func-address: 0x100a8f60
 * callers: 0x100a93f0
 * callees: none
 */

void __thiscall CHotZonePic::SetDrawRect(CHotZonePic *this, struct tagRECT *a2)
{
  LONG v3; // ecx
  LONG top; // edx
  LONG v5; // ecx
  LONG right; // edx
  LONG v7; // ecx
  LONG bottom; // edx
  LONG v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx

  if ( a2 )
  {
    if ( !*((_BYTE *)this + 627) )
    {
      v3 = *((_DWORD *)this + 152);
      if ( a2->left < v3 )
      {
        a2->right += v3 - a2->left;
        a2->left = *((_DWORD *)this + 152);
      }
      top = a2->top;
      v5 = *((_DWORD *)this + 153);
      if ( top < v5 )
      {
        a2->bottom += v5 - top;
        a2->top = *((_DWORD *)this + 153);
      }
      right = a2->right;
      v7 = *((_DWORD *)this + 154);
      if ( right > v7 )
      {
        a2->left += v7 - right;
        a2->right = *((_DWORD *)this + 154);
      }
      bottom = a2->bottom;
      v9 = *((_DWORD *)this + 155);
      if ( bottom > v9 )
      {
        a2->top += v9 - bottom;
        a2->bottom = *((_DWORD *)this + 155);
      }
    }
    SetRect((LPRECT)(*((_DWORD *)this + 133) + 12), a2->left, a2->top, a2->right, a2->bottom);
  }
  v10 = (_DWORD *)*((_DWORD *)this + 133);
  v11 = v10[3];
  v10 += 3;
  *((_DWORD *)this + 148) = v11;
  *((_DWORD *)this + 149) = v10[1];
  *((_DWORD *)this + 150) = v10[2];
  *((_DWORD *)this + 151) = v10[3];
}
