/*
 * func-name: sub_10009E60
 * func-address: 0x10009e60
 * callers: 0x10002840, 0x100028b0, 0x100029f0, 0x10009320, 0x10018c00
 * callees: 0x100294f2
 */

void __stdcall sub_10009E60(int a1)
{
  void **v1; // ecx
  void **v2; // edi
  bool v3; // zf
  void **v4; // ebx
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  void **v8; // [esp+14h] [ebp-14h]

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
      v8 = (void **)*v2;
      if ( v2[8] )
        operator delete(v2[8]);
      v2[8] = 0;
      v2[9] = 0;
      v2[10] = 0;
      v5 = (_DWORD **)v2[5];
      v6 = *v5;
      *v5 = v5;
      *((_DWORD *)v2[5] + 1) = v2[5];
      v3 = v6 == v2[5];
      v2[6] = 0;
      if ( !v3 )
      {
        do
        {
          v7 = (_DWORD *)*v6;
          operator delete(v6);
          v6 = v7;
        }
        while ( v7 != v2[5] );
        v4 = v8;
      }
      operator delete(v2[5]);
      v2[5] = 0;
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(void ***)(a1 + 4) );
  }
}
