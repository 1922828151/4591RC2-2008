/*
 * func-name: ??4CGroupQuickCallUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1007ac00
 * callers: 0x10015cfd
 * callees: 0x1000961f
 */

char *__thiscall CGroupQuickCallUI::operator=(char *this, int a2)
{
  CTYDialog::operator=(a2);
  if ( this + 3872 != (char *)(a2 + 3872) )
    sub_1000961F(a2 + 3872);
  return this;
}
