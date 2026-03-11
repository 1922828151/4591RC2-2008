/*
 * func-name: sub_100F95B0
 * func-address: 0x100f95b0
 * callers: 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x10076ef0
 */

unsigned int __thiscall sub_100F95B0(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // edi
  unsigned int v6; // ebx
  unsigned int result; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // [esp+Ch] [ebp-4h]

  v4 = a4;
  v6 = 0;
  v14 = 0;
  result = std::vector<Model *>::size(a4);
  if ( result )
  {
    while ( 1 )
    {
      v8 = v4[1];
      if ( !v8 || v6 >= (v4[2] - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = *(_DWORD *)(v4[1] + 4 * v6);
      v10 = 60 * v9;
      v11 = 3;
      do
      {
        v12 = this[6];
        if ( !v12 || v9 >= (this[7] - v12) / 60 )
          invalid_parameter_noinfo();
        v13 = this[6];
        if ( *(_DWORD *)(v10 + v13) == a2 )
        {
          if ( !v13 || v9 >= (this[7] - v13) / 60 )
            invalid_parameter_noinfo();
          *(_DWORD *)(v10 + this[6]) = a3;
        }
        v10 += 4;
        --v11;
      }
      while ( v11 );
      ++v14;
      result = std::vector<Model *>::size(a4);
      if ( v14 >= result )
        break;
      v4 = a4;
      v6 = v14;
    }
  }
  return result;
}
