/*
 * func-name: ?GetControlEnabled@CREDialog@@QAE_NH@Z
 * func-address: 0x100b0210
 * callers: none
 * callees: 0x100a9b20
 */

bool __thiscall CREDialog::GetControlEnabled(CREDialog *this, int a2)
{
  struct CREControl *Control; // eax

  Control = CREDialog::GetControl(this, a2);
  if ( Control )
    return (*(int (__thiscall **)(struct CREControl *))(*(_DWORD *)Control + 132))(Control);
  else
    return 0;
}
