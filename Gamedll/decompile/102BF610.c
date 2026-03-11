/*
 * func-name: sub_102BF610
 * func-address: 0x102bf610
 * callers: none
 * callees: 0x1000ab4b
 */

void __thiscall sub_102BF610(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, void *a10)
{
  void *v10; // ebp
  int v12; // ebx
  unsigned int i; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // [esp+14h] [ebp-10h]

  v10 = (void *)a9;
  v18 = a10;
  v12 = 0;
  for ( i = 0; ; ++i )
  {
    v14 = this[9];
    if ( !v14 || i >= (this[10] - v14) / 28 )
      break;
    v15 = this[9];
    if ( !v15 || i >= (this[10] - v15) / 28 )
      _invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v12 + this[9], &a2) )
    {
      v16 = this[1];
      if ( !v16 || i >= (this[2] - v16) / 28 )
        _invalid_parameter_noinfo();
      sub_1000AB4B(v10, (void *)(v12 + this[1]));
      v17 = this[5];
      if ( !v17 || i >= (this[6] - v17) / 28 )
        _invalid_parameter_noinfo();
      sub_1000AB4B(v18, (void *)(v12 + this[5]));
    }
    v12 += 28;
  }
  std::string::~string(&a2);
}
