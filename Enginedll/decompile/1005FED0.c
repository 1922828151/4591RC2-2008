/*
 * func-name: sub_1005FED0
 * func-address: 0x1005fed0
 * callers: none
 * callees: 0x1005fcb0
 */

__int16 __thiscall sub_1005FED0(void *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // edi

  v6 = (*(unsigned __int16 (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 16))(this, a3, v6);
  sub_1005FCB0((int)this - 4, v6, a4, a5);
  return v6;
}
