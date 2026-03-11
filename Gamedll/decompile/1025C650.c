/*
 * func-name: sub_1025C650
 * func-address: 0x1025c650
 * callers: 0x10001852
 * callees: 0x100060b9, 0x1000bb81
 */

CTYDialog *__thiscall sub_1025C650(CTYDialog *this)
{
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CCommandUI::`vftable';
  *((_DWORD *)this + 968) = 0;
  *((_DWORD *)this + 22) = 14;
  *((_DWORD *)this + 959) = 9;
  *((_DWORD *)this + 42) = 2;
  sub_1000BB81(v3, v5);
  sub_100060B9(v4, v6, (int)this, v8, v9, 0);
  return this;
}
