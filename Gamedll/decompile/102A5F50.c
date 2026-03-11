/*
 * func-name: sub_102A5F50
 * func-address: 0x102a5f50
 * callers: 0x10013e53
 * callees: 0x1000501f, 0x1000de36
 */

CTYDialog *__thiscall sub_102A5F50(CTYDialog *this)
{
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CWaitReliveUI::`vftable';
  std::wstring::wstring((char *)this + 3956);
  std::wstring::wstring((char *)this + 4012);
  *((_DWORD *)this + 22) = 24;
  *((_DWORD *)this + 959) = 9;
  *((_DWORD *)this + 42) = 2;
  sub_1000DE36(v3, v5);
  sub_1000501F(v4, v6);
  return this;
}
