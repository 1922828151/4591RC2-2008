/*
 * func-name: ?SetStartProgress@COccupyEstabUI@@QAEXM@Z_0
 * func-address: 0x10278370
 * callers: 0x10003d91
 * callees: none
 */

void __thiscall COccupyEstabUI::SetStartProgress(COccupyEstabUI *this, float a2)
{
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 969) + 200))(LODWORD(a2));
  *((float *)this + 973) = a2;
}
