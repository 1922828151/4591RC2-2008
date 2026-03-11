/*
 * func-name: sub_10005570
 * func-address: 0x10005570
 * callers: 0x100024d0, 0x10016600, 0x100166d0
 * callees: 0x10006750, 0x10018cf2, 0x10018e1c
 */

void __stdcall sub_10005570(int a1)
{
  void ***v1; // ebp
  void ***v2; // edi
  void **v3; // edi

  TlsFree(*(_DWORD *)a1);
  v1 = *(void ****)(a1 + 32);
  if ( (unsigned int)v1 > *(_DWORD *)(a1 + 36) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v2 = *(void ****)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) > (unsigned int)v2 )
      invalid_parameter_noinfo();
    if ( v1 == v2 )
      break;
    if ( (unsigned int)v1 >= *(_DWORD *)(a1 + 36) )
      invalid_parameter_noinfo();
    v3 = *v1;
    if ( *v1 )
    {
      operator delete[](*v3);
      operator delete(v3);
    }
    if ( (unsigned int)v1 >= *(_DWORD *)(a1 + 36) )
      invalid_parameter_noinfo();
    ++v1;
  }
  sub_10006750();
  if ( *(_DWORD *)(a1 + 32) )
    operator delete(*(void **)(a1 + 32));
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
}
