/*
 * func-name: sub_100FE630
 * func-address: 0x100fe630
 * callers: 0x100fe630, 0x100fee10
 * callees: 0x100fe630, 0x101a2500
 */

void __stdcall sub_100FE630(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 17); v1 = i )
  {
    sub_100FE630(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}
