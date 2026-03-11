/*
 * func-name: ??0CHallMapUI@@QAE@ABV0@@Z_0
 * func-address: 0x10219a90
 * callers: 0x1001580c
 * callees: none
 */

CHallMapUI *__thiscall CHallMapUI::CHallMapUI(CHallMapUI *this, const struct CHallMapUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CHallMapUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  *((_DWORD *)this + 971) = *((_DWORD *)a2 + 971);
  *((_DWORD *)this + 972) = *((_DWORD *)a2 + 972);
  *((_DWORD *)this + 973) = *((_DWORD *)a2 + 973);
  *((_DWORD *)this + 974) = *((_DWORD *)a2 + 974);
  *((_DWORD *)this + 975) = *((_DWORD *)a2 + 975);
  return this;
}
