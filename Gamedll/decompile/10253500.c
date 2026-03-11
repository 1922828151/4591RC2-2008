/*
 * func-name: ?InitComponent@CAlarmMessageUI@@QAEXXZ_0
 * func-address: 0x10253500
 * callers: 0x10009b56
 * callees: 0x1000413d, 0x10009cf5, 0x102c9d98
 */

void __thiscall CAlarmMessageUI::InitComponent(CAlarmMessageUI *this)
{
  int v2; // eax

  if ( operator new(0x254u) )
    v2 = sub_1000413D((int)this);
  else
    v2 = 0;
  *((_DWORD *)this + 968) = v2;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 156))(v2, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 968) + 160))(*((_DWORD *)this + 968), 200, 150);
  sub_10009CF5(5);
  CREDialog::AddControl(this, *((struct CREControl **)this + 968));
}
