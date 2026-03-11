/*
 * func-name: ?SetTextureRect@CPictureLabel@@QAEXUtagRECT@@@Z
 * func-address: 0x100a64f0
 * callers: 0x100bfdc0, 0x1014a750
 * callees: none
 */

void __thiscall CPictureLabel::SetTextureRect(CPictureLabel *this, struct tagRECT a2)
{
  *((_DWORD *)this + 133) = a2.left;
  *((_DWORD *)this + 200) = a2.left;
  *((_DWORD *)this + 134) = a2.top;
  *((_DWORD *)this + 201) = a2.top;
  *((_DWORD *)this + 135) = a2.right;
  *((_DWORD *)this + 202) = a2.right;
  *((_DWORD *)this + 136) = a2.bottom;
  *((_DWORD *)this + 203) = a2.bottom;
}
