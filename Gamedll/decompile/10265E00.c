/*
 * func-name: sub_10265E00
 * func-address: 0x10265e00
 * callers: none
 * callees: 0x10017634, 0x102c9d50
 */

int **__thiscall sub_10265E00(int *this, int **a2, int *a3, void *a4, int *a5, void *a6)
{
  int v7; // esi
  void *v8; // ebp
  void *v9; // edi
  void *v10; // ebp
  int **result; // eax
  int v12; // ecx
  void (__cdecl *v13)(); // ebx
  _DWORD *v14; // ebx
  int v15; // esi
  int i; // ebp
  int v17; // [esp+0h] [ebp-2Ch]
  int v18; // [esp+4h] [ebp-28h]
  int v20; // [esp+18h] [ebp-14h]

  v7 = (int)a3;
  v8 = *(void **)this[1];
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_30;
  v10 = (void *)this[1];
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_10017634(v17, v18);
    result = a2;
    v12 = this[1];
    *a2 = this;
  }
  else
  {
LABEL_30:
    while ( 1 )
    {
      if ( v7 && (int *)v7 == a5 )
      {
        v13 = _invalid_parameter_noinfo;
      }
      else
      {
        v13 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v12 = (int)a6;
      if ( v9 == a6 )
        break;
      v20 = v7;
      if ( !v7 )
        v13();
      if ( v9 == *(void **)(v7 + 4) )
        v13();
      v14 = *(_DWORD **)v9;
      if ( v9 != (void *)this[1] )
      {
        **((_DWORD **)v9 + 1) = v14;
        *(_DWORD *)(*(_DWORD *)v9 + 4) = *((_DWORD *)v9 + 1);
        v15 = *((_DWORD *)v9 + 4);
        if ( v15 )
        {
          for ( i = *((_DWORD *)v9 + 5); v15 != i; v15 += 128 )
          {
            std::wstring::~wstring((void *)(v15 + 100));
            std::wstring::~wstring((void *)(v15 + 72));
            std::string::~string((void *)(v15 + 4));
          }
          operator delete(*((void **)v9 + 4));
        }
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 5) = 0;
        *((_DWORD *)v9 + 6) = 0;
        operator delete(v9);
        --this[2];
      }
      v7 = v20;
      v9 = v14;
    }
    result = a2;
    *a2 = a5;
  }
  result[1] = (int *)v12;
  return result;
}
