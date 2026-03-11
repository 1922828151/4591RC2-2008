/*
 * func-name: ?RemoveNestedDialog@CTYDialog@@IAEXH@Z
 * func-address: 0x100c2040
 * callers: 0x100c5470
 * callees: none
 */

void __thiscall CTYDialog::RemoveNestedDialog(CTYDialog *this, int a2)
{
  unsigned int v2; // ebx
  int i; // ebp
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // edi
  _DWORD *v9; // edi
  _DWORD *v10; // edx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx

  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v5 = *((_DWORD *)this + 939);
    if ( !v5 || v2 >= (*((_DWORD *)this + 940) - v5) / 12 )
      break;
    v6 = *((_DWORD *)this + 939);
    if ( !v6 || v2 >= (*((_DWORD *)this + 940) - v6) / 12 )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 939);
    if ( *(_DWORD *)(v7 + i) == a2 )
    {
      v8 = *((_DWORD *)this + 939);
      if ( v7 > *((_DWORD *)this + 940) )
        invalid_parameter_noinfo();
      v9 = (_DWORD *)(i + v8);
      if ( (unsigned int)v9 > *((_DWORD *)this + 940) || (unsigned int)v9 < *((_DWORD *)this + 939) )
        invalid_parameter_noinfo();
      v10 = (_DWORD *)*((_DWORD *)this + 940);
      v11 = v9 + 3;
      if ( v9 + 3 != v10 )
      {
        v12 = v9;
        do
        {
          *v12 = *v11;
          v12[1] = v11[1];
          v12[2] = v11[2];
          v11 += 3;
          v12 += 3;
        }
        while ( v11 != v10 );
      }
      *((_DWORD *)this + 940) -= 12;
    }
    ++v2;
  }
}
