/*
 * func-name: sub_101766F0
 * func-address: 0x101766f0
 * callers: 0x10173030
 * callees: 0x1003b730, 0x101a2500
 */

_DWORD *__thiscall sub_101766F0(int this, _DWORD *a2, int a3, char *a4)
{
  char *v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int i; // esi
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  _DWORD *v12; // ebx
  _DWORD *v13; // ecx
  _DWORD **v14; // eax
  _DWORD *v15; // ebx
  bool v16; // zf
  _DWORD *v17; // ebp
  _DWORD *result; // eax
  _DWORD *v19; // [esp+0h] [ebp-1Ch]

  if ( !a3 )
    invalid_parameter_noinfo();
  v5 = a4;
  if ( a4 == *(char **)(a3 + 4) )
    invalid_parameter_noinfo();
  v6 = *(_DWORD *)(this + 32);
  v7 = v6 & sub_1003B730((int)(a4 + 8));
  if ( *(_DWORD *)(this + 36) <= v7 )
    v7 += -1 - (v6 >> 1);
  for ( i = v7; ; --i )
  {
    v9 = *(_DWORD *)(this + 20);
    if ( !v9 || i >= (*(_DWORD *)(this + 24) - v9) >> 3 )
      invalid_parameter_noinfo();
    v10 = 8 * i + *(_DWORD *)(this + 20);
    if ( a3 != *(_DWORD *)v10 )
      invalid_parameter_noinfo();
    if ( a4 != *(char **)(v10 + 4) )
      break;
    v11 = *(_DWORD *)(this + 20);
    if ( !v11 || i >= (*(_DWORD *)(this + 24) - v11) >> 3 )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(8 * i + *(_DWORD *)(this + 20));
    if ( !*v12 )
      invalid_parameter_noinfo();
    if ( v12[1] == *(_DWORD *)(*v12 + 4) )
      invalid_parameter_noinfo();
    v12[1] = *(_DWORD *)v12[1];
    if ( !i )
      break;
  }
  if ( a4 == *(char **)(a3 + 4) )
    invalid_parameter_noinfo();
  v13 = *(_DWORD **)a4;
  v19 = *(_DWORD **)a4;
  if ( a4 != *(char **)(this + 8) )
  {
    **((_DWORD **)a4 + 1) = v13;
    *(_DWORD *)(*(_DWORD *)a4 + 4) = *((_DWORD *)a4 + 1);
    v14 = (_DWORD **)*((_DWORD *)a4 + 10);
    v15 = *v14;
    *v14 = v14;
    *(_DWORD *)(*((_DWORD *)a4 + 10) + 4) = *((_DWORD *)a4 + 10);
    v16 = v15 == *((_DWORD **)a4 + 10);
    *((_DWORD *)a4 + 11) = 0;
    if ( !v16 )
    {
      do
      {
        v17 = (_DWORD *)*v15;
        std::string::~string(v15 + 3);
        operator delete(v15);
        v15 = v17;
      }
      while ( v17 != *((_DWORD **)a4 + 10) );
      v5 = a4;
    }
    operator delete(*((void **)a4 + 10));
    *((_DWORD *)a4 + 10) = 0;
    std::string::~string(a4 + 8);
    operator delete(v5);
    v13 = v19;
    --*(_DWORD *)(this + 12);
  }
  result = a2;
  a2[1] = v13;
  *a2 = a3;
  return result;
}
