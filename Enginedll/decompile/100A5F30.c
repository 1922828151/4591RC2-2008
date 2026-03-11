/*
 * func-name: ?SetTexture@CREElement@@QAEXIPBUtagRECT@@K@Z
 * func-address: 0x100a5f30
 * callers: 0x100c97b0, 0x1014fcd0, 0x1014fe10, 0x10150190, 0x101502f0, 0x10150a30, 0x10150b20, 0x10150bc0, 0x10150c40, 0x10150cc0, 0x101526a0, 0x10152870, 0x10152de0, 0x10157630
 * callees: 0x100a5d90
 */

void __thiscall CREElement::SetTexture(CREElement *this, unsigned int a2, const struct tagRECT *a3, unsigned int a4)
{
  *(_DWORD *)this = a2;
  if ( a3 )
    *(struct tagRECT *)((char *)this + 12) = *a3;
  else
    SetRectEmpty((LPRECT)((char *)this + 12));
  REBlendColor::Init((CREElement *)((char *)this + 36), a4, 0xC8808080, 0);
}
