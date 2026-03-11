/*
 * func-name: sub_10060420
 * func-address: 0x10060420
 * callers: none
 * callees: 0x10061b20
 */

int __thiscall sub_10060420(int this, unsigned __int16 a2)
{
  int v3; // esi
  int v4; // edi
  int result; // eax

  if ( a2 != 0xFFFF )
  {
    v3 = 44 * a2;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 52) + 12))(
      *(_DWORD *)(this + 52),
      *(unsigned __int16 *)(*(_DWORD *)(this + 20) + v3 + 12));
    v4 = this + 20;
    result = sub_10061B20(a2);
    *(_WORD *)(*(_DWORD *)v4 + v3 + 42) = *(_WORD *)(v4 + 16);
    *(_WORD *)(v4 + 16) = a2;
  }
  return result;
}
