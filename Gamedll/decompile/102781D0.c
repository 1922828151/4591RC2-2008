/*
 * func-name: sub_102781D0
 * func-address: 0x102781d0
 * callers: 0x10017c88
 * callees: none
 */

void __thiscall sub_102781D0(CPictureLabel *this, int a2)
{
  struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

  *((_DWORD *)this + 259) = a2;
  if ( (unsigned int)(a2 - 1) > 9 )
  {
    SetRect(&rc, 0, 0, 0, 0);
    CPictureLabel::SetTextureRect(this, rc);
  }
  else
  {
    CPictureLabel::SetTextureRect(this, *(struct tagRECT *)&dword_103B7980[4 * a2]);
  }
}
