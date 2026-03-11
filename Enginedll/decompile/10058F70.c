/*
 * func-name: sub_10058F70
 * func-address: 0x10058f70
 * callers: 0x1005b3f0, 0x1005d480, 0x10074c30
 * callees: 0x10058580, 0x1006e0b0
 */

_DWORD *__thiscall sub_10058F70(
        _DWORD *this,
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        unsigned int a8)
{
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // edi
  _DWORD *result; // eax
  _DWORD *v25; // [esp-8h] [ebp-20h]
  unsigned int v26; // [esp+10h] [ebp-8h]
  unsigned int v27; // [esp+14h] [ebp-4h]

  v9 = this[3];
  if ( v9 > v9 + this[4] )
    invalid_parameter_noinfo();
  if ( !a4 || a4 != this )
    invalid_parameter_noinfo();
  v27 = a5 - v9;
  if ( !a7 || a7 != a4 )
    invalid_parameter_noinfo();
  v10 = a8;
  v26 = a8 - a5;
  v11 = this[3];
  v12 = v11 + this[4];
  if ( v11 > v12 )
    invalid_parameter_noinfo();
  if ( this != a7 )
    invalid_parameter_noinfo();
  if ( v27 >= v12 - v10 )
  {
    v17 = this[3] + this[4];
    v18 = this[3];
    if ( v18 > v17 || v17 > v18 + this[4] )
      invalid_parameter_noinfo();
    sub_10058580(&a6, 0, a7, v10, 0, (int)this, v17, 0, a4, a5);
    v19 = v26;
    if ( v26 )
    {
      v20 = this[4];
      do
      {
        if ( v20 )
        {
          if ( !--v20 )
            this[3] = 0;
        }
        --v19;
      }
      while ( v19 );
      this[4] = v20;
    }
  }
  else
  {
    v25 = a7;
    v13 = this[3];
    if ( v13 > v13 + this[4] )
      invalid_parameter_noinfo();
    sub_1006E0B0(&a6, 0, this, v13, 0, a4, a5, 0, v25, v10);
    v14 = v26;
    if ( v26 )
    {
      v15 = this[4];
      do
      {
        if ( v15 )
        {
          v16 = this[2];
          if ( (unsigned int)(4 * v16) <= ++this[3] )
            this[3] = 0;
          if ( !--v15 )
            this[3] = 0;
        }
        --v14;
      }
      while ( v14 );
      this[4] = v15;
    }
  }
  v21 = this[3];
  if ( v21 > v21 + this[4] )
    invalid_parameter_noinfo();
  v22 = this[3];
  v23 = v27 + v21;
  if ( v23 > v22 + this[4] || v23 < v22 )
    invalid_parameter_noinfo();
  result = a2;
  a2[2] = v23;
  a2[1] = this;
  *a2 = 0;
  return result;
}
