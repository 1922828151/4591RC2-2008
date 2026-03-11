/*
 * func-name: sub_100CE6C0
 * func-address: 0x100ce6c0
 * callers: 0x100ceb10
 * callees: none
 */

int __cdecl sub_100CE6C0(int a1, int a2, int a3, int a4, int (__cdecl *a5)(_DWORD, int))
{
  int v5; // edi
  int v6; // esi
  int result; // eax
  bool v8; // cc

  v5 = a2;
  v6 = (a2 - 1) / 2;
  if ( a3 >= a2 )
  {
    result = a1;
    *(_DWORD *)(a1 + 4 * a2) = a4;
  }
  else
  {
    do
    {
      result = a5(*(_DWORD *)(a1 + 4 * v6), a4);
      if ( !(_BYTE)result )
        break;
      *(_DWORD *)(a1 + 4 * v5) = *(_DWORD *)(a1 + 4 * v6);
      v5 = v6;
      result = (v6 - 1) / 2;
      v8 = a3 < v6;
      v6 = result;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 4 * v5) = a4;
  }
  return result;
}
