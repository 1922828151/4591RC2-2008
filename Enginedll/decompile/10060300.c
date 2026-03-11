/*
 * func-name: sub_10060300
 * func-address: 0x10060300
 * callers: none
 * callees: 0x10061d60
 */

__int16 __thiscall sub_10060300(_DWORD **this, int a2, int a3, int a4)
{
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // eax

  v5 = this + 6;
  v6 = (unsigned __int16)sub_10061D60(this + 6);
  v7 = 12 * v6;
  *(_DWORD *)(v7 + *v5) = a2;
  *(_WORD *)(v7 + *v5 + 4) = -1;
  (*(void (__thiscall **)(_DWORD *, int, int, _DWORD **, int))(*this[27] + 8))(this[27], a3, a4, this + 1, v6);
  return v6;
}
