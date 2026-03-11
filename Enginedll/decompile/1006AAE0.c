/*
 * func-name: ?SetSpacing@CREEditBox@@QAEXH@Z
 * func-address: 0x1006aae0
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::SetSpacing(CREEditBox *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 140) = a2;
  (*(void (**)(void))(v2 + 164))();
}
