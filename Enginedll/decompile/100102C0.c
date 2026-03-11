/*
 * func-name: ??0IParse@@QAE@ABV0@@Z
 * func-address: 0x100102c0
 * callers: none
 * callees: 0x1000f380
 */

IParse *__thiscall IParse::IParse(IParse *this, const struct IParse *a2)
{
  *(_DWORD *)this = &IParse::`vftable';
  sub_1000F380((int)this + 4, (int)a2 + 4);
  sub_1000F380((int)this + 20, (int)a2 + 20);
  return this;
}
