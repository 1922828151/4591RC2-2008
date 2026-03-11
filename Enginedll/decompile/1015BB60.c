/*
 * func-name: sub_1015BB60
 * func-address: 0x1015bb60
 * callers: 0x1014de70
 * callees: 0x100ccaf0, 0x1015ac30, 0x1015bad0
 */

CREDialog *__thiscall sub_1015BB60(CREDialog *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CUIMessageDlg::`vftable';
  *((_DWORD *)this + 968) = 0;
  *((_DWORD *)this + 971) = 0;
  std::wstring::wstring((char *)this + 3960);
  *((_DWORD *)this + 997) = 0;
  *((_BYTE *)this + 3992) = 0;
  *((_BYTE *)this + 4005) = 1;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 959) = 5;
  sub_1015BAD0(this);
  sub_1015AC30(this);
  return this;
}
