/*
 * func-name: sub_101267E0
 * func-address: 0x101267e0
 * callers: 0x10010690
 * callees: 0x1000fc1d
 */

_DWORD *__thiscall sub_101267E0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1000FC1D(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 16 )
      std::vector<ModelFrame *>::~vector<ModelFrame *>(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
