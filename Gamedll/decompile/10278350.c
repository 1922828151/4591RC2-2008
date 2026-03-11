/*
 * func-name: ?SetRange@COccupyEstabUI@@QAEXM@Z_0
 * func-address: 0x10278350
 * callers: 0x1000eaed
 * callees: none
 */

void __thiscall COccupyEstabUI::SetRange(COccupyEstabUI *this, float a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 969);
  *(float *)(v2 + 708) = a2;
  *(float *)(v2 + 712) = 0.0;
}
