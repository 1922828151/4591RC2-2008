/*
 * func-name: sub_10003B80
 * func-address: 0x10003b80
 * callers: 0x10003f40
 * callees: 0x100037f0
 */

int *__thiscall sub_10003B80(int *this, int *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int i; // esi
  int *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_100037F0(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 28 )
      std::string::~string(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
