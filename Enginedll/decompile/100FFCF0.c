/*
 * func-name: sub_100FFCF0
 * func-address: 0x100ffcf0
 * callers: 0x100ffcf0, 0x10100380
 * callees: 0x100ffcf0, 0x101a2500
 */

void __stdcall sub_100FFCF0(void **a1)
{
  void **v1; // esi
  void **i; // edi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 41); v1 = i )
  {
    sub_100FFCF0(i[2]);
    i = (void **)*i;
    if ( v1[7] )
      operator delete(v1[7]);
    v1[7] = 0;
    v1[8] = 0;
    v1[9] = 0;
    operator delete(v1);
  }
}
