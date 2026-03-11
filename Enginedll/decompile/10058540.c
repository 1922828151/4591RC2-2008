/*
 * func-name: sub_10058540
 * func-address: 0x10058540
 * callers: 0x10058540, 0x10059470, 0x10059e70
 * callees: 0x10058540, 0x101a2500
 */

void __stdcall sub_10058540(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 53); v1 = i )
  {
    sub_10058540(i[2]);
    i = (void **)*i;
    std::string::~string(v1 + 3);
    operator delete(v1);
  }
}
