/*
 * func-name: sub_1006FFA0
 * func-address: 0x1006ffa0
 * callers: 0x10013a5c
 * callees: 0x10013a5c, 0x102c9d50
 */

void __stdcall sub_1006FFA0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 17); v1 = i )
  {
    sub_10013A5C(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
