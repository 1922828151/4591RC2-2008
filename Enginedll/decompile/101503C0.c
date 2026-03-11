/*
 * func-name: ?SetProgressBarRect@CProgressBar@@QAEXPBUtagRECT@@@Z
 * func-address: 0x101503c0
 * callers: 0x1014a750
 * callees: 0x101a2500, 0x101a2534
 */

void __thiscall CProgressBar::SetProgressBarRect(void **this, const struct tagRECT *a2)
{
  struct tagRECT *v3; // eax

  if ( this[185] )
  {
    operator delete(this[185]);
    this[185] = 0;
  }
  if ( a2 )
  {
    v3 = (struct tagRECT *)operator new(0x10u);
    if ( v3 )
    {
      v3->left = 0;
      v3->top = 0;
      v3->right = 0;
      v3->bottom = 0;
    }
    else
    {
      v3 = 0;
    }
    this[185] = v3;
    *v3 = *a2;
  }
}
