/*
 * func-name: ?SetDropHeight@CREComboBox@@QAEXI@Z
 * func-address: 0x1006a840
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetDropHeight(CREComboBox *this, unsigned int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 206) = a2;
  (*(void (**)(void))(v2 + 164))();
}
