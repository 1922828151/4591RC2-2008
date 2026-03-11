/*
 * func-name: ?OnPropertyChange@CPictureLabel@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100bfdc0
 * callers: none
 * callees: 0x100a31e0, 0x100a64f0, 0x100bf690
 */

void __thiscall CPictureLabel::OnPropertyChange(CPictureLabel *this, int a2)
{
  LONG v3; // edx
  LONG v4; // ecx
  LONG v5; // edx
  char v6; // [esp-20h] [ebp-2Ch] BYREF
  _DWORD *v7; // [esp-1Ch] [ebp-28h]
  int v8; // [esp-18h] [ebp-24h]
  int v9; // [esp-14h] [ebp-20h]
  struct tagRECT v10; // [esp-10h] [ebp-1Ch]

  if ( (unsigned __int8)std::operator==<char>(a2, "Texture") )
  {
    v10.bottom = (LONG)this + 532;
    std::wstring::wstring(&v6, (char *)this + 984);
    CPictureLabel::ChangeTexture((int)this, v6, v7, v8, v9, v10.left, v10.top, v10.right, (_DWORD *)v10.bottom);
  }
  else if ( (unsigned __int8)std::operator==<char>(a2, "Rect") )
  {
    v3 = *((_DWORD *)this + 134);
    v10.left = *((_DWORD *)this + 133);
    v4 = *((_DWORD *)this + 135);
    v10.top = v3;
    v5 = *((_DWORD *)this + 136);
    v10.right = v4;
    v10.bottom = v5;
    CPictureLabel::SetTextureRect(this, v10);
  }
  else
  {
    CREControl::OnPropertyChange(this, a2);
  }
}
