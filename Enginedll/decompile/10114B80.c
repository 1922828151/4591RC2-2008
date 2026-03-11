/*
 * func-name: sub_10114B80
 * func-address: 0x10114b80
 * callers: 0x1010c190, 0x10115620, 0x101157a0
 * callees: 0x101a2500
 */

void __cdecl sub_10114B80(int *a1, int *a2)
{
  int *i; // edi
  int v3; // esi
  int j; // ebx

  for ( i = a1; i != a2; i += 4 )
  {
    v3 = i[1];
    if ( v3 )
    {
      for ( j = i[2]; v3 != j; v3 += 28 )
        std::string::~string(v3);
      operator delete((void *)i[1]);
    }
    i[1] = 0;
    i[2] = 0;
    i[3] = 0;
  }
}
