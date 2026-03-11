/*
 * func-name: ?OnMouseMove@CREDialog@@IAEXUtagPOINT@@@Z
 * func-address: 0x100a9a80
 * callers: 0x100afae0
 * callees: 0x100a99f0
 */

void __thiscall CREDialog::OnMouseMove(struct CREControl **this, struct tagPOINT a2)
{
  struct CREControl *ControlAtPoint; // eax
  struct CREControl *v4; // ecx
  struct CREControl *v5; // esi

  ControlAtPoint = CREDialog::GetControlAtPoint((CREDialog *)this, a2);
  v4 = this[43];
  v5 = ControlAtPoint;
  if ( ControlAtPoint != v4 )
  {
    if ( v4 )
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v4 + 112))(v4);
    this[43] = v5;
    if ( v5 )
      (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v5 + 108))(v5);
  }
}
