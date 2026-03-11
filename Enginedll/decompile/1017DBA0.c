/*
 * func-name: sub_1017DBA0
 * func-address: 0x1017dba0
 * callers: 0x10096b90, 0x100dbc90, 0x100dcbd0
 * callees: 0x100116a0
 */

int __thiscall sub_1017DBA0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10)
{
  _DWORD *v10; // ebp
  int v12; // ebx
  unsigned int i; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *v19; // [esp+14h] [ebp-10h]

  v10 = (_DWORD *)a9;
  v19 = a10;
  v12 = 0;
  for ( i = 0; ; ++i )
  {
    v14 = this[9];
    if ( !v14 || i >= (this[10] - v14) / 28 )
      break;
    v15 = this[9];
    if ( !v15 || i >= (this[10] - v15) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v12 + this[9], &a2) )
    {
      v16 = this[1];
      if ( !v16 || i >= (this[2] - v16) / 28 )
        invalid_parameter_noinfo();
      sub_100116A0(v10, (void *)(v12 + this[1]));
      v17 = this[5];
      if ( !v17 || i >= (this[6] - v17) / 28 )
        invalid_parameter_noinfo();
      sub_100116A0(v19, (void *)(v12 + this[5]));
    }
    v12 += 28;
  }
  return std::string::~string(&a2);
}
