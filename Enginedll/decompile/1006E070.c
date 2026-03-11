/*
 * func-name: sub_1006E070
 * func-address: 0x1006e070
 * callers: 0x10059520, 0x10059fc0, 0x1006e070, 0x1006fab0, 0x1009ac30
 * callees: 0x1006e070, 0x101a2500
 */

void __stdcall sub_1006E070(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 45); v1 = i )
  {
    sub_1006E070(i[2]);
    i = (void **)*i;
    std::string::~string(v1 + 3);
    operator delete(v1);
  }
}
