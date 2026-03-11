/*
 * func-name: ?DeleteAllItems@CItemHolder@@QAEXXZ
 * func-address: 0x10152b30
 * callers: none
 * callees: 0x1014fae0, 0x101a2500
 */

void __thiscall CItemHolder::DeleteAllItems(CItemHolder *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  void *v6; // ebx
  int v7; // ecx
  void *v8; // edi

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 135);
    if ( !v3 || i >= (*((_DWORD *)this + 136) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 135);
    if ( *(_DWORD *)(v4 + 4 * i) )
    {
      if ( !v4 || i >= (*((_DWORD *)this + 136) - v4) >> 2 )
        invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 135);
      v6 = *(void **)(v5 + 4 * i);
      if ( v6 )
      {
        sub_1014FAE0(*(_DWORD **)(v5 + 4 * i));
        operator delete(v6);
      }
      v7 = *((_DWORD *)this + 135);
      if ( !v7 || i >= (*((_DWORD *)this + 136) - v7) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 135) + 4 * i) = 0;
    }
  }
  v8 = (void *)*((_DWORD *)this + 156);
  if ( v8 )
  {
    sub_1014FAE0(*((_DWORD **)this + 156));
    operator delete(v8);
    *((_DWORD *)this + 156) = 0;
  }
}
