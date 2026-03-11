/*
 * func-name: sub_10278050
 * func-address: 0x10278050
 * callers: 0x1000c07c
 * callees: none
 */

CPictureLabel *__thiscall sub_10278050(CPictureLabel *this, struct CREDialog *a2)
{
  _DWORD v4[3]; // [esp-4h] [ebp-4Ch] BYREF
  LPRECT v5; // [esp+8h] [ebp-40h]
  __int64 v6; // [esp+Ch] [ebp-3Ch]
  __int64 v7; // [esp+14h] [ebp-34h]
  CPictureLabel *v8; // [esp+28h] [ebp-20h]
  struct tagRECT rc; // [esp+2Ch] [ebp-1Ch] BYREF
  int v10; // [esp+44h] [ebp-4h]

  v8 = this;
  CPictureLabel::CPictureLabel(this, a2, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
  v7 = 0x140000000FLL;
  v6 = 0x800000003LL;
  v5 = &stru_103B7990;
  v10 = 0;
  *(_DWORD *)this = &CNumberPicture::`vftable';
  *((_DWORD *)this + 259) = -1;
  SetRect(v5, v6, SHIDWORD(v6), v7, SHIDWORD(v7));
  SetRect(&stru_103B79A0, 17, 8, 29, 20);
  SetRect(&stru_103B79B0, 31, 8, 43, 20);
  SetRect(&stru_103B79C0, 46, 8, 58, 20);
  SetRect(&stru_103B79D0, 63, 8, 75, 20);
  SetRect(&stru_103B79E0, 79, 8, 91, 20);
  SetRect(&stru_103B79F0, 96, 8, 108, 20);
  SetRect(&stru_103B7A00, 114, 8, 126, 20);
  SetRect(&stru_103B7A10, 129, 8, 141, 20);
  SetRect(&stru_103B7A20, 149, 8, 161, 20);
  HIDWORD(v7) = 0;
  std::wstring::wstring(v4, L"GUI.dds");
  CPictureLabel::ChangeTexture(this, v4[0], v4[1], v4[2], v5, v6, HIDWORD(v6), v7, HIDWORD(v7));
  SetRect(&rc, 0, 0, 0, 0);
  CPictureLabel::SetTextureRect(this, rc);
  return this;
}
