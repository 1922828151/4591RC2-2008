/*
 * func-name: ?RefreshEnergy@CStatusUI@@AAEXMM@Z_0
 * func-address: 0x1028b600
 * callers: 0x10008e22
 * callees: none
 */

void __thiscall CStatusUI::RefreshEnergy(CStatusUI *this, float a2, float a3)
{
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1011) + 200))(LODWORD(a2));
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1012) + 200))(LODWORD(a3));
}
