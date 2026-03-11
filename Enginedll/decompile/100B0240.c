/*
 * func-name: ?SetControlEnabled@CREDialog@@QAEXH_N@Z
 * func-address: 0x100b0240
 * callers: none
 * callees: 0x100a9b20
 */

void __thiscall CREDialog::SetControlEnabled(CREDialog *this, int a2, int a3)
{
  struct CREControl *Control; // eax

  Control = CREDialog::GetControl(this, a2);
  if ( Control )
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 128))(Control, a3);
}
