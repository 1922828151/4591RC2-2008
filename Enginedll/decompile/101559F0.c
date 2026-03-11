/*
 * func-name: ?ClearControl@CControlBox@@QAEXXZ
 * func-address: 0x101559f0
 * callers: none
 * callees: none
 */

void __thiscall CControlBox::ClearControl(CControlBox *this)
{
  unsigned int v1; // edi
  int i; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char *v7; // edi
  char *v8; // ebp
  char *v9; // ebx
  char *v10; // eax
  int v11; // ecx

  v1 = 0;
  for ( i = 0; ; i += 12 )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || v1 >= (*((_DWORD *)this + 135) - v4) / 12 )
      break;
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v1 >= (*((_DWORD *)this + 135) - v5) / 12 )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(*((_DWORD *)this + 134) + i);
    if ( v6 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 4))(v6, 1);
    ++v1;
  }
  v7 = (char *)*((_DWORD *)this + 135);
  if ( *((_DWORD *)this + 134) > (unsigned int)v7 )
    invalid_parameter_noinfo();
  v8 = (char *)*((_DWORD *)this + 134);
  if ( (unsigned int)v8 > *((_DWORD *)this + 135) )
    invalid_parameter_noinfo();
  if ( v8 != v7 )
  {
    v9 = (char *)*((_DWORD *)this + 135);
    v10 = v7;
    if ( v7 != v9 )
    {
      v11 = v8 - v7;
      do
      {
        *(_DWORD *)&v10[v11] = *(_DWORD *)v10;
        *(_DWORD *)&v10[v11 + 4] = *((_DWORD *)v10 + 1);
        *(_DWORD *)&v10[v11 + 8] = *((_DWORD *)v10 + 2);
        v10 += 12;
      }
      while ( v10 != v9 );
    }
    *((_DWORD *)this + 135) = &v8[12 * ((v9 - v7) / 12)];
  }
}
