/*
 * func-name: sub_100A2630
 * func-address: 0x100a2630
 * callers: 0x100109d3
 * callees: 0x100109d3, 0x102c9d50
 */

void __stdcall sub_100A2630(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 21); v1 = i )
  {
    sub_100109D3(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
