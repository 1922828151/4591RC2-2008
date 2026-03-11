/*
 * func-name: ?SetAdditionalRenderRect@CPictureLabel@@QAEXPAUtagRECT@@@Z
 * func-address: 0x100a6550
 * callers: none
 * callees: none
 */

void __thiscall CPictureLabel::SetAdditionalRenderRect(CPictureLabel *this, struct tagRECT *a2)
{
  if ( a2 )
  {
    *((_BYTE *)this + 1013) = 1;
    *(struct tagRECT *)((char *)this + 1016) = *a2;
  }
  else
  {
    *((_BYTE *)this + 1013) = 0;
  }
}
