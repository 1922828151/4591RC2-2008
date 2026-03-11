/*
 * func-name: ??4REPage@@QAEAAU0@ABU0@@Z
 * func-address: 0x1006a740
 * callers: none
 * callees: none
 */

void *__thiscall REPage::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x214u);
  return result;
}
