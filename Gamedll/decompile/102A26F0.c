/*
 * func-name: sub_102A26F0
 * func-address: 0x102a26f0
 * callers: 0x10009a7f
 * callees: 0x10001311, 0x1000ec1e
 */

CTYDialog *__thiscall sub_102A26F0(CTYDialog *this)
{
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CTextInputUI::`vftable';
  std::wstring::wstring((char *)this + 3904);
  *((_DWORD *)this + 990) = -1;
  *((_DWORD *)this + 22) = 25;
  *((_DWORD *)this + 959) = 9;
  *((_DWORD *)this + 42) = 2;
  sub_1000EC1E(v3, v5);
  sub_10001311(v4, v6);
  return this;
}
