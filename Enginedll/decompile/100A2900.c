/*
 * func-name: ?SetRateColor@CProgressBar@@QAEXABUD3DXCOLOR@@@Z
 * func-address: 0x100a2900
 * callers: none
 * callees: none
 */

void __thiscall CProgressBar::SetRateColor(CProgressBar *this, const struct D3DXCOLOR *a2)
{
  *((_DWORD *)this + 179) = *(_DWORD *)a2;
  *((_DWORD *)this + 180) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 181) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 3);
}
