/*
 * func-name: ?SetScrollBarWidth@CREPropertiesList@@QAEXH@Z
 * func-address: 0x1006a580
 * callers: none
 * callees: none
 */

void __thiscall CREPropertiesList::SetScrollBarWidth(CREPropertiesList *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 295) = a2;
  (*(void (**)(void))(v2 + 164))();
}
