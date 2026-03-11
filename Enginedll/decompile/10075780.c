/*
 * func-name: ??0CTYDialog@@QAE@ABV0@@Z
 * func-address: 0x10075780
 * callers: 0x100d4d80
 * callees: 0x1006e8b0, 0x1006e9a0, 0x100751a0
 */

CTYDialog *__thiscall CTYDialog::CTYDialog(CTYDialog *this, const struct CTYDialog *a2)
{
  CREDialog::CREDialog(this, a2);
  *(_DWORD *)this = &CTYDialog::`vftable';
  sub_1006E8B0((_DWORD *)this + 938, (int)a2 + 3752);
  *((_BYTE *)this + 3768) = *((_BYTE *)a2 + 3768);
  *((_BYTE *)this + 3769) = *((_BYTE *)a2 + 3769);
  *((_BYTE *)this + 3770) = *((_BYTE *)a2 + 3770);
  *((_BYTE *)this + 3771) = *((_BYTE *)a2 + 3771);
  *((_DWORD *)this + 943) = *((_DWORD *)a2 + 943);
  *((_DWORD *)this + 944) = *((_DWORD *)a2 + 944);
  *((float *)this + 945) = *((float *)a2 + 945);
  *((float *)this + 946) = *((float *)a2 + 946);
  *((_DWORD *)this + 947) = *((_DWORD *)a2 + 947);
  *((_DWORD *)this + 948) = *((_DWORD *)a2 + 948);
  *((_DWORD *)this + 949) = *((_DWORD *)a2 + 949);
  *((_DWORD *)this + 950) = *((_DWORD *)a2 + 950);
  *((_DWORD *)this + 951) = *((_DWORD *)a2 + 951);
  *((_DWORD *)this + 952) = *((_DWORD *)a2 + 952);
  *((_DWORD *)this + 953) = *((_DWORD *)a2 + 953);
  *((_DWORD *)this + 954) = *((_DWORD *)a2 + 954);
  sub_1006E9A0((_DWORD *)this + 955, (int)a2 + 3820);
  *((_DWORD *)this + 959) = *((_DWORD *)a2 + 959);
  std::wstring::wstring((char *)this + 3840, (char *)a2 + 3840);
  *((_BYTE *)this + 3868) = *((_BYTE *)a2 + 3868);
  return this;
}
