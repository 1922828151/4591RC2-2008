/*
 * func-name: ?InitComponent@CKillingInfoUI@@QAEXXZ_0
 * func-address: 0x10276000
 * callers: 0x1000be79
 * callees: 0x100044cb, 0x1001287d, 0x102c9d98
 */

void __thiscall CKillingInfoUI::InitComponent(CKillingInfoUI *this)
{
  int v2; // eax

  if ( operator new(0x240u) )
    v2 = sub_1001287D((int)this);
  else
    v2 = 0;
  *((_DWORD *)this + 968) = v2;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 156))(v2, 0, 0);
  sub_100044CB(6);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 968) + 160))(
    *((_DWORD *)this + 968),
    *((_DWORD *)this + 175),
    *((_DWORD *)this + 176));
  CREDialog::AddControl(this, *((struct CREControl **)this + 968));
}
