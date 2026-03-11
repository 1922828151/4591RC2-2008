/*
 * func-name: sub_10060160
 * func-address: 0x10060160
 * callers: none
 * callees: 0x10060030
 */

void __thiscall sub_10060160(_DWORD **this, unsigned __int16 a2, int a3, int a4)
{
  _DWORD **v5; // eax

  if ( a2 != 0xFFFF )
  {
    sub_10060030((int)this, a2);
    if ( this )
      v5 = this + 1;
    else
      v5 = 0;
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD **, _DWORD))(*this[27] + 8))(this[27], a3, a4, v5, a2);
  }
}
