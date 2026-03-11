/*
 * func-name: ??0CGroupMemberUI@@QAE@ABV0@@Z_0
 * func-address: 0x1025b610
 * callers: 0x1000277f
 * callees: 0x10019e66
 */

CGroupMemberUI *__thiscall CGroupMemberUI::CGroupMemberUI(CGroupMemberUI *this, const struct CGroupMemberUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CGroupMemberUI::`vftable';
  sub_10019E66((int)a2 + 3872);
  *((_DWORD *)this + 972) = *((_DWORD *)a2 + 972);
  *((_DWORD *)this + 973) = *((_DWORD *)a2 + 973);
  *((_DWORD *)this + 974) = *((_DWORD *)a2 + 974);
  *((float *)this + 975) = *((float *)a2 + 975);
  return this;
}
