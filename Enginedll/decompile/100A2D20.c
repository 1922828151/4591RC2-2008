/*
 * func-name: ?SetMenuHandler@CTYMenu@@QAEXPAVCTYMenuHandler@@@Z
 * func-address: 0x100a2d20
 * callers: none
 * callees: none
 */

void __thiscall CTYMenu::SetMenuHandler(CTYMenu *this, struct CTYMenuHandler *a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 980);
  if ( v3 )
  {
    (**v3)(v3, 1);
    *((_DWORD *)this + 980) = 0;
  }
  *((_DWORD *)this + 980) = a2;
}
