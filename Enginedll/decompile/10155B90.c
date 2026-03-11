/*
 * func-name: ??1CTYMenu@@UAE@XZ
 * func-address: 0x10155b90
 * callers: 0x100a2d70
 * callees: 0x100c9e60, 0x100d26d0
 */

void __thiscall CTYMenu::~CTYMenu(CTYMenu *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &CTYMenu::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 980);
  if ( v2 )
  {
    (**v2)(v2, 1);
    *((_DWORD *)this + 980) = 0;
  }
  sub_100D26D0((int)this + 3872);
  CTYDialog::~CTYDialog(this);
}
