/*
 * func-name: sub_100E16C0
 * func-address: 0x100e16c0
 * callers: 0x10019c5e
 * callees: 0x10019c5e, 0x102c9d50
 */

void __stdcall sub_100E16C0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 21); v1 = i )
  {
    sub_10019C5E(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
