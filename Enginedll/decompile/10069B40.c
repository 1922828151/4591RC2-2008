/*
 * func-name: ?Render@CREControl@@UAEXPAUIDirect3DDevice9@@MUtagRECT@@@Z
 * func-address: 0x10069b40
 * callers: none
 * callees: none
 */

void __thiscall CREControl::Render(CREControl *this, struct IDirect3DDevice9 *a2, float a3, struct tagRECT a4)
{
  (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(*(_DWORD *)this + 20))(a2, LODWORD(a3));
}
