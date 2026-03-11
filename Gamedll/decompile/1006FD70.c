/*
 * func-name: sub_1006FD70
 * func-address: 0x1006fd70
 * callers: 0x10010523
 * callees: 0x10010523, 0x102c9d50
 */

void __stdcall sub_1006FD70(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 21); v1 = i )
  {
    sub_10010523(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
