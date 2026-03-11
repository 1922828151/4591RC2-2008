/*
 * func-name: ??0CREPropertiesList@@QAE@ABV0@@Z
 * func-address: 0x100724e0
 * callers: none
 * callees: 0x10071230, 0x10071d40
 */

CREPropertiesList *__thiscall CREPropertiesList::CREPropertiesList(
        CREPropertiesList *this,
        const struct CREPropertiesList *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CREPropertiesList::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_DWORD *)this + 139) = *((_DWORD *)a2 + 139);
  *((_DWORD *)this + 140) = *((_DWORD *)a2 + 140);
  CREScrollBar::CREScrollBar(
    (CREPropertiesList *)((char *)this + 564),
    (const struct CREPropertiesList *)((char *)a2 + 564));
  *((_DWORD *)this + 295) = *((_DWORD *)a2 + 295);
  *((_DWORD *)this + 296) = *((_DWORD *)a2 + 296);
  *((_DWORD *)this + 297) = *((_DWORD *)a2 + 297);
  *((_DWORD *)this + 298) = *((_DWORD *)a2 + 298);
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  *((_DWORD *)this + 300) = *((_DWORD *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  *((_BYTE *)this + 1208) = *((_BYTE *)a2 + 1208);
  *((_DWORD *)this + 303) = *((_DWORD *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  return this;
}
