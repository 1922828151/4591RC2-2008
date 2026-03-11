/*
 * func-name: sub_10062570
 * func-address: 0x10062570
 * callers: none
 * callees: 0x10060230, 0x101a2500
 */

char *__thiscall sub_10062570(char *this, char a2)
{
  sub_10060230(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
