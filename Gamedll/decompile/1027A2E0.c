/*
 * func-name: sub_1027A2E0
 * func-address: 0x1027a2e0
 * callers: none
 * callees: 0x10003b25, 0x1001457e
 */

CTYDialog *__thiscall sub_1027A2E0(CTYDialog *this)
{
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CQueuePosUI::`vftable';
  std::wstring::wstring((char *)this + 3952);
  *((_DWORD *)this + 22) = 22;
  *((_DWORD *)this + 959) = 9;
  sub_10003B25(v3, v5);
  sub_1001457E(v4, v6);
  return this;
}
