/*
 * func-name: sub_10115520
 * func-address: 0x10115520
 * callers: 0x101156e0, 0x10115700, 0x10115740, 0x10115c90, 0x10115d40
 * callees: 0x101a2500
 */

void __cdecl sub_10115520(int *a1, int *a2)
{
  int *i; // esi
  int v3; // edi
  int j; // ebx
  int v5; // edi
  int k; // ebx

  for ( i = a1; i != a2; i += 8 )
  {
    v3 = i[5];
    if ( v3 )
    {
      for ( j = i[6]; v3 != j; v3 += 28 )
        std::string::~string(v3);
      operator delete((void *)i[5]);
    }
    i[5] = 0;
    i[6] = 0;
    i[7] = 0;
    v5 = i[1];
    if ( v5 )
    {
      for ( k = i[2]; v5 != k; v5 += 28 )
        std::string::~string(v5);
      operator delete((void *)i[1]);
    }
    i[1] = 0;
    i[2] = 0;
    i[3] = 0;
  }
}
