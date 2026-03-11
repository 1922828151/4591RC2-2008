/*
 * func-name: ?Render@CREButton@@UAEXPAUIDirect3DDevice9@@MUtagRECT@@H@Z
 * func-address: 0x100a36c0
 * callers: none
 * callees: none
 */

void __thiscall CREButton::Render(CREButton *this, struct IDirect3DDevice9 *a2, float a3, struct tagRECT a4, int a5)
{
  char v6; // bl
  void (__thiscall *v7)(CREButton *, struct IDirect3DDevice9 *, _DWORD, LONG, LONG, LONG, LONG); // edx

  if ( a5 == 5 )
  {
    v6 = *((_BYTE *)this + 779);
    v7 = *(void (__thiscall **)(CREButton *, struct IDirect3DDevice9 *, _DWORD, LONG, LONG, LONG, LONG))(*(_DWORD *)this + 16);
    *((_BYTE *)this + 779) = 1;
    v7(this, a2, LODWORD(a3), a4.left, a4.top, a4.right, a4.bottom);
    *((_BYTE *)this + 779) = v6;
  }
}
