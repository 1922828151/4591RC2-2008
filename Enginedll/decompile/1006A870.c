/*
 * func-name: ?SetScrollBarWidth@CREComboBox@@QAEXH@Z
 * func-address: 0x1006a870
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetScrollBarWidth(CREComboBox *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 361) = a2;
  (*(void (**)(void))(v2 + 164))();
}
