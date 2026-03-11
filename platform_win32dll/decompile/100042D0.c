/*
 * func-name: sub_100042D0
 * func-address: 0x100042d0
 * callers: none
 * callees: 0x10004260, 0x10019870
 */

int *__thiscall sub_100042D0(int *this, char a2)
{
  sub_10004260(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
