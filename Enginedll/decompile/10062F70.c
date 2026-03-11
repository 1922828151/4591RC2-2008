/*
 * func-name: sub_10062F70
 * func-address: 0x10062f70
 * callers: 0x10060bc0, 0x10060ca0, 0x10060d50, 0x10060e00
 * callees: 0x10062e00, 0x100ff700, 0x101a2500
 */

void __thiscall sub_10062F70(_DWORD *this)
{
  int v2; // eax

  sub_10062E00(this);
  v2 = this[1];
  if ( v2 )
  {
    sub_100FF700(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
