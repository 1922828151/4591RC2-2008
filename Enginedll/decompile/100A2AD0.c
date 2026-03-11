/*
 * func-name: ?SetRateColor@CProgressBTN@@QAEXABUD3DXCOLOR@@@Z
 * func-address: 0x100a2ad0
 * callers: none
 * callees: none
 */

void __thiscall CProgressBTN::SetRateColor(CProgressBTN *this, const struct D3DXCOLOR *a2)
{
  *((_DWORD *)this + 208) = *(_DWORD *)a2;
  *((_DWORD *)this + 209) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 210) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 211) = *((_DWORD *)a2 + 3);
}
