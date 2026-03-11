/*
 * func-name: sub_100CEDF0
 * func-address: 0x100cedf0
 * callers: 0x1006dc40, 0x100cedf0, 0x100cf300, 0x100cf670, 0x100d0080, 0x100d01d0, 0x10149c20
 * callees: 0x100cedf0, 0x101a2500
 */

void __stdcall sub_100CEDF0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 21); v1 = i )
  {
    sub_100CEDF0(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
