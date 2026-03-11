/*
 * func-name: sub_1001EEA0
 * func-address: 0x1001eea0
 * callers: none
 * callees: none
 */

char __thiscall sub_1001EEA0(int this)
{
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 8)
                                                                                                + 12))(
    *(_DWORD *)(this + 8),
    *(_DWORD *)(this + 12),
    *(_DWORD *)(this + 24),
    *(_DWORD *)(this + 28),
    *(_DWORD *)(this + 16),
    *(_DWORD *)(this + 20),
    *(_DWORD *)(this + 32),
    this + 36,
    this + 64,
    this + 68);
  return 1;
}
