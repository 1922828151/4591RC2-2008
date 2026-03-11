/*
 * func-name: sub_10034530
 * func-address: 0x10034530
 * callers: 0x10034b70, 0x10035650, 0x10035930
 * callees: 0x101a2500
 */

int __thiscall sub_10034530(void *this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int i; // eax
  int v5; // ecx
  int v6; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-4h]

  if ( *((int *)this + 15) > 0 )
  {
    v2 = 1;
    v8 = 0;
    do
    {
      v3 = *(_DWORD **)(v8 + *((_DWORD *)this + 14));
      for ( i = v2; i < *((_DWORD *)this + 15); ++i )
      {
        v5 = *(_DWORD *)(*((_DWORD *)this + 14) + 4 * i);
        if ( *(_DWORD *)(v5 + 1088) == v3[272] )
          *(_DWORD *)(v5 + 1088) = 0;
      }
      v6 = v3[272];
      if ( v6 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v3[272]);
        v3[272] = 0;
      }
      operator delete(v3);
      v8 += 4;
      ++v2;
    }
    while ( v2 - 1 < *((_DWORD *)this + 15) );
  }
  if ( *((_DWORD *)this + 14) )
  {
    free(*((void **)this + 14));
    *((_DWORD *)this + 14) = 0;
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 15) = 0;
  if ( *((_DWORD *)this + 5) )
  {
    free(*((void **)this + 5));
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 8) )
  {
    free(*((void **)this + 8));
    *((_DWORD *)this + 8) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( *((_DWORD *)this + 11) )
  {
    free(*((void **)this + 11));
    *((_DWORD *)this + 11) = 0;
  }
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*((_DWORD *)this + 1));
    *((_DWORD *)this + 1) = 0;
  }
  *(_DWORD *)this = 0;
  return result;
}
