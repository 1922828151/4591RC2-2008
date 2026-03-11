/*
 * func-name: ?Shutdown@Input@@UAEXXZ
 * func-address: 0x100dca50
 * callers: 0x100dcba0
 * callees: 0x1000dc10, 0x10029ca0, 0x100a1d10, 0x101a2500
 */

void __thiscall Input::Shutdown(Input *this)
{
  unsigned int v2; // ebx
  int *v3; // esi
  unsigned int v4; // ebp
  _DWORD *v5; // esi
  char *v6; // edi
  char *v7; // ebx
  int v8; // ebp
  unsigned int i; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  void *v15; // ebx
  int v16; // ecx
  int v17[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 8);
  v3 = (int *)((char *)this + 24);
  if ( *((_DWORD *)this + 7) > v2 )
    invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    invalid_parameter_noinfo();
  sub_1000DC10(v3, v17, (int)v3, v4, (int)v3, v2);
  v5 = (_DWORD *)((char *)this + 40);
  v6 = (char *)*((_DWORD *)this + 12);
  if ( v5[1] > (unsigned int)v6 )
    invalid_parameter_noinfo();
  v7 = (char *)v5[1];
  if ( (unsigned int)v7 > v5[2] )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase(v5, v17, (int)v5, v7, (int)v5, v6);
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    v10 = v5[1];
    if ( !v10 || i >= (v5[2] - v10) >> 2 )
      break;
    v11 = v5[1];
    if ( *(_DWORD *)(v11 + 4 * i) != v8 )
    {
      if ( !v11 || i >= (v5[2] - v11) >> 2 )
        invalid_parameter_noinfo();
      v8 = *(_DWORD *)(v5[1] + 4 * i);
      v12 = v5[1];
      if ( !v12 || i >= (v5[2] - v12) >> 2 )
        invalid_parameter_noinfo();
      v13 = v5[1];
      if ( *(_DWORD *)(v13 + 4 * i) )
      {
        if ( !v13 || i >= (v5[2] - v13) >> 2 )
          invalid_parameter_noinfo();
        v14 = v5[1];
        v15 = *(void **)(v14 + 4 * i);
        if ( v15 )
        {
          sub_10029CA0(*(int **)(v14 + 4 * i));
          operator delete(v15);
        }
        v16 = v5[1];
        if ( !v16 || i >= (v5[2] - v16) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v5[1] + 4 * i) = 0;
      }
    }
  }
}
