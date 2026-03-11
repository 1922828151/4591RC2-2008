/*
 * func-name: ?SetLabelWidth@CREPropertiesList@@QAEXH@Z
 * func-address: 0x1006a690
 * callers: none
 * callees: none
 */

void __thiscall CREPropertiesList::SetLabelWidth(CREPropertiesList *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 304) = a2;
  (*(void (**)(void))(v2 + 164))();
}
