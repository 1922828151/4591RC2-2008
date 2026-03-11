/*
 * func-name: ??0CREComboBox@@QAE@ABV0@@Z
 * func-address: 0x10072840
 * callers: none
 * callees: 0x10071950, 0x10071d40
 */

CREComboBox *__thiscall CREComboBox::CREComboBox(CREComboBox *this, const struct CREComboBox *a2)
{
  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CREComboBox::`vftable';
  *((_DWORD *)this + 204) = *((_DWORD *)a2 + 204);
  *((_DWORD *)this + 205) = *((_DWORD *)a2 + 205);
  *((_DWORD *)this + 206) = *((_DWORD *)a2 + 206);
  CREScrollBar::CREScrollBar((CREComboBox *)((char *)this + 828), (const struct CREComboBox *)((char *)a2 + 828));
  *((_DWORD *)this + 361) = *((_DWORD *)a2 + 361);
  *((_BYTE *)this + 1448) = *((_BYTE *)a2 + 1448);
  *((_DWORD *)this + 363) = *((_DWORD *)a2 + 363);
  *((_DWORD *)this + 364) = *((_DWORD *)a2 + 364);
  *((_DWORD *)this + 365) = *((_DWORD *)a2 + 365);
  *((_DWORD *)this + 366) = *((_DWORD *)a2 + 366);
  *((_DWORD *)this + 367) = *((_DWORD *)a2 + 367);
  *((_DWORD *)this + 368) = *((_DWORD *)a2 + 368);
  *((_DWORD *)this + 369) = *((_DWORD *)a2 + 369);
  *((_DWORD *)this + 370) = *((_DWORD *)a2 + 370);
  *((_DWORD *)this + 371) = *((_DWORD *)a2 + 371);
  *((_DWORD *)this + 372) = *((_DWORD *)a2 + 372);
  *((_DWORD *)this + 373) = *((_DWORD *)a2 + 373);
  *((_DWORD *)this + 374) = *((_DWORD *)a2 + 374);
  *((_DWORD *)this + 375) = *((_DWORD *)a2 + 375);
  *((_DWORD *)this + 376) = *((_DWORD *)a2 + 376);
  *((_DWORD *)this + 377) = *((_DWORD *)a2 + 377);
  *((_DWORD *)this + 378) = *((_DWORD *)a2 + 378);
  *((_DWORD *)this + 379) = *((_DWORD *)a2 + 379);
  *((_DWORD *)this + 380) = *((_DWORD *)a2 + 380);
  *((_DWORD *)this + 381) = *((_DWORD *)a2 + 381);
  *((_DWORD *)this + 382) = *((_DWORD *)a2 + 382);
  *((_DWORD *)this + 383) = *((_DWORD *)a2 + 383);
  qmemcpy((char *)this + 1536, (char *)a2 + 1536, 0x54u);
  qmemcpy((char *)this + 1620, (char *)a2 + 1620, 0x50u);
  return this;
}
