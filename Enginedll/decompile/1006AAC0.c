/*
 * func-name: ?SetBorderWidth@CREEditBox@@QAEXH@Z
 * func-address: 0x1006aac0
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::SetBorderWidth(CREEditBox *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 139) = a2;
  (*(void (**)(void))(v2 + 164))();
}
