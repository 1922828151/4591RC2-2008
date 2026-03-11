/*
 * func-name: sub_1000A000
 * func-address: 0x1000a000
 * callers: 0x100076b0, 0x10007720, 0x10009550
 * callees: 0x100294f2
 */

void __stdcall sub_1000A000(int a1)
{
  void **v1; // eax
  void **v2; // edi
  bool v3; // zf
  void **v4; // ebx

  v1 = *(void ***)(a1 + 4);
  v2 = (void **)*v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(void ***)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (void **)*v2;
      if ( v2[4] )
        operator delete(v2[4]);
      v2[4] = 0;
      v2[5] = 0;
      v2[6] = 0;
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(void ***)(a1 + 4) );
  }
}
