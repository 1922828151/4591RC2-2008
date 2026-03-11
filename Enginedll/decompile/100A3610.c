/*
 * func-name: ?SetRespondRect@CREButton@@QAEXPAUtagRECT@@@Z
 * func-address: 0x100a3610
 * callers: none
 * callees: 0x101a2500, 0x101a2534
 */

void __thiscall CREButton::SetRespondRect(void **this, struct tagRECT *a2)
{
  struct tagRECT *v3; // eax

  if ( this[195] )
  {
    operator delete(this[195]);
    this[195] = 0;
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
    this[195] = v3;
    SetRect(v3, a2->left, a2->top, a2->right, a2->bottom);
  }
}
