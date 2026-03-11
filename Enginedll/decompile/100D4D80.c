/*
 * func-name: ??0CTYMenu@@QAE@ABV0@@Z
 * func-address: 0x100d4d80
 * callers: none
 * callees: 0x10075780, 0x100d2fe0
 */

CTYMenu *__thiscall CTYMenu::CTYMenu(CTYMenu *this, const struct CTYMenu *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CTYMenu::`vftable';
  sub_100D2FE0((_DWORD *)this + 968, (int)a2 + 3872);
  *((_DWORD *)this + 972) = *((_DWORD *)a2 + 972);
  *((_DWORD *)this + 973) = *((_DWORD *)a2 + 973);
  *((_DWORD *)this + 974) = *((_DWORD *)a2 + 974);
  *((_DWORD *)this + 975) = *((_DWORD *)a2 + 975);
  *((_DWORD *)this + 976) = *((_DWORD *)a2 + 976);
  *((_DWORD *)this + 977) = *((_DWORD *)a2 + 977);
  *((_BYTE *)this + 3912) = *((_BYTE *)a2 + 3912);
  *((_DWORD *)this + 979) = *((_DWORD *)a2 + 979);
  *((_DWORD *)this + 980) = *((_DWORD *)a2 + 980);
  return this;
}
