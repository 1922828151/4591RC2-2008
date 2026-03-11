/*
 * func-name: sub_1010B590
 * func-address: 0x1010b590
 * callers: none
 * callees: 0x1000fecf, 0x102c9d50
 */

int **__thiscall sub_1010B590(int *this, int **a2, int a3, int *a4, int *a5, int *a6)
{
  int *v8; // ebp
  int *v9; // esi
  int *v10; // ebp
  int **result; // eax
  int v12; // ecx
  void (__cdecl *v13)(); // ebp
  int *v14; // eax
  int v15; // [esp+0h] [ebp-30h]
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+38h] [ebp+8h]

  v8 = *(int **)this[1];
  if ( !a3 || (int *)a3 != this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_26;
  v10 = (int *)this[1];
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_1000FECF(v15, v16);
    result = a2;
    v12 = this[1];
    *a2 = this;
  }
  else
  {
LABEL_26:
    while ( 1 )
    {
      if ( a3 && (int *)a3 == a5 )
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
      if ( !a3 )
        v13();
      if ( v9 == *(int **)(a3 + 4) )
        v13();
      v14 = (int *)*v9;
      v17 = *v9;
      if ( v9 != (int *)this[1] )
      {
        *(_DWORD *)v9[1] = v14;
        *(_DWORD *)(*v9 + 4) = v9[1];
        std::vector<Model *>::~vector<Model *>(v9 + 17);
        std::string::~string(v9 + 9);
        std::string::~string(v9 + 2);
        operator delete(v9);
        v14 = (int *)v17;
        --this[2];
      }
      v9 = v14;
    }
    result = a2;
    *a2 = a5;
  }
  result[1] = (int *)v12;
  return result;
}
