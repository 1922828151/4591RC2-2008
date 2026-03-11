/*
 * func-name: sub_10062FE0
 * func-address: 0x10062fe0
 * callers: 0x10063110
 * callees: 0x10062ab0, 0x10062b80, 0x101a2500
 */

void __thiscall sub_10062FE0(int *this, unsigned int a2, char a3, void *a4, int a5, int a6)
{
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // eax
  char *v10; // ebp
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // edi
  bool v14; // cc
  _DWORD v15[5]; // [esp+10h] [ebp-14h] BYREF

  v7 = this[1];
  v8 = 0;
  v15[4] = 0;
  if ( v7 )
    v9 = (int)(this[2] - v7) >> 4;
  else
    v9 = 0;
  if ( v9 >= a2 )
  {
    if ( v7 )
    {
      v11 = this[2];
      if ( a2 < (int)(v11 - v7) >> 4 )
      {
        if ( v7 > v11 )
          invalid_parameter_noinfo();
        v12 = this[1];
        if ( v12 > this[2] )
          invalid_parameter_noinfo();
        v13 = v12 + 16 * a2;
        v14 = v13 <= this[2];
        v15[1] = v12;
        if ( !v14 || v13 < this[1] )
          invalid_parameter_noinfo();
        sub_10062AB0(this, v15, (int)this, v13, (int)this, v11);
      }
    }
  }
  else
  {
    if ( v7 )
      v8 = (int)(this[2] - v7) >> 4;
    v10 = (char *)this[2];
    if ( v7 > (unsigned int)v10 )
      invalid_parameter_noinfo();
    sub_10062B80((int)this, (int)this, v10, a2 - v8, &a3);
  }
  if ( a4 )
    operator delete(a4);
}
